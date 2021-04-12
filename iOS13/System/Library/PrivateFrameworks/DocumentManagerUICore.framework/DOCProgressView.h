/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSOperationQueue, UIColor, NSProgress, DOCGhostRingView, DOCDeterminateProgressRingView, DOCIndeterminateProgressRingView, UITapGestureRecognizer;

@interface DOCProgressView : UIView {

	NSOperationQueue* _pendingAnimationQueue;
	BOOL _canShowStopButton;
	BOOL _graduallyIncreasingProgress;
	UIColor* _inactiveStrokeColor;
	UIColor* _activeStrokeColor;
	NSProgress* _observedProgress;
	DOCGhostRingView* _ghostRingView;
	DOCDeterminateProgressRingView* _determinateProgressRingView;
	DOCIndeterminateProgressRingView* _indeterminateProgressRingView;
	double _progress;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) DOCGhostRingView * ghostRingView;                                              //@synthesize ghostRingView=_ghostRingView - In the implementation block
@property (nonatomic,retain) DOCDeterminateProgressRingView * determinateProgressRingView;                  //@synthesize determinateProgressRingView=_determinateProgressRingView - In the implementation block
@property (nonatomic,retain) DOCIndeterminateProgressRingView * indeterminateProgressRingView;              //@synthesize indeterminateProgressRingView=_indeterminateProgressRingView - In the implementation block
@property (assign,nonatomic) double progress;                                                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL graduallyIncreasingProgress;                                              //@synthesize graduallyIncreasingProgress=_graduallyIncreasingProgress - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                 //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,copy) UIColor * inactiveStrokeColor;                                                   //@synthesize inactiveStrokeColor=_inactiveStrokeColor - In the implementation block
@property (nonatomic,copy) UIColor * activeStrokeColor;                                                     //@synthesize activeStrokeColor=_activeStrokeColor - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;                                                 //@synthesize observedProgress=_observedProgress - In the implementation block
@property (assign,nonatomic) BOOL canShowStopButton;                                                        //@synthesize canShowStopButton=_canShowStopButton - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleTap:(id)arg1 ;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_updateStatusPropertiesAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(DOCIndeterminateProgressRingView *)indeterminateProgressRingView;
-(DOCGhostRingView *)ghostRingView;
-(DOCDeterminateProgressRingView *)determinateProgressRingView;
-(void)_setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addToPendingAnimationQueue:(/*^block*/id)arg1 ;
-(void)setGraduallyIncreasingProgress:(BOOL)arg1 ;
-(void)setCanShowStopButton:(BOOL)arg1 ;
-(void)setActiveStrokeColor:(UIColor *)arg1 ;
-(void)setInactiveStrokeColor:(UIColor *)arg1 ;
-(void)beginGraduallyIncreasingProgress;
-(void)fadeoutWithCompletion:(/*^block*/id)arg1 ;
-(void)animateToFullRingAndHideWithCompletion:(/*^block*/id)arg1 ;
-(UIColor *)inactiveStrokeColor;
-(UIColor *)activeStrokeColor;
-(BOOL)canShowStopButton;
-(void)setGhostRingView:(DOCGhostRingView *)arg1 ;
-(void)setDeterminateProgressRingView:(DOCDeterminateProgressRingView *)arg1 ;
-(void)setIndeterminateProgressRingView:(DOCIndeterminateProgressRingView *)arg1 ;
-(BOOL)graduallyIncreasingProgress;
@end

