/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKPaletteTransitionDelegate;
@class NSArray, UIViewFloatAnimatableProperty;

@interface PKPaletteTransition : NSObject {

	id<PKPaletteTransitionDelegate> _delegate;
	long long _initialVisualState;
	long long _targetVisualState;
	long long _intermediateVisualState;
	long long _pointingDirection;
	NSArray* __remainingTransitionStages;
	UIViewFloatAnimatableProperty* _rotationAngleAnimatableProperty;
	UIViewFloatAnimatableProperty* _expandedToCollapsedAnimatableProperty;

}

@property (assign,setter=_setTargetVisualState:,nonatomic) long long targetVisualState;                          //@synthesize targetVisualState=_targetVisualState - In the implementation block
@property (assign,setter=_setIntermediateVisualState:,nonatomic) long long intermediateVisualState;              //@synthesize intermediateVisualState=_intermediateVisualState - In the implementation block
@property (assign,setter=_setPointingDirection:,nonatomic) long long pointingDirection;                          //@synthesize pointingDirection=_pointingDirection - In the implementation block
@property (nonatomic,retain) NSArray * _remainingTransitionStages;                                               //@synthesize _remainingTransitionStages=__remainingTransitionStages - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * rotationAngleAnimatableProperty;                    //@synthesize rotationAngleAnimatableProperty=_rotationAngleAnimatableProperty - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * expandedToCollapsedAnimatableProperty;              //@synthesize expandedToCollapsedAnimatableProperty=_expandedToCollapsedAnimatableProperty - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteTransitionDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTransitionInProgress,nonatomic,readonly) BOOL transitionInProgress; 
@property (nonatomic,readonly) long long initialVisualState;                                                     //@synthesize initialVisualState=_initialVisualState - In the implementation block
@property (nonatomic,readonly) double expandedToCollapsedRatio; 
-(id<PKPaletteTransitionDelegate>)delegate;
-(BOOL)isTransitionInProgress;
-(void)setDelegate:(id<PKPaletteTransitionDelegate>)arg1 ;
-(id)initWithInitialVisualState:(long long)arg1 ;
-(void)transitionToVisualState:(long long)arg1 ;
-(long long)intermediateVisualState;
-(double)expandedToCollapsedRatio;
-(long long)pointingDirection;
-(void)paletteDidBeginRotationAnimation;
-(void)paletteDidBeginResizingAnimation;
-(UIViewFloatAnimatableProperty *)rotationAngleAnimatableProperty;
-(void)_handleRotationAnimatablePropertyPresentationValueChanged;
-(UIViewFloatAnimatableProperty *)expandedToCollapsedAnimatableProperty;
-(void)_handleExpandedToCollapsedAnimatablePropertyPresentationValueChanged;
-(NSArray *)_remainingTransitionStages;
-(long long)targetVisualState;
-(long long)_currentStage;
-(void)set_remainingTransitionStages:(NSArray *)arg1 ;
-(void)_setTargetVisualState:(long long)arg1 ;
-(void)_moveToNextTransitionStageIfReady;
-(BOOL)_canMoveToNextTransitionStage;
-(void)_setIntermediateVisualState:(long long)arg1 ;
-(void)_setPointingDirection:(long long)arg1 ;
-(long long)initialVisualState;
-(void)setRotationAngleAnimatableProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setExpandedToCollapsedAnimatableProperty:(UIViewFloatAnimatableProperty *)arg1 ;
@end

