/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/


@protocol EKDayViewControllerDelegate <NSObject>
@optional
-(double)dayViewControllerPersistedHourScalePreference:(id)arg1;
-(void)dayViewController:(id)arg1 requestsSaveHourScalePreference:(double)arg2;
-(void)dayViewControllerDidFinishPinchingDayView:(id)arg1;
-(void)dayViewControllerIsPinchingDayView:(id)arg1;
-(void)dayViewControllerCurrentDayDidCompleteAsyncLoadAndLayout:(id)arg1;
-(id)dayViewController:(id)arg1 selectedCopyViewForView:(id)arg2;
-(BOOL)dayViewControllerShouldDrawSynchronously:(id)arg1;
-(void)dayViewControllerDidReloadData:(id)arg1;
-(void)dayViewController:(id)arg1 requestsSaveFirstVisibleSecondPreference:(int)arg2;
-(void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 didChangeDisplayedOccurrencesDueToTrigger:(int)arg2;
-(void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;
-(void)dayViewControllerDidUpdateScrollPosition:(id)arg1;
-(void)dayViewControllerDidTapEmptySpace:(id)arg1;
-(id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(BOOL)arg3;
-(void)dayViewController:(id)arg1 requestsPresentationOfViewControllerForGestures:(id)arg2;
-(void)dayViewController:(id)arg1 requestsShowEvent:(id)arg2 showDetails:(BOOL)arg3;
-(BOOL)dayViewControllerShouldAllowLongPress:(id)arg1;
-(void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;
-(void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;
-(BOOL)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;
-(BOOL)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;
-(BOOL)dayViewControllerShouldEndGestureEditingOnTap:(id)arg1;
-(void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;
-(void)dayViewControllerDidEndDecelerating:(id)arg1;
-(void)dayViewControllerDidEndScrolling:(id)arg1;
-(void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
-(BOOL)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;
-(void)updateSelectedOccurrenceView;
-(void)dayViewController:(id)arg1 didReloadDataDueToTrigger:(int)arg2;

@required
-(void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(BOOL)arg3;
-(void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;

@end

