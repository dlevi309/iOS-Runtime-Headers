/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMedusaDecoratedDeviceApplicationSceneViewControlling <SBDeviceApplicationSceneViewControlling,SBLayoutStateTransitionObserver,SBSceneLayoutMedusaStatusBarAssertionProviding>
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
@property (assign,getter=isNubViewHidden,nonatomic) BOOL nubViewHidden; 
@property (assign,getter=isNubViewHighlighted,nonatomic) BOOL nubViewHighlighted; 
@required
-(void)setNubViewHidden:(BOOL)arg1;
-(BOOL)isNubViewHidden;
-(BOOL)isBlurred;
-(BOOL)isNubViewHighlighted;
-(void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setNubViewHighlighted:(BOOL)arg1;
-(void)setInlineAppExposeContainerViewController:(id)arg1;
-(id)animationControllerForTransitionRequest:(id)arg1;

@end

