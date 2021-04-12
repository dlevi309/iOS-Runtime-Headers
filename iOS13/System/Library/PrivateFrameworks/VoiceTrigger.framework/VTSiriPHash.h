/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTSiriPHash : NSObject {

	unsigned char _signalFractional;
	short _signalEstimate;

}

@property (assign) short signalEstimate;                        //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign) unsigned char signalFractional;              //@synthesize signalFractional=_signalFractional - In the implementation block
+(id)sharedPhash;
+(unsigned long long)sampleSizeForSignalEstimate;
-(id)init;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(void)setSignalEstimate:(short)arg1 ;
-(unsigned char)signalFractional;
-(void)setSignalFractional:(unsigned char)arg1 ;
@end

