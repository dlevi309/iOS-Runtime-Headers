/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UICoordinateSpace;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextSelectionWindowAveragedValue, UITextMagnifierTimeWeightedPoint, NSObject;

@interface UITextGestureTuning : NSObject {

	BOOL _didBreakLineThresholdBelow;
	BOOL _didBreakLineThresholdAbove;
	double _visibilityOffset;
	double _initialOffset;
	double _initialOffsetFromTopOfCaret;
	UITextSelectionWindowAveragedValue* _averagedRadius;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	long long _lastTouchType;
	BOOL _shouldUseLineThreshold;
	BOOL _shouldIncludeConstantOffset;
	BOOL _includeTipProjection;
	BOOL _strongerBiasAgainstUp;
	NSObject*<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic,__weak) NSObject*<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLineThreshold;                                      //@synthesize shouldUseLineThreshold=_shouldUseLineThreshold - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeConstantOffset;                                 //@synthesize shouldIncludeConstantOffset=_shouldIncludeConstantOffset - In the implementation block
@property (assign,nonatomic) BOOL includeTipProjection;                                        //@synthesize includeTipProjection=_includeTipProjection - In the implementation block
@property (assign,nonatomic) BOOL strongerBiasAgainstUp;                                       //@synthesize strongerBiasAgainstUp=_strongerBiasAgainstUp - In the implementation block
@property (nonatomic,readonly) double visibilityOffset;                                        //@synthesize visibilityOffset=_visibilityOffset - In the implementation block
-(void)setCoordinateSpace:(NSObject*<UICoordinateSpace>)arg1 ;
-(void)updateVisibilityOffsetForGestureState:(long long)arg1 touchType:(long long)arg2 locationInSceneReferenceSpace:(CGPoint)arg3 majorRadius:(double)arg4 ;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(id)init;
-(NSObject*<UICoordinateSpace>)coordinateSpace;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(void)updateWithTouches:(id)arg1 gestureState:(long long)arg2 ;
-(BOOL)strongerBiasAgainstUp;
-(void)setShouldIncludeConstantOffset:(BOOL)arg1 ;
-(BOOL)shouldUseLineThreshold;
-(void)setStrongerBiasAgainstUp:(BOOL)arg1 ;
-(void)setShouldUseLineThreshold:(BOOL)arg1 ;
-(void)updateWeightedPointWithGestureState:(long long)arg1 location:(CGPoint)arg2 ;
-(BOOL)shouldIncludeConstantOffset;
-(BOOL)includeTipProjection;
-(void)setIncludeTipProjection:(BOOL)arg1 ;
-(CGPoint)pointForGestureState:(long long)arg1 point:(CGPoint)arg2 translation:(CGPoint)arg3 ;
-(double)visibilityOffset;
-(void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2 ;
@end

