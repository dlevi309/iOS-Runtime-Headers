/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
	long long _countOfDigitizerEventsReceivedInPreviousFrame;
	BOOL _didSignalOneMoveEventSinceLastDisplayLinkCallback;
	double _lastImportantEventTimestamp;
	double _lastSignalTimestamp;
	double _estimatedDisplayLinkDrift;
	long long _lastSignalType;
	unsigned long long _lastSignalReason;
	BOOL _needsSignalOnDisplayLink;
	id<UIEventFetcherSink> _eventFetcherSink;
	double _commitTimeForTouchEvents;
	double _beginTimeForTouchEvents;
	double _deadlineTimeForTouchEvents;
	NSMutableDictionary* _latestMoveDragEventsBySessionID;
	double _latestMoveDragEventTimestamp;
	double _latestMoveDragEventResendTimestamp;
	NSMutableSet* _contextIDsNeedingHoverEventResend;
	NSMutableDictionary* _latestHoverEventsByContextID;

}

@property (assign,nonatomic) BOOL needsSignalOnDisplayLink;                                      //@synthesize needsSignalOnDisplayLink=_needsSignalOnDisplayLink - In the implementation block
@property (assign,nonatomic) double commitTimeForTouchEvents;                                    //@synthesize commitTimeForTouchEvents=_commitTimeForTouchEvents - In the implementation block
@property (assign,nonatomic) double beginTimeForTouchEvents;                                     //@synthesize beginTimeForTouchEvents=_beginTimeForTouchEvents - In the implementation block
@property (assign,nonatomic) double deadlineTimeForTouchEvents;                                  //@synthesize deadlineTimeForTouchEvents=_deadlineTimeForTouchEvents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * latestMoveDragEventsBySessionID;              //@synthesize latestMoveDragEventsBySessionID=_latestMoveDragEventsBySessionID - In the implementation block
@property (assign,nonatomic) double latestMoveDragEventTimestamp;                                //@synthesize latestMoveDragEventTimestamp=_latestMoveDragEventTimestamp - In the implementation block
@property (assign,nonatomic) double latestMoveDragEventResendTimestamp;                          //@synthesize latestMoveDragEventResendTimestamp=_latestMoveDragEventResendTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableSet * contextIDsNeedingHoverEventResend;                   //@synthesize contextIDsNeedingHoverEventResend=_contextIDsNeedingHoverEventResend - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * latestHoverEventsByContextID;                 //@synthesize latestHoverEventsByContextID=_latestHoverEventsByContextID - In the implementation block
@property (nonatomic,retain) id<UIEventFetcherSink> eventFetcherSink;                            //@synthesize eventFetcherSink=_eventFetcherSink - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef _eventFetchRunLoop; 
-(id)init;
-(void)setEventFetcherSink:(id<UIEventFetcherSink>)arg1 ;
-(void)_receiveHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_resendHoverEventForContextID:(unsigned)arg1 ;
-(void)_setHIDGameControllerEventObserver:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)_removeHIDGameControllerEventObserver;
-(void)_setHIDEventObserver:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)_removeHIDEventObserver;
-(CFRunLoopRef)_eventFetchRunLoop;
-(void)drainEventsIntoEnvironment:(id)arg1 ;
-(void)setupThreadAndRun;
-(void)_setupFilterChain;
-(void)displayLinkDidFire:(id)arg1 ;
-(BOOL)needsSignalOnDisplayLink;
-(NSMutableDictionary *)latestMoveDragEventsBySessionID;
-(double)latestMoveDragEventTimestamp;
-(double)latestMoveDragEventResendTimestamp;
-(void)setLatestMoveDragEventResendTimestamp:(double)arg1 ;
-(IOHIDEventRef)_latestHoverEventForContextID:(unsigned)arg1 ;
-(void)setBeginTimeForTouchEvents:(double)arg1 ;
-(void)setDeadlineTimeForTouchEvents:(double)arg1 ;
-(void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(long long)arg2 ;
-(void)setCommitTimeForTouchEvents:(double)arg1 ;
-(void)setNeedsSignalOnDisplayLink:(BOOL)arg1 ;
-(void)setupForRunLoop:(id)arg1 ;
-(void)threadMain;
-(void)_receiveHIDEventInternal:(IOHIDEventRef)arg1 ;
-(void)filterEvents;
-(void)_resendHoverEventForContextIDInternal:(unsigned)arg1 ;
-(double)commitTimeForTouchEvents;
-(double)beginTimeForTouchEvents;
-(double)deadlineTimeForTouchEvents;
-(void)_removeHIDEventFilter:(/*^block*/id)arg1 ;
-(void)_addHIDEventFilter:(/*^block*/id)arg1 ;
-(void)_setLatestHoverEvent:(IOHIDEventRef)arg1 forContextID:(unsigned)arg2 ;
-(id<UIEventFetcherSink>)eventFetcherSink;
-(void)setLatestMoveDragEventsBySessionID:(NSMutableDictionary *)arg1 ;
-(void)setLatestMoveDragEventTimestamp:(double)arg1 ;
-(NSMutableSet *)contextIDsNeedingHoverEventResend;
-(void)setContextIDsNeedingHoverEventResend:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)latestHoverEventsByContextID;
-(void)setLatestHoverEventsByContextID:(NSMutableDictionary *)arg1 ;
@end

