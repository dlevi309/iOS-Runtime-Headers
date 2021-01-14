/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@interface SACallTreeNode : NSObject {

	unsigned long long _sampleCount;
	unsigned long long _startSampleIndex;

}

@property (assign) unsigned long long sampleCount;                   //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign) unsigned long long startSampleIndex;              //@synthesize startSampleIndex=_startSampleIndex - In the implementation block
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)sampleCount;
-(unsigned long long)startSampleIndex;
-(id)initWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2 ;
-(void)setStartSampleIndex:(unsigned long long)arg1 ;
@end

