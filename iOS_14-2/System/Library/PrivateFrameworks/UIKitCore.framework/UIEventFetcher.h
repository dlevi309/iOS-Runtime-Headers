/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIEventFetcherSink;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, CADisplayLink, NSMutableDictionary, NSMutableSet;

@interface UIEventFetcher : NSObject {

	NSMutableArray* _incomingHIDEvents;
	NSMutableArray* _incomingHIDEventsFiltered;
	CFRunLoopRef _cfRunLoop;
	/*^block*/id _receiveBlock;
	/*^block*/id _addToFilteredEventsBlock;
	/*^block*/id _gameControllerEventFilterGenerator;
	/*^block*/id _passiveObservationFilterGenerator;
	/*^block*/id _watchSystemAppFilter;
	NSMutableArray* _eventFilters;
	int _displayLinkIdleTicks;
	CADisplayLink* _displayLink;
	long long _countOfEventsReceivedSinceLastDisplayLinkCallback;
	long long _countOfEventsReceivedInPreviousFrame;
	BOOL _didSignalOneMoveEventSinceLastDisplayLinkCallback;
	double _lastImportantEventTimestamp;
	double _lastSignalTimestamp;
	double _lastSignalEventTimestamp;
	double _lastFilteredEventTimestamp;
	double _estimatedDisplayLinkDrift;
	long long _lastSignalType;
	unsigned long long _lastSignalReason;
	BOOL _needsSignalOnDisplayLink;
	double _commitTimeForTouchEvents;
	double _beginTimeForTouchEvents;
	double _deadlineTimeForTouchEvents;
	NSMutableDictionary* _latestMoveDragEventsBySessionID;
	double _latestMoveDragEventTimestamp;
	double _latestMoveDragEventResendTimestamp;
	NSMutableSet* _contextIDsNeedingHoverEventResend;
	NSMutableDictionary* _latestHoverEventsByContextID;
	id<UIEventFetcherSink> _eventFetcherSink;

}
-(id)init;
-(void)displayLinkDidFire:(id)arg1 ;
-(void)_receiveHIDEvent:(IOHIDEventRef)arg1 ;
-(void)threadMain;
@end

