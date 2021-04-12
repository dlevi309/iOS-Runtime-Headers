/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject;

@interface CSMyriadPHash : NSObject {

	float* _hammingWindow;
	OpaqueFFTSetupRef _setup;
	float* _snrWindow;
	OpaqueFFTSetupRef _snrSetup;
	unsigned char _signalFractional;
	short _signalEstimate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) short signalEstimate;                            //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign,nonatomic) unsigned char signalFractional;                  //@synthesize signalFractional=_signalFractional - In the implementation block
+(id)lastHash;
+(void)notifyHashlessTrigger:(unsigned long long)arg1 ;
+(id)createHashResult:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 absTime:(unsigned long long)arg4 frac:(unsigned char)arg5 ;
+(BOOL)writeHashResultIntoFile:(id)arg1 ;
+(void)notifyAudioHashNotification;
+(id)generateEmptyPHash:(unsigned long long)arg1 writeFile:(BOOL)arg2 ;
+(void)notifyAudioHashlessNotification;
+(void)setLastHash:(id)arg1 ;
+(BOOL)writeHashlessResult:(unsigned long long)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(id)init;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_audioLogDirectory;
-(id)cachedHash;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(unsigned char)signalFractional;
-(id)_generateMyriadInfo:(unsigned long long)arg1 writeFile:(BOOL)arg2 score:(float)arg3 triggerSource:(id)arg4 channel:(unsigned long long)arg5 audioProviderUUID:(id)arg6 absoluteTime:(unsigned long long)arg7 ;
-(id)generatePHashFromVoiceTriggerInfo:(id)arg1 writeFile:(BOOL)arg2 ;
-(void)setSignalEstimate:(short)arg1 ;
-(void)setSignalFractional:(unsigned char)arg1 ;
@end

