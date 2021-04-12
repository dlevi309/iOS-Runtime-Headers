/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary, VCAudioTier, BitrateLimits;

@interface VCAudioTierPicker : NSObject {

	NSMutableDictionary* tierTablesForRedNumPayloads;
	VCAudioTier* defaultTier;
	VCAudioTier* fallbackTier;
	BOOL usingCellular;
	BOOL useCaseWatchContinuity;
	int operatingMode;
	BitrateLimits* bitrateLimits;
	BOOL _alwaysOnAudioRedundancyEnabled;
	BOOL _cellularAllowRedLowBitratesEnabled;
	BOOL _wifiAllowRedLowBitratesEnabled;

}

@property (readonly) VCAudioTier * defaultTier; 
+(id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned)arg3 headerSize:(unsigned)arg4 operatingMode:(int)arg5 usingCellular:(BOOL)arg6 useCaseWatchContinuity:(BOOL)arg7 ;
+(id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(BOOL)arg3 ;
+(BOOL)arrayHasObject:(id)arg1 withPayloadType:(int)arg2 ;
+(BOOL)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned)arg2 packetsPerBundle:(unsigned)arg3 operatingMode:(int)arg4 redNumPayloads:(unsigned)arg5 cellular:(BOOL)arg6 ;
+(id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned)arg2 ;
-(void)dealloc;
-(void)printCreatedAudioTiers:(id)arg1 ;
-(id)initWithOperatingMode:(int)arg1 payloadConfigs:(id)arg2 packetsPerBundle:(id)arg3 supportedRedNumPayloads:(id)arg4 headerSize:(unsigned long long)arg5 usingCellular:(BOOL)arg6 useCaseWatchContinuity:(BOOL)arg7 defaultMaxCap:(unsigned long long)arg8 alwaysOnAudioRedundancyEnabled:(BOOL)arg9 cellularAllowRedLowBitratesEnabled:(BOOL)arg10 wifiAllowRedLowBitratesEnabled:(BOOL)arg11 ;
-(id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2 ;
-(id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2 ;
-(id)allAudioTiers;
-(VCAudioTier *)defaultTier;
@end

