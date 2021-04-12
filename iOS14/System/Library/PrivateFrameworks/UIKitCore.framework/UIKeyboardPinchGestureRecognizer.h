/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id<UIKeyboardPinchGestureRecognizerDelegate>)pinchDelegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)interpretTouchesForSplit;
-(void)reset;
-(BOOL)pinchDetected;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)resetPinchCalculations;
-(double)finalProgressForInitialProgress:(double)arg1 ;
-(double)initialPinchSeparation;
-(void)setPinchDelegate:(id<UIKeyboardPinchGestureRecognizerDelegate>)arg1 ;
-(void)dealloc;
@end

