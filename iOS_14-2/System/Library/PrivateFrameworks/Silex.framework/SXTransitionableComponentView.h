/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class UIView;


@protocol SXTransitionableComponentView <NSObject>
@property (nonatomic,readonly) UIView * transitionContainerView; 
@property (nonatomic,readonly) UIView * transitionContentView; 
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
-(void)prepareForTransitionType:(unsigned long long)arg1;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg1;

@end

