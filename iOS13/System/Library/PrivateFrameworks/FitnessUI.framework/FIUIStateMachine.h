/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, FIUIState, NSMutableArray, NSString;

@interface FIUIStateMachine : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _states;
	FIUIState* _state;
	FIUIState* _initialState;
	BOOL _handlingEvent;
	NSMutableArray* _pendingEvents;
	NSString* _queueKey;
	NSMutableArray* _transitionalEvents;
	NSMutableSet* _parentStates;
	NSString* _label;
	/*^block*/id _errorHandler;
	/*^block*/id _diagnosticHandler;
	/*^block*/id _transitionalEventFilter;
	long long _pendingEvent;

}

@property (assign) long long pendingEvent;                  //@synthesize pendingEvent=_pendingEvent - In the implementation block
@property (nonatomic,retain) NSString * label;              //@synthesize label=_label - In the implementation block
@property (copy) id errorHandler;                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (copy) id diagnosticHandler;                      //@synthesize diagnosticHandler=_diagnosticHandler - In the implementation block
@property (copy) id transitionalEventFilter;                //@synthesize transitionalEventFilter=_transitionalEventFilter - In the implementation block
-(void)dealloc;
-(id)description;
-(id)queue;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)state;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)addState:(id)arg1 ;
-(id)graphDescription;
-(void)addStates:(id)arg1 ;
-(void)setDiagnosticHandler:(id)arg1 ;
-(void)_queue_handleEvents;
-(void)event:(long long)arg1 ;
-(id)diagnosticHandler;
-(id)transitionalEventFilter;
-(void)_queue_processEvent:(long long)arg1 ;
-(void)_queue_setInitialStateIfNeeded:(id)arg1 ;
-(id)initWithLabel:(id)arg1 queue:(id)arg2 ;
-(void)eventAsync:(long long)arg1 ;
-(void)addChildStates:(id)arg1 toState:(id)arg2 withEntryState:(id)arg3 ;
-(void)setTransitionalEventFilter:(id)arg1 ;
-(long long)pendingEvent;
-(void)setPendingEvent:(long long)arg1 ;
@end

