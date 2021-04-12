/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class PASampleThreadData;

@interface PAThreadStateChangeEvent : NSObject {

	PASampleThreadData* _threadData;
	double _machTimestamp;
	unsigned long long _stateChangeType;

}

@property (assign,nonatomic) double machTimestamp;                            //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long stateChangeType;              //@synthesize stateChangeType=_stateChangeType - In the implementation block
@property (nonatomic,readonly) PASampleThreadData * threadData;               //@synthesize threadData=_threadData - In the implementation block
-(id)debugDescription;
-(double)machTimestamp;
-(unsigned long long)stateChangeType;
-(PASampleThreadData *)threadData;
-(id)initUnknownThreadStateChangeEventWithTid:(unsigned long long)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3 ;
-(id)initWithThreadData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3 ;
-(void)setMachTimestamp:(double)arg1 ;
-(void)setStateChangeType:(unsigned long long)arg1 ;
@end

