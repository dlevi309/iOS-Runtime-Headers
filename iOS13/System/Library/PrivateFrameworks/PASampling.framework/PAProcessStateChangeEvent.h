/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class PASampleTaskData;

@interface PAProcessStateChangeEvent : NSObject {

	PASampleTaskData* _taskData;
	double _machTimestamp;
	unsigned long long _stateChangeType;

}

@property (assign,nonatomic) unsigned long long stateChangeType;              //@synthesize stateChangeType=_stateChangeType - In the implementation block
@property (nonatomic,readonly) PASampleTaskData * taskData;                   //@synthesize taskData=_taskData - In the implementation block
@property (nonatomic,readonly) double machTimestamp;                          //@synthesize machTimestamp=_machTimestamp - In the implementation block
-(id)debugDescription;
-(double)machTimestamp;
-(unsigned long long)stateChangeType;
-(void)setStateChangeType:(unsigned long long)arg1 ;
-(PASampleTaskData *)taskData;
-(id)initUnknownProcessStateChangeEventWithPid:(int)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3 ;
-(id)initWithTaskData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3 ;
@end

