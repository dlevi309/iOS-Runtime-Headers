/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class NSMutableSet, _UIGestureRecognizerTransformAnalyzer, NSMutableDictionary;

@interface UIKBProductivityPanGestureRecognizer : UIPanGestureRecognizer {

	BOOL _tooMuchSingleMovement;
	double _beginPanTimestamp;
	NSMutableSet* _activeTouches;
	NSMutableSet* _shiftTouches;
	_UIGestureRecognizerTransformAnalyzer* _transformAnalyzer;
	NSMutableDictionary* _beginTouchLocations;
	CGPoint _beginPanCentroid;

}

@property (assign,nonatomic) double beginPanTimestamp;                                               //@synthesize beginPanTimestamp=_beginPanTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint beginPanCentroid;                                               //@synthesize beginPanCentroid=_beginPanCentroid - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTouches;                                           //@synthesize activeTouches=_activeTouches - In the implementation block
@property (nonatomic,retain) NSMutableSet * shiftTouches;                                            //@synthesize shiftTouches=_shiftTouches - In the implementation block
@property (nonatomic,retain) _UIGestureRecognizerTransformAnalyzer * transformAnalyzer;              //@synthesize transformAnalyzer=_transformAnalyzer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * beginTouchLocations;                              //@synthesize beginTouchLocations=_beginTouchLocations - In the implementation block
@property (assign,nonatomic) BOOL tooMuchSingleMovement;                                             //@synthesize tooMuchSingleMovement=_tooMuchSingleMovement - In the implementation block
+(id)productivityPanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(NSMutableSet *)activeTouches;
-(double)beginPanTimestamp;
-(void)setBeginPanTimestamp:(double)arg1 ;
-(void)setActiveTouches:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)beginTouchLocations;
-(void)setBeginTouchLocations:(NSMutableDictionary *)arg1 ;
-(CGPoint)centroidOfTouches:(id)arg1 ;
-(void)setBeginPanCentroid:(CGPoint)arg1 ;
-(NSMutableSet *)shiftTouches;
-(void)setShiftTouches:(NSMutableSet *)arg1 ;
-(BOOL)isShiftOrMoreKeyForTouch:(id)arg1 ;
-(_UIGestureRecognizerTransformAnalyzer *)transformAnalyzer;
-(void)setTooMuchSingleMovement:(BOOL)arg1 ;
-(BOOL)tooMuchSingleMovement;
-(CGPoint)beginPanCentroid;
-(void)setTransformAnalyzer:(_UIGestureRecognizerTransformAnalyzer *)arg1 ;
@end

