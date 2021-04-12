/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class PASampleTaskData;

@interface PATimestampIndexedSampleTask : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleTaskData* _sampleTask;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleTaskData * sampleTask;                    //@synthesize sampleTask=_sampleTask - In the implementation block
-(id)debugDescription;
-(id)initWithSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(PASampleTaskData *)sampleTask;
@end

