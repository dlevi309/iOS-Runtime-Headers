/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@class UIView, _UIGestureStudyPressDurationGestureRecognizer, NSString;

@interface _UIGestureStudyInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	_UIGestureStudyPressDurationGestureRecognizer* _pressDurationRecognizer;
	double _durationWhenMovementExceeded;

}

@property (nonatomic,retain) _UIGestureStudyPressDurationGestureRecognizer * pressDurationRecognizer;              //@synthesize pressDurationRecognizer=_pressDurationRecognizer - In the implementation block
@property (assign,nonatomic) double durationWhenMovementExceeded;                                                  //@synthesize durationWhenMovementExceeded=_durationWhenMovementExceeded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                               //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(_UIGestureStudyPressDurationGestureRecognizer *)pressDurationRecognizer;
-(void)_handlePressRecognizer:(id)arg1 ;
-(void)setPressDurationRecognizer:(_UIGestureStudyPressDurationGestureRecognizer *)arg1 ;
-(void)setDurationWhenMovementExceeded:(double)arg1 ;
-(double)durationWhenMovementExceeded;
-(void)_reportEventForTriggeredRecognizer:(id)arg1 ;
-(id)_eventDataForTriggeredRecognizer:(id)arg1 ;
-(id)_viewDescription;
-(id)_locationForTriggeredRecognizer:(id)arg1 ;
@end

