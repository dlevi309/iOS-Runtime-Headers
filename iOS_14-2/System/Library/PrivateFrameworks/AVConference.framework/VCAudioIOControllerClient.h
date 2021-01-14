/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioIOControllerClient : NSObject {

	id _delegate;
	AudioStreamBasicDescription _format;
	int _deviceRole;
	BOOL _allowAudioRecording;
	int _operatingMode;
	BOOL _isRemoteCodecInfoValid;
	unsigned _remoteCodecType;
	double _remoteCodecSampleRate;
	BOOL _isRemoteVersionInfoValid;
	VoiceIOFarEndVersionInfo _farEndVersionInfo;
	int _clientPid;
	BOOL _isInputMeteringEnabled;
	BOOL _isOutputMeteringEnabled;
	unsigned char _direction;
	VCAudioIOControllerClientIO* _sinkIO;
	VCAudioIOControllerClientIO* _sourceIO;

}

@property (nonatomic,readonly) int clientPid;                                                       //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,readonly) id<VCAudioIOControllerDelegate> delegate; 
@property (nonatomic,readonly) AudioStreamBasicDescription format;                                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) int deviceRole;                                                        //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;                                              //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) int operatingMode;                                                     //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) unsigned char direction;                                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteCodecInfoValid;                                         //@synthesize isRemoteCodecInfoValid=_isRemoteCodecInfoValid - In the implementation block
@property (nonatomic,readonly) unsigned remoteCodecType;                                            //@synthesize remoteCodecType=_remoteCodecType - In the implementation block
@property (nonatomic,readonly) double remoteCodecSampleRate;                                        //@synthesize remoteCodecSampleRate=_remoteCodecSampleRate - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteVersionInfoValid;                                       //@synthesize isRemoteVersionInfoValid=_isRemoteVersionInfoValid - In the implementation block
@property (nonatomic,readonly) VoiceIOFarEndVersionInfo farEndVersionInfo;                          //@synthesize farEndVersionInfo=_farEndVersionInfo - In the implementation block
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled;               //@synthesize isInputMeteringEnabled=_isInputMeteringEnabled - In the implementation block
@property (assign,getter=isOuputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled;              //@synthesize isOutputMeteringEnabled=_isOutputMeteringEnabled - In the implementation block
@property (nonatomic,readonly) VCAudioIOControllerClientIO* sinkIO; 
@property (nonatomic,readonly) VCAudioIOControllerClientIO* sourceIO; 
-(unsigned char)direction;
-(AudioStreamBasicDescription)format;
-(void)setOperatingMode:(int)arg1 ;
-(void)setDirection:(unsigned char)arg1 ;
-(id<VCAudioIOControllerDelegate>)delegate;
-(int)operatingMode;
-(VCAudioIOControllerClientIO*)sourceIO;
-(id)description;
-(int)clientPid;
-(VCAudioIOControllerClientIO*)sinkIO;
-(void)dealloc;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isInputMeteringEnabled;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isOuputMeteringEnabled;
-(int)deviceRole;
-(BOOL)allowAudioRecording;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(BOOL)isRemoteCodecInfoValid;
-(double)remoteCodecSampleRate;
-(unsigned)remoteCodecType;
-(BOOL)isRemoteVersionInfoValid;
-(VoiceIOFarEndVersionInfo)farEndVersionInfo;
-(void)setFarEndVersionInfo:(VoiceIOFarEndVersionInfo)arg1 ;
-(void)setRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2 ;
-(void)setClientFormat:(AudioStreamBasicDescription)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceContext:(void*)arg2 sourceProcess:(/*function pointer*/void*)arg3 sinkContext:(void*)arg4 sinkProcess:(/*function pointer*/void*)arg5 clientPid:(int)arg6 ;
@end
