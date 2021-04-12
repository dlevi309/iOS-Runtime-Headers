/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class PASampleThreadData;

@interface PATimestampIndexedSampleThread : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleThreadData* _sampleThread;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleThreadData * sampleThread;                //@synthesize sampleThread=_sampleThread - In the implementation block
-(id)debugDescription;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(PASampleThreadData *)sampleThread;
@end

