/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

@class UIViewPropertyAnimator;


@protocol CCUIContentModuleContentViewController <NSObject>
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@optional
-(void)willBecomeActive;
-(void)willResignActive;
-(UIViewPropertyAnimator *)customAnimator;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)displayWillTurnOff;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(double)preferredExpandedContentWidth;
-(double)preferredExpandedContinuousCornerRadius;
-(BOOL)providesOwnPlatter;
-(BOOL)shouldPerformHoverInteraction;

@required
-(double)preferredExpandedContentHeight;

@end

