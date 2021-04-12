/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCPayloadUtils : NSObject
+(unsigned)bitrateForAMRCodecMode:(int)arg1 ;
+(unsigned)bitrateForAMRWBCodecMode:(int)arg1 ;
+(unsigned)bitrateForEVSCodecMode:(int)arg1 ;
+(long long)codecTypeForPayload:(int)arg1 ;
+(unsigned)bitrateForCodecType:(long long)arg1 mode:(int)arg2 ;
+(BOOL)isUseCaseWatchContinuity:(int)arg1 primaryPayload:(int)arg2 ;
+(BOOL)isPayloadSupportedInFaceTime:(int)arg1 ;
+(unsigned)sampleRateForPayload:(int)arg1 ;
+(unsigned)blockSizeForPayload:(int)arg1 ;
+(BOOL)canSetBitrateForPayload:(int)arg1 ;
+(BOOL)shouldUseCookieForPayload:(int)arg1 ;
+(BOOL)canBundleExternallyForPayload:(int)arg1 forBundlingScheme:(int)arg2 operatingMode:(int)arg3 ;
+(unsigned)internalBundleFactorForPayload:(int)arg1 ;
+(BOOL)shouldEnablePacketSizeLimitForPayload:(int)arg1 ;
+(float)qualityForPayload:(int)arg1 forBitrate:(unsigned)arg2 ;
+(int)payloadForCodecType:(long long)arg1 ;
+(BOOL)supportsCodecRateModesForCodecType:(long long)arg1 ;
+(long long)ctAudioCodecTypeForMediaStreamCodec:(long long)arg1 ;
+(long long)ctAudioCodecEVSBandwidthForMediaStreamCodec:(long long)arg1 ;
+(long long)ctAudioCodecEVSBitrateForBitrate:(unsigned)arg1 ;
@end

