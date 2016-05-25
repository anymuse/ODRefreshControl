//
//  ODRefreshControl.h
//  ODRefreshControl
//
//  Created by Fabio Ritrovato on 6/13/12.
//  Copyright (c) 2012 orange in a day. All rights reserved.
//
// https://github.com/Sephiroth87/ODRefreshControl
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ODRefreshControlContentView <NSObject>

@property (nonatomic,getter=isEnabled) BOOL enabled;
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, assign) UIActivityIndicatorViewStyle activityIndicatorViewStyle;
@property (nonatomic, strong) UIColor *activityIndicatorViewColor;

- (CGFloat)triggerHeight;
- (CGFloat)openHeight;

- (void)beginRefreshing:(BOOL)animated;
- (void)endRefreshing;

@end

@interface ODRefreshControl : UIControl

@property (nonatomic, readonly, getter=isRefreshing) BOOL refreshing;
@property (nonatomic, strong) UIColor *tintColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) UIActivityIndicatorViewStyle activityIndicatorViewStyle UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *activityIndicatorViewColor UI_APPEARANCE_SELECTOR;

- (instancetype)initInScrollView:(UIScrollView *)scrollView;

// use custom activity indicator
- (instancetype)initInScrollView:(UIScrollView *)scrollView activityIndicatorView:(nullable UIView *)activity;

// Tells the control that a refresh operation was started programmatically
- (void)beginRefreshing;

// Tells the control the refresh operation has ended
- (void)endRefreshing;

@end

NS_ASSUME_NONNULL_END
