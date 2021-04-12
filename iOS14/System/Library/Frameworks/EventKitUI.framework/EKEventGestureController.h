/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <libobjc.A.dylib/EKICSPreviewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKEventGestureControllerUntimedDelegate, EKEventGestureControllerDelegate;
@class UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, EKDayOccurrenceView, EKEvent, EKCalendarDate, NSTimer, EKUIRecurrenceAlertController, _UIDragSnappingFeedbackGenerator, EKICSPreviewController, UIDropInteraction, UIDragInteraction, NSString, EKUIInviteesViewMessageSendingManager;

@interface EKEventGestureController : NSObject <UIDropInteractionDelegate, UIDragInteractionDelegate, EKICSPreviewControllerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate> {

	UILongPressGestureRecognizer* _draggingGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIView* _targetView;
	int _currentDraggingState;
	int _pendingDraggingState;
	int _queuedDraggingState;
	BOOL _dragCompletionPending;
	BOOL _dropAnimationInProgress;
	BOOL _waitingForDragToInitialize;
	BOOL _needToSetSystemDragPreview;
	BOOL _dragInitiationLocked;
	EKDayOccurrenceView* _draggingView;
	EKEvent* _event;
	int _currentDragType;
	CGPoint _firstTouchPoint;
	double _firstTouchTime;
	CGPoint _latestTouchPoint;
	CGPoint _previousTouchPoint;
	double _previousTouchTime;
	double _previousTouchVelocity;
	CGPoint _touchOffset;
	long long _touchOffsetDays;
	double _dateAtFirstTouchPoint;
	BOOL _isNewEvent;
	BOOL _isInCancelRegion;
	BOOL _isMultiDayTimedEvent;
	EKCalendarDate* _currentDay;
	BOOL _horizontalDragLocked;
	BOOL _dragLockDisabled;
	BOOL _isDragging;
	NSTimer* _scrollTimer;
	double _timeSinceEnteredPageMargin;
	double _firstContactOfDraggingViewTop;
	BOOL _hasStartedScrolling;
	long long _consecutivePageTurnCount;
	BOOL _forcedStart;
	BOOL _needsCommit;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	_UIDragSnappingFeedbackGenerator* _dragSnappingFeedback;
	EKICSPreviewController* _currentICSPreviewController;
	UIDropInteraction* _dropInteraction;
	UIDragInteraction* _dragInteraction;
	long long _currentDropDataOwnerCache;
	BOOL _usesXDragOffsetInCancelRegion;
	BOOL _usesHorizontalDragLocking;
	BOOL _commitBlocked;
	id<EKEventGestureControllerUntimedDelegate> _untimedDelegate;
	id<EKEventGestureControllerDelegate> _delegate;
	NSString* _sessionIdentifierForDebug;
	EKDayOccurrenceView* _draggingViewSource;
	EKUIInviteesViewMessageSendingManager* _messageSendingManager;

}

