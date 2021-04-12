/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _PASLock, ATXCorrelatedEventsDateBuffer;

@interface ATXCorrelatedEventsManager : NSObject {

	_PASLock* _correlatedEventsLock;
	_PASLock* _typeAEventDataLock;
	_PASLock* _typeBEventDataLock;
	Class _firstEventType;
	Class _secondEventType;
	ATXCorrelatedEventsDateBuffer* _firstEventTypeDateBuffer;
	ATXCorrelatedEventsDateBuffer* _secondEventTypeDateBuffer;

}

@property (nonatomic,readonly) Class firstEventType;                                                   //@synthesize firstEventType=_firstEventType - In the implementation block
@property (nonatomic,readonly) Class secondEventType;                                                  //@synthesize secondEventType=_secondEventType - In the implementation block
@property (nonatomic,readonly) ATXCorrelatedEventsDateBuffer * firstEventTypeDateBuffer;               //@synthesize firstEventTypeDateBuffer=_firstEventTypeDateBuffer - In the implementation block
@property (nonatomic,readonly) ATXCorrelatedEventsDateBuffer * secondEventTypeDateBuffer;              //@synthesize secondEventTypeDateBuffer=_secondEventTypeDateBuffer - In the implementation block
+(BOOL)eventsOverlapForEventA:(id)arg1 withDateBuffer:(id)arg2 eventB:(id)arg3 withDateBuffer:(id)arg4 ;
-(Class)firstEventType;
-(id)correlatedEvents;
-(id)initWithFirstEventType:(Class)arg1 firstEventTypeDateBuffer:(id)arg2 secondEventType:(Class)arg3 secondEventTypeDateBuffer:(id)arg4 ;
-(void)insertEvents:(id)arg1 forEventType:(long long)arg2 ;
-(void)correlateEvents;
-(Class)secondEventType;
-(ATXCorrelatedEventsDateBuffer *)firstEventTypeDateBuffer;
-(ATXCorrelatedEventsDateBuffer *)secondEventTypeDateBuffer;
@end

