/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@protocol UIKeyboardPinchGestureRecognizerDelegate;
@class NSMutableSet, NSMutableDictionary;

@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer {

	id<UIKeyboardPinchGestureRecognizerDelegate> _pinchDelegate;
	BOOL _pinchDetected;
	double _initialPinchSeparation;
	double _pinchSeparationValues[4];
	NSMutableSet* _activeTouches;
	NSMutableDictionary* _initialTouchPoints;
	double _beginPinchTimestamp;

}

@property (nonatomic,readonly) BOOL pinchDetected;                                                    //@synthesize pinchDetected=_pinchDetected - In the implementation block
@property (nonatomic,readonly) double initialPinchSeparation;                                         //@synthesize initialPinchSeparation=_initialPinchSeparation - In the implementation block
@property (assign,nonatomic) id<UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate;              //@synthesize pinchDelegate=_pinchDelegate - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)pinchDetected;
-(void)resetPinchCalculations;
-(double)finalProgressForInitialProgress:(double)arg1 ;
-(double)initialPinchSeparation;
-(void)setPinchDelegate:(id<UIKeyboardPinchGestureRecognizerDelegate>)arg1 ;
-(void)interpretTouchesForSplit;
-(id<UIKeyboardPinchGestureRecognizerDelegate>)pinchDelegate;
@end

