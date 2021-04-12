/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VCAudioPayloadConfig;

@interface VCAudioTier : NSObject {

	unsigned networkBitrate;
	unsigned audioCodecBitrate;
	unsigned packetsPerBundle;
	unsigned redNumPayloads;
	unsigned redMaxDelay20ms;
	VCAudioPayloadConfig* payloadConfig;
	int _operatingMode;
	BOOL _bundlingAppliedByCodec;

}

@property (readonly) unsigned networkBitrate; 
@property (readonly) unsigned audioCodecBitrate; 
@property (readonly) unsigned packetsPerBundle; 
@property (readonly) unsigned redNumPayloads; 
@property (readonly) unsigned redMaxDelay20ms; 
@property (readonly) VCAudioPayloadConfig * payloadConfig; 
+(id)newAudioTierForPayloadConfig:(id)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 redNumPayloads:(unsigned)arg5 headerSize:(unsigned)arg6 ;
+(BOOL)bundlingAppliedByCodecForPayload:(int)arg1 operatingMode:(int)arg2 ;
-(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(unsigned)redNumPayloads;
-(unsigned)redMaxDelay20ms;
-(unsigned)packetsPerBundle;
-(unsigned)networkBitrate;
-(unsigned)audioCodecBitrate;
-(VCAudioPayloadConfig *)payloadConfig;
-(id)initWithNetworkBitrate:(unsigned)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 redNumPayloads:(unsigned)arg5 payloadConfig:(id)arg6 ;
@end

