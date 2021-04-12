/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKMainEventHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, AKPanGestureRecognizer, AKRotationGestureRecognizer, NSString;

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapRecognizer;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UILongPressGestureRecognizer* _pressRecognizer;
	AKPanGestureRecognizer* _panRecognizer;
	AKRotationGestureRecognizer* _rotationRecognizer;
	double _lastRotationAngleInRotationGesture;

}

@property (retain) UITapGestureRecognizer * tapRecognizer;                        //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (retain) UITapGestureRecognizer * doubleTapRecognizer;                  //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (retain) UILongPressGestureRecognizer * pressRecognizer;                //@synthesize pressRecognizer=_pressRecognizer - In the implementation block
@property (retain) AKPanGestureRecognizer * panRecognizer;                        //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (retain) AKRotationGestureRecognizer * rotationRecognizer;              //@synthesize rotationRecognizer=_rotationRecognizer - In the implementation block
@property (assign) double lastRotationAngleInRotationGesture;                     //@synthesize lastRotationAngleInRotationGesture=_lastRotationAngleInRotationGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)teardown;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(UILongPressGestureRecognizer *)pressRecognizer;
-(AKPanGestureRecognizer *)panRecognizer;
-(AKRotationGestureRecognizer *)rotationRecognizer;
-(void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)forwardRecognizerToMainHandleEvent:(id)arg1 ;
-(void)_penDrawingQuiesced;
-(void)setDoubleTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setRotationRecognizer:(AKRotationGestureRecognizer *)arg1 ;
-(void)setPanRecognizer:(AKPanGestureRecognizer *)arg1 ;
-(void)setLastRotationAngleInRotationGesture:(double)arg1 ;
-(double)lastRotationAngleInRotationGesture;
@end

