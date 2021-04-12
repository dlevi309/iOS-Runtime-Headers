/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@interface SACountedTreeNode : NSObject {

	unsigned long long _sampleCount;
	unsigned long long _startSampleIndex;

}

@property (assign) unsigned long long sampleCount;                   //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign) unsigned long long startSampleIndex;              //@synthesize startSampleIndex=_startSampleIndex - In the implementation block
+(id)stackNodeWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setStartSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startSampleIndex;
-(id)initWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2 ;
@end

