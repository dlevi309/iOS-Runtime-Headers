/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCMediaStreamConfig.h>

@class NSMutableDictionary, NSMutableSet, NSDictionary, NSArray;

@interface VCAudioStreamConfig : VCMediaStreamConfig {

	unsigned long long _ptime;
	unsigned long long _maxPtime;
	long long _audioStreamMode;
	BOOL _latencySensitiveMode;
	NSMutableDictionary* _codecConfigurations;
	BOOL _redEnabled;
	unsigned char _numRedundantPayloads;
	NSMutableSet* _supportedNumRedundantPayload;
	BOOL _enableMaxBitrateOnNoChangeCMR;
	BOOL _forceEVSWideBand;
	float _volume;

}

@property (assign,nonatomic) long long audioStreamMode;                                            //@synthesize audioStreamMode=_audioStreamMode - In the implementation block
@property (assign,nonatomic) unsigned long long ptime;                                             //@synthesize ptime=_ptime - In the implementation block
@property (assign,nonatomic) unsigned long long maxPtime;                                          //@synthesize maxPtime=_maxPtime - In the implementation block
@property (assign,getter=isLatencySensitiveMode,nonatomic) BOOL latencySensitiveMode;              //@synthesize latencySensitiveMode=_latencySensitiveMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * codecConfigurations;                                 //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
@property (getter=isRedEnabled,nonatomic,readonly) BOOL redEnabled;                                //@synthesize redEnabled=_redEnabled - In the implementation block
@property (assign,nonatomic) unsigned char numRedundantPayloads;                                   //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (nonatomic,readonly) NSArray * supportedNumRedundantPayload; 
@property (assign,nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;                                   //@synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR - In the implementation block
@property (assign,nonatomic) BOOL forceEVSWideBand;                                                //@synthesize forceEVSWideBand=_forceEVSWideBand - In the implementation block
@property (assign,nonatomic) float volume;                                                         //@synthesize volume=_volume - In the implementation block
-(id)init;
-(void)dealloc;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)isRedEnabled;
-(unsigned char)numRedundantPayloads;
-(NSDictionary *)codecConfigurations;
-(BOOL)forceEVSWideBand;
-(unsigned long long)ptime;
-(BOOL)enableMaxBitrateOnNoChangeCMR;
-(NSArray *)supportedNumRedundantPayload;
-(BOOL)isLatencySensitiveMode;
-(long long)audioStreamMode;
-(void)setupRedWithRxPayload:(unsigned)arg1 txPayload:(unsigned)arg2 ;
-(void)addCodecConfiguration:(id)arg1 ;
-(void)setForceEVSWideBand:(BOOL)arg1 ;
-(void)setLatencySensitiveMode:(BOOL)arg1 ;
-(void)addSupportedNumRedundantPayload:(unsigned)arg1 ;
-(void)setNumRedundantPayloads:(unsigned char)arg1 ;
-(BOOL)setupCodecWithClientDictionary:(id)arg1 ;
-(BOOL)setupCNCodecWithClientDictionary:(id)arg1 ;
-(BOOL)setupDTMFCodecWithClientDictionary:(id)arg1 ;
-(void)setAudioStreamMode:(long long)arg1 ;
-(void)setPtime:(unsigned long long)arg1 ;
-(unsigned long long)maxPtime;
-(void)setMaxPtime:(unsigned long long)arg1 ;
-(void)setEnableMaxBitrateOnNoChangeCMR:(BOOL)arg1 ;
@end

