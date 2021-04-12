/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSStopRecordingOptions : NSObject {

	unsigned long long _stopRecordingReason;
	unsigned long long _expectedStopHostTime;

}

@property (assign,nonatomic) unsigned long long stopRecordingReason;               //@synthesize stopRecordingReason=_stopRecordingReason - In the implementation block
@property (assign,nonatomic) unsigned long long expectedStopHostTime;              //@synthesize expectedStopHostTime=_expectedStopHostTime - In the implementation block
-(id)description;
-(unsigned long long)stopRecordingReason;
-(void)setStopRecordingReason:(unsigned long long)arg1 ;
-(unsigned long long)expectedStopHostTime;
-(void)setExpectedStopHostTime:(unsigned long long)arg1 ;
@end

