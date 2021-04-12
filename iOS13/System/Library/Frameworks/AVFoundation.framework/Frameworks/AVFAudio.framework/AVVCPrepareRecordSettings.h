/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@class NSDictionary;

@interface AVVCPrepareRecordSettings : NSObject {

	BOOL _meteringEnabled;
	unsigned long long _streamID;
	NSDictionary* _avAudioSettings;
	double _recordBufferDuration;

}

@property (assign,nonatomic) unsigned long long streamID;                 //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSDictionary * avAudioSettings;              //@synthesize avAudioSettings=_avAudioSettings - In the implementation block
@property (assign,nonatomic) double recordBufferDuration;                 //@synthesize recordBufferDuration=_recordBufferDuration - In the implementation block
@property (assign,nonatomic) BOOL meteringEnabled;                        //@synthesize meteringEnabled=_meteringEnabled - In the implementation block
-(void)dealloc;
-(void)setRecordBufferDuration:(double)arg1 ;
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(NSDictionary *)avAudioSettings;
-(double)recordBufferDuration;
-(id)initWithStreamID:(unsigned long long)arg1 settings:(id)arg2 bufferDuration:(double)arg3 ;
-(void)setAvAudioSettings:(NSDictionary *)arg1 ;
-(BOOL)meteringEnabled;
@end

