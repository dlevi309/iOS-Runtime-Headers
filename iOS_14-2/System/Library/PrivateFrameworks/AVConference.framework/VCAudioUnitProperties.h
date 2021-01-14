/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioUnitProperties : NSObject {

	unsigned _samplesPerFrame;
	AudioStreamBasicDescription _format;
	unsigned _audioUnitType;
	BOOL _allowAudioRecording;
	int _operatingMode;
	unsigned _vpOperatingMode;
	int _deviceRole;
	BOOL _isFarEndVersionInfoValid;
	VoiceIOFarEndVersionInfo _farEndVersionInfo;
	unsigned _remoteCodecType;
	double _remoteCodecSampleRate;
	BOOL _enableDNNVAD;

}

@property (assign,nonatomic) unsigned samplesPerFrame;                                //@synthesize samplesPerFrame=_samplesPerFrame - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription format;                      //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned audioUnitType;                                  //@synthesize audioUnitType=_audioUnitType - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;                                //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) int operatingMode;                                       //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) int deviceRole;                                          //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) unsigned vpOperatingMode;                                //@synthesize vpOperatingMode=_vpOperatingMode - In the implementation block
@property (nonatomic,readonly) BOOL isFarEndVersionInfoValid;                         //@synthesize isFarEndVersionInfoValid=_isFarEndVersionInfoValid - In the implementation block
@property (assign,nonatomic) VoiceIOFarEndVersionInfo farEndVersionInfo; 
@property (assign,nonatomic) unsigned remoteCodecType;                                //@synthesize remoteCodecType=_remoteCodecType - In the implementation block
@property (assign,nonatomic) double remoteCodecSampleRate;                            //@synthesize remoteCodecSampleRate=_remoteCodecSampleRate - In the implementation block
@property (assign,nonatomic) BOOL enableDNNVAD;                                       //@synthesize enableDNNVAD=_enableDNNVAD - In the implementation block
-(void)setFormat:(AudioStreamBasicDescription)arg1 ;
-(AudioStreamBasicDescription)format;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(unsigned)vpOperatingMode;
-(id)description;
-(void)setVpOperatingMode:(unsigned)arg1 ;
-(int)deviceRole;
-(BOOL)allowAudioRecording;
-(void)setAudioUnitType:(unsigned)arg1 ;
-(void)setSamplesPerFrame:(unsigned)arg1 ;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(double)remoteCodecSampleRate;
-(void)setRemoteCodecSampleRate:(double)arg1 ;
-(unsigned)remoteCodecType;
-(void)setRemoteCodecType:(unsigned)arg1 ;
-(VoiceIOFarEndVersionInfo)farEndVersionInfo;
-(void)setFarEndVersionInfo:(VoiceIOFarEndVersionInfo)arg1 ;
-(unsigned)audioUnitType;
-(unsigned)samplesPerFrame;
-(BOOL)isFarEndVersionInfoValid;
-(BOOL)enableDNNVAD;
-(void)setEnableDNNVAD:(BOOL)arg1 ;
@end

