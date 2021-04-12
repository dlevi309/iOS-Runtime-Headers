/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMedusaDecoratedDeviceApplicationSceneViewControlling <SBDeviceApplicationSceneViewControlling,SBLayoutStateTransitionObserver>
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
@property (assign,getter=isNubViewHidden,nonatomic) BOOL nubViewHidden; 
@property (assign,getter=isNubViewHighlighted,nonatomic) BOOL nubViewHighlighted; 
@required
-(id)animationControllerForTransitionRequest:(id)arg1;
-(void)setNubViewHidden:(BOOL)arg1;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
-(void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)isBlurred;
-(void)setNubViewHighlighted:(BOOL)arg1;
-(BOOL)isNubViewHidden;
-(BOOL)isNubViewHighlighted;
-(void)setInlineAppExposeContainerViewController:(id)arg1;

@end

