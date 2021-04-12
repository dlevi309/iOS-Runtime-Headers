/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray, NSMutableDictionary;

@interface UIKBProductivityPinchGestureRecognizer : UIGestureRecognizer {

	BOOL _recognized;
	CGAffineTransform _transform;
	id _transformAnalyzer;
	BOOL _hasFailedOnOtherDominantMotion;
	unsigned long long _numberOfTouchesRequired;
	BOOL _multitouchTimerEnabled;
	BOOL _tooMuchSingleMovement;
	double _avgTouchesToCentroidDistance;
	long long _pinchDirection;
	double _beginPinchTimestamp;
	double _beforeReductionTimeInterval;
	double _beginPerimeter;
	NSMutableArray* _activeTouches;
	double _allowableElapsedTimeForAllRequiredTouches;
	NSMutableDictionary* _beginTouchLocations;
	CGPoint _beginCentroid;

}

@property (assign,nonatomic) double beginPinchTimestamp;                                    //@synthesize beginPinchTimestamp=_beginPinchTimestamp - In the implementation block
@property (assign,nonatomic) double beforeReductionTimeInterval;                            //@synthesize beforeReductionTimeInterval=_beforeReductionTimeInterval - In the implementation block
@property (assign,nonatomic) double beginPerimeter;                                         //@synthesize beginPerimeter=_beginPerimeter - In the implementation block
@property (assign,nonatomic) CGPoint beginCentroid;                                         //@synthesize beginCentroid=_beginCentroid - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeTouches;                                //@synthesize activeTouches=_activeTouches - In the implementation block
@property (assign,nonatomic) double allowableElapsedTimeForAllRequiredTouches;              //@synthesize allowableElapsedTimeForAllRequiredTouches=_allowableElapsedTimeForAllRequiredTouches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * beginTouchLocations;                     //@synthesize beginTouchLocations=_beginTouchLocations - In the implementation block
@property (assign,nonatomic) BOOL tooMuchSingleMovement;                                    //@synthesize tooMuchSingleMovement=_tooMuchSingleMovement - In the implementation block
@property (nonatomic,readonly) double avgTouchesToCentroidDistance;                         //@synthesize avgTouchesToCentroidDistance=_avgTouchesToCentroidDistance - In the implementation block
@property (nonatomic,readonly) long long pinchDirection;                                    //@synthesize pinchDirection=_pinchDirection - In the implementation block
+(id)productivityPinchGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3 ;
-(NSMutableArray *)activeTouches;
-(void)startMultitouchTimer:(double)arg1 ;
-(void)multitouchExpired:(id)arg1 ;
-(void)clearMultitouchTimer;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setActiveTouches:(NSMutableArray *)arg1 ;
-(void)setTooMuchSingleMovement:(BOOL)arg1 ;
-(double)avgDistanceToCentroid:(id)arg1 ;
-(void)_updateTransformAnalyzerWeights;
-(double)allowableElapsedTimeForAllRequiredTouches;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)scale;
-(double)beforeReductionTimeInterval;
-(double)beginPinchTimestamp;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setBeginTouchLocations:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)beginTouchLocations;
-(void)setBeforeReductionTimeInterval:(double)arg1 ;
-(void)setAllowableElapsedTimeForAllRequiredTouches:(double)arg1 ;
-(BOOL)tooMuchSingleMovement;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)beginCentroid;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)pinchDirectionWithCurrentTime:(double)arg1 perimeter:(double)arg2 ;
-(void)setBeginPerimeter:(double)arg1 ;
-(long long)pinchDirection;
-(void)setBeginCentroid:(CGPoint)arg1 ;
-(double)beginPerimeter;
-(BOOL)sufficientMotionInDirection:(long long)arg1 withLocation:(CGPoint)arg2 withScale:(double)arg3 withAngle:(double)arg4 ;
-(void)setBeginPinchTimestamp:(double)arg1 ;
-(double)perimeterOfTouches:(id)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(double)avgTouchesToCentroidDistance;
-(CGPoint)centroidOfTouches:(id)arg1 ;
@end

