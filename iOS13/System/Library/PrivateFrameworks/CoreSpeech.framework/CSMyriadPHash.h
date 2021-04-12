/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSMyriadPHash : NSObject {

	float* _hammingWindow;
	OpaqueFFTSetupRef _setup;
	float* _snrWindow;
	OpaqueFFTSetupRef _snrSetup;
	unsigned char _signalFractional;
	short _signalEstimate;

}

@property (assign,nonatomic) short signalEstimate;                        //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign,nonatomic) unsigned char signalFractional;              //@synthesize signalFractional=_signalFractional - In the implementation block
+(void)notifyHashlessTrigger:(unsigned long long)arg1 ;
+(id)createHashResult:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 absTime:(unsigned long long)arg4 frac:(unsigned char)arg5 ;
+(BOOL)writeHashResultIntoFile:(id)arg1 ;
+(void)notifyAudioHashNotification;
+(id)generateEmptyPHash:(unsigned long long)arg1 ;
+(void)notifyAudioHashlessNotification;
+(void)setLastHash:(id)arg1 ;
+(id)currentMyriadPHash;
+(BOOL)writeHashlessResult:(unsigned long long)arg1 ;
+(id)lastHash;
-(id)init;
-(void)dealloc;
-(id)cachedHash;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(void)setSignalEstimate:(short)arg1 ;
-(unsigned char)signalFractional;
-(void)setSignalFractional:(unsigned char)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(id)_audioLogDirectory;
-(id)_generateMyriadInfo:(unsigned long long)arg1 score:(float)arg2 triggerSource:(id)arg3 channel:(unsigned long long)arg4 audioProviderUUID:(id)arg5 absoluteTime:(unsigned long long)arg6 ;
-(id)generatePHashFromVoiceTriggerInfo:(id)arg1 ;
@end

