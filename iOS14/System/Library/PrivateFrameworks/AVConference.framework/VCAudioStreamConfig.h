/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCMediaStreamConfig.h>

@class NSMutableDictionary, NSMutableSet, NSDictionary, NSArray;

@interface VCAudioStreamConfig : VCMediaStreamConfig {

	unsigned long long _ptime;
	unsigned long long _maxPtime;
	long long _audioStreamMode;
	NSMutableDictionary* _codecConfigurations;
	BOOL _redEnabled;
	unsigned char _numRedundantPayloads;
	NSMutableSet* _supportedNumRedundantPayload;
	BOOL _enableMaxBitrateOnNoChangeCMR;
	BOOL _forceEVSWideBand;
	float _volume;
	BOOL _shouldApplyRedAsBoolean;

}

@property (assign,nonatomic) long long audioStreamMode;                             //@synthesize audioStreamMode=_audioStreamMode - In the implementation block
@property (assign,nonatomic) unsigned long long ptime;                              //@synthesize ptime=_ptime - In the implementation block
@property (assign,nonatomic) unsigned long long maxPtime;                           //@synthesize maxPtime=_maxPtime - In the implementation block
@property (nonatomic,readonly) NSDictionary * codecConfigurations;                  //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
@property (getter=isRedEnabled,nonatomic,readonly) BOOL redEnabled;                 //@synthesize redEnabled=_redEnabled - In the implementation block
@property (assign,nonatomic) unsigned char numRedundantPayloads;                    //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (nonatomic,readonly) NSArray * supportedNumRedundantPayload; 
@property (assign,nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;                    //@synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR - In the implementation block
@property (assign,nonatomic) BOOL forceEVSWideBand;                                 //@synthesize forceEVSWideBand=_forceEVSWideBand - In the implementation block
@property (assign,nonatomic) float volume;                                          //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyRedAsBoolean;                          //@synthesize shouldApplyRedAsBoolean=_shouldApplyRedAsBoolean - In the implementation block
-(void)setVolume:(float)arg1 ;
-(id)init;
-(BOOL)forceEVSWideBand;
-(unsigned long long)ptime;
-(float)volume;
-(void)dealloc;
-(unsigned long long)maxPtime;
-(void)setAudioStreamMode:(long long)arg1 ;
-(long long)audioStreamMode;
-(void)setEnableMaxBitrateOnNoChangeCMR:(BOOL)arg1 ;
-(void)setPtime:(unsigned long long)arg1 ;
-(void)setMaxPtime:(unsigned long long)arg1 ;
-(void)setNumRedundantPayloads:(unsigned char)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)isRedEnabled;
-(unsigned char)numRedundantPayloads;
-(NSDictionary *)codecConfigurations;
-(BOOL)enableMaxBitrateOnNoChangeCMR;
-(NSArray *)supportedNumRedundantPayload;
-(BOOL)shouldApplyRedAsBoolean;
-(void)setShouldApplyRedAsBoolean:(BOOL)arg1 ;
-(void)setForceEVSWideBand:(BOOL)arg1 ;
-(void)addCodecConfiguration:(id)arg1 ;
-(void)setupRedWithRxPayload:(unsigned)arg1 txPayload:(unsigned)arg2 ;
-(void)addSupportedNumRedundantPayload:(unsigned)arg1 ;
-(BOOL)setupCodecWithClientDictionary:(id)arg1 ;
-(BOOL)setupCNCodecWithClientDictionary:(id)arg1 ;
-(BOOL)setupDTMFCodecWithClientDictionary:(id)arg1 ;
@end

