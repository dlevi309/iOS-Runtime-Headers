/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaControlInfo.h>

@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo {

	unsigned _controlInfoReceivedKbits;
	unsigned _controlInfoReceivedPackets;
	unsigned _controlInfoAudioPacketSize;
	unsigned _controlInfoAudioTimestamp;
	double _controlInfoArrivalTime;
	SCD_Struct_VC197 _controlFeedbackParameter;
	BOOL _videoEnabled;

}

@property (readonly) unsigned long long feedbackSize; 
@property (assign) BOOL videoEnabled;                              //@synthesize videoEnabled=_videoEnabled - In the implementation block
-(id)description;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(BOOL)videoEnabled;
-(unsigned long long)serializedSize;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC95*)arg3 ;
-(unsigned long long)feedbackSize;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(int)setInfoUnserialized:(SCD_Struct_VC197*)arg1 type:(unsigned)arg2 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)getInfoUnserialized:(SCD_Struct_VC197*)arg1 type:(unsigned)arg2 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(int)handleOptionalControlInfo:(SCD_Struct_VC95*)arg1 ;
@end

