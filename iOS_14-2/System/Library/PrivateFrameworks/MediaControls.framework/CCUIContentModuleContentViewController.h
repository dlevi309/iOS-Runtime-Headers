/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

@class UIViewPropertyAnimator;


@protocol CCUIContentModuleContentViewController <NSObject>
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
@optional
-(void)willBecomeActive;
-(void)displayWillTurnOff;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(BOOL)canDismissPresentedContent;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(BOOL)providesOwnPlatter;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1;
-(UIViewPropertyAnimator *)customAnimator;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1;
-(double)preferredExpandedContinuousCornerRadius;
-(BOOL)shouldPerformHoverInteraction;
-(double)preferredExpandedContentWidth;
-(void)controlCenterDidDismiss;
-(void)willResignActive;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)controlCenterWillPresent;
-(CCUIModuleLayoutSize*)moduleLayoutSizeForOrientation:(long long)arg1;
-(BOOL)shouldPerformClickInteraction;

@required
-(double)preferredExpandedContentHeight;

@end

