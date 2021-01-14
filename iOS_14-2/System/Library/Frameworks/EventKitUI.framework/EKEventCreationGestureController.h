/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol EKEventCreationGestureControllerDelegate;
@class NSObject, UIView, UILongPressGestureRecognizer, EKEvent, EKDayOccurrenceView, NSString;

@interface EKEventCreationGestureController : NSObject <UIGestureRecognizerDelegate> {

	NSObject*<EKEventCreationGestureControllerDelegate> _gestureDelegate;
	UIView* _targetView;
	UILongPressGestureRecognizer* _gestureRecognizer;
	EKEvent* _newEvent;
	UIView* _containerView;
	EKDayOccurrenceView* _eventPreview;
	CGPoint _originPoint;
	int _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(void)handleGesture:(id)arg1 ;
-(void)_gestureCanceled;
-(id)_snapDate:(id)arg1 toInterval:(double)arg2 ;
-(void)_adjustPreviewFrame;
-(void)_gestureBegan;
-(void)_gestureCompleted;
-(void)invalidate;
-(void)_gestureChangedEnoughToCreateEvent;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_gestureUpdated;
-(void)_cleanUp;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)currentlyCreatingEvent;
-(void)dealloc;
@end

