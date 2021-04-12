/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

