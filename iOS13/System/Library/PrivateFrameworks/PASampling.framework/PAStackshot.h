/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class NSData, PAMicrostackshotData, NSSet;

@interface PAStackshot : NSObject {

	NSData* _traceBufData;
	unsigned long long _startOffset;
	double _machTimestamp;
	double _wallTimestamp;
	PAMicrostackshotData* _microstackshotData;
	NSSet* _deadPids;

}

@property (readonly) double machTimestamp;                                   //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) double wallTimestamp;                                   //@synthesize wallTimestamp=_wallTimestamp - In the implementation block
@property (readonly) PAMicrostackshotData * microstackshotData;              //@synthesize microstackshotData=_microstackshotData - In the implementation block
@property (readonly) BOOL isMicrostackshot; 
@property (readonly) NSSet * deadPids;                                       //@synthesize deadPids=_deadPids - In the implementation block
-(double)machTimestamp;
-(BOOL)isMicrostackshot;
-(PAMicrostackshotData *)microstackshotData;
-(id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3 ;
-(BOOL)iterateTasks:(/*^block*/id)arg1 ;
-(double)wallTimestamp;
-(NSSet *)deadPids;
@end

