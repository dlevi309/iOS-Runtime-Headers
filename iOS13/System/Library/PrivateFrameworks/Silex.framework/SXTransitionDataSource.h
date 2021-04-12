/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class UIView;


@protocol SXTransitionDataSource <NSObject>
@property (nonatomic,readonly) UIView * transitionContainerView; 
@property (nonatomic,readonly) UIView * transitionContentView; 
@property (nonatomic,readonly) BOOL transitionViewUsesThumbnail; 
@property (nonatomic,readonly) BOOL transitionViewIsVisible; 
@property (nonatomic,readonly) BOOL transitionViewShouldFadeInContent; 
@property (nonatomic,readonly) CGRect transitionVisibleFrame; 
@property (nonatomic,readonly) CGRect transitionContainerFrame; 
@property (nonatomic,readonly) CGRect transitionContentFrame; 
@property (nonatomic,readonly) BOOL isTransitionable; 
@required
-(UIView *)transitionContainerView;
-(UIView *)transitionContentView;
-(BOOL)transitionViewIsVisible;
-(BOOL)transitionViewShouldFadeInContent;
-(CGRect)transitionVisibleFrame;
-(CGRect)transitionContainerFrame;
-(CGRect)transitionContentFrame;
-(BOOL)isTransitionable;
-(BOOL)transitionViewUsesThumbnail;

@end