@property (nonatomic,retain) EKEvent * event;                                                                 //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSString * sessionIdentifierForDebug;                                            //@synthesize sessionIdentifierForDebug=_sessionIdentifierForDebug - In the implementation block
@property (nonatomic,retain) EKDayOccurrenceView * draggingViewSource;                                        //@synthesize draggingViewSource=_draggingViewSource - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewMessageSendingManager * messageSendingManager;                   //@synthesize messageSendingManager=_messageSendingManager - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventGestureControllerUntimedDelegate> untimedDelegate;              //@synthesize untimedDelegate=_untimedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventGestureControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesXDragOffsetInCancelRegion;                                              //@synthesize usesXDragOffsetInCancelRegion=_usesXDragOffsetInCancelRegion - In the implementation block
@property (assign,nonatomic) BOOL usesHorizontalDragLocking;                                                  //@synthesize usesHorizontalDragLocking=_usesHorizontalDragLocking - In the implementation block
@property (assign,nonatomic) BOOL commitBlocked;                                                              //@synthesize commitBlocked=_commitBlocked - In the implementation block
@property (nonatomic,readonly) CGPoint firstTouchPoint;                                                       //@synthesize firstTouchPoint=_firstTouchPoint - In the implementation block
@property (nonatomic,readonly) CGPoint latestTouchPoint;                                                      //@synthesize latestTouchPoint=_latestTouchPoint - In the implementation block
@property (nonatomic,readonly) CGPoint touchOffset;                                                           //@synthesize touchOffset=_touchOffset - In the implementation block
@property (nonatomic,readonly) EKDayOccurrenceView * draggingView;                                            //@synthesize draggingView=_draggingView - In the implementation block
@property (nonatomic,readonly) BOOL dragGestureInProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_captureImageOfOccurrenceView:(id)arg1 withFrameOfOpaqueContent:(CGRect)arg2 ;
-(CGPoint)firstTouchPoint;
-(CGPoint)latestTouchPoint;
-(CGRect)_calculateFrameForDraggingViewIncludingTravelTime:(BOOL)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(id)_acceptedTypes;
-(void)_setUpInitialTouchPointsWithPoint:(CGPoint)arg1 ;
-(id)_eventToUseAtInteractionStart:(CGPoint)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)_icsPreviewControllerCancelButtonPressed;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)_debugStringForDraggingState:(int)arg1 ;
-(void)_setupEvent:(id)arg1 withImportData:(id)arg2 ;
-(void)_suspendCurrentDrag;
-(void)_cleanUpAllStateWithTouchPoint:(CGPoint)arg1 commit:(BOOL)arg2 ;
-(unsigned long long)_dropOperationGivenDropSession:(id)arg1 ;
-(void)updateDraggingOccurrenceOrigin;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)setMessageSendingManager:(EKUIInviteesViewMessageSendingManager *)arg1 ;
-(void)_longPress:(id)arg1 ;
-(double)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(CGPoint)arg2 floorAtAllDayRegionBottom:(BOOL)arg3 ;
-(void)_commit;
-(EKUIInviteesViewMessageSendingManager *)messageSendingManager;
-(id<EKEventGestureControllerDelegate>)delegate;
-(id)_acceptedExternalTypes;
-(id)_clippingPathForDraggingView;
-(void)icsPreviewController:(id)arg1 importDidImportEvents:(id)arg2 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)_setEventCalendar:(id)arg1 useManagedCalendar:(BOOL)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(void)liftUpOccurrenceForEditingEvent:(id)arg1 ;
-(double)_capOccurrenceViewYOrigin:(double)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(BOOL)_isTouchFromDragSessionInResizeHandles:(id)arg1 ;
-(void)_adjustNewEventDates:(id)arg1 withPoint:(CGPoint)arg2 ;
-(id)_createNewEventIfNeededAtPoint:(CGPoint)arg1 ;
-(BOOL)usesXDragOffsetInCancelRegion;
-(CGPoint)_computeOriginAtTouchPoint:(CGPoint)arg1 forDate:(double)arg2 isAllDay:(BOOL)arg3 allowXOffset:(BOOL)arg4 allowFloorAtRegionBottom:(BOOL)arg5 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)updateDraggingOccurrenceFrame;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(BOOL)_setDraggingState:(int)arg1 withPoint:(CGPoint)arg2 event:(id)arg3 context:(id)arg4 ;
-(CGPoint)_estimateFinalDropOriginForTimedDelegate;
-(void)_animateInNewEvent;
-(id)_createTemporaryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dragFailedToStart;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)forceStartWithOccurrence:(id)arg1 shouldUpdateViewSource:(BOOL)arg2 shouldUpdateOrigin:(BOOL)arg3 ;
-(unsigned long long)numberOfDragSourcesForView:(id)arg1 ;
-(double)_Debug_HoursSinceStartOfDay:(double)arg1 ;
-(void)removeDraggedOccurrence;
-(void)updateDraggingOccurrenceFrameFromSource;
-(int)_draggingState;
-(void)_handleImportingICSData:(id)arg1 intoEventStore:(id)arg2 ;
-(EKDayOccurrenceView *)draggingViewSource;
-(id)_viewForTracking;
-(double)_computeWidthForOccurrenceView;
-(double)_cancelRegionMargin;
-(void)_writeDraggingChangesToOccurrenceWithTouchPoint:(CGPoint)arg1 ;
-(id)_findFirstCalendar:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(BOOL)_beginNewDragFromOffStateWithPoint:(CGPoint)arg1 ;
-(void)_commitUntimed;
-(BOOL)dragGestureInProgress;
-(void)setDelegate:(id<EKEventGestureControllerDelegate>)arg1 ;
-(CGPoint)touchOffset;
-(void)_manageDraggingViewInteractivityForStateChangeFrom:(int)arg1 to:(int)arg2 ;
-(void)icsPreviewControllerImportDidFail:(id)arg1 ;
-(double)_allDayBottomPadding;
-(BOOL)_isPointInCancelRegion:(CGPoint)arg1 ;
-(void)_cancel;
-(id)_getEventUsingDropSession:(id)arg1 ;
-(void)_tapGesture:(id)arg1 ;
-(BOOL)commitBlocked;
-(void)_removeScrollTimer;
-(void)_dismissCurrentICSPreviewControllerAnimated:(BOOL)arg1 ;
-(void)_installScrollTimer;
-(id)_captureImageOfDraggingView;
-(BOOL)_calendarCanAcceptManagedData:(id)arg1 ;
-(id)_acceptedFileExternalTypes;
-(void)_handleLongPressResponseForOldAPI:(id)arg1 ;
-(BOOL)usesHorizontalDragLocking;
-(void)_manageFeedbackForStateChangeFrom:(int)arg1 to:(int)arg2 ;
-(EKEvent *)event;
-(double)_minimumDuration;
-(void)setSessionIdentifierForDebug:(NSString *)arg1 ;
-(double)_computeHeightForOccurrenceViewOfDuration:(double)arg1 allDay:(BOOL)arg2 ;
-(id<EKEventGestureControllerUntimedDelegate>)untimedDelegate;
-(void)_handleShowingEventWithUniqueId:(id)arg1 date:(id)arg2 eventStore:(id)arg3 ;
-(void)endForcedStart;
-(void)_cleanUpForcedStart;
-(id)_findLocalDragItemInSession:(id)arg1 ;
-(void)setUsesXDragOffsetInCancelRegion:(BOOL)arg1 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)__timedDelegateBeginEditingSessionAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_scrollTimerFired:(id)arg1 ;
-(BOOL)canProposeNewTime:(id)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(void)promptUserForProposeNewTime:(id)arg1 forEvent:(id)arg2 whenFinished:(/*^block*/id)arg3 ;
-(void)_update;
-(void)updateDraggingOccurrence;
-(BOOL)_useNewDragAndDropAPI;
-(void)invalidate;
-(void)_createAndSetUpDraggingViewWithTouchPoint:(CGPoint)arg1 event:(id)arg2 ignoreOffsets:(BOOL)arg3 ;
-(void)updateDraggingOccurrenceForced:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_dropSessionRequiresExternalDataExtraction:(id)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_setTouchOffsetsFromPoint:(CGPoint)arg1 fixedToCenter:(BOOL)arg2 ;
-(void)_presentICSPreviewControllerIfNeeded;
-(BOOL)_setDraggingState:(int)arg1 withPoint:(CGPoint)arg2 event:(id)arg3 ;
-(void)_setToLocalDraggingImageForDrag:(id)arg1 ;
-(void)didCrossDragBoundary:(int)arg1 ;
-(BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2 ;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1 ;
-(void)setCommitBlocked:(BOOL)arg1 ;
-(id)_acceptedNonFileExternalTypes;
-(void)_disableSystemPreviewForDrag:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)icsPreviewControllerWantsDismissal:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(void)setUntimedDelegate:(id<EKEventGestureControllerUntimedDelegate>)arg1 ;
-(void)_updateHorizontalDragLockForPoint:(CGPoint)arg1 ;
-(id)initWithView:(id)arg1 ;
-(EKDayOccurrenceView *)draggingView;
-(id)originalStartDateForEvent:(id)arg1 includingTravel:(BOOL)arg2 ;
-(void)_setToSystemDraggingImageForDrag:(id)arg1 ;
-(void)_extractFileFromSession:(id)arg1 ;
-(void)_resumePreviousDrag;
-(void)_updateFlingToCancelParameters;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)_returnDraggingViewToLastCommittedPositionFromTouchPoint:(CGPoint)arg1 ;
-(NSString *)sessionIdentifierForDebug;
-(BOOL)_beginEditingSessionAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setLocalDraggingViewHidden:(BOOL)arg1 ;
-(void)_enableSystemPreviewForDrag:(id)arg1 ;
-(void)setUsesHorizontalDragLocking:(BOOL)arg1 ;
-(void)_setUpAfterForcedStartFromPoint:(CGPoint)arg1 ;
-(void)setDraggingViewSource:(EKDayOccurrenceView *)arg1 ;
-(void)dealloc;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(BOOL)_flingOrCancelDraggingViewIfNeeded;
-(void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(/*^block*/id)arg2 ;
-(BOOL)_shouldUseSystemAPIForDrag;
@end

