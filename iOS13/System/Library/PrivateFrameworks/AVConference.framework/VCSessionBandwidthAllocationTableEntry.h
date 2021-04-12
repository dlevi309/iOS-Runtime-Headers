/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCSessionDownlinkBandwidthAllocatorClient;
@interface VCSessionBandwidthAllocationTableEntry : NSObject {

	id<VCSessionDownlinkBandwidthAllocatorClient> _client;
	unsigned _maxNetworkBitrate;
	unsigned _maxMediaBitrate;
	unsigned _qualityIndex;
	BOOL _isLowestQualityAudio;
	unsigned char _type;
	unsigned _streamID;
	unsigned _actualNetworkBitrate;
	BOOL _hasRepairStreamID;
	unsigned _repairStreamID;
	unsigned _repairMaxNetworkBitrate;
	BOOL _enabled;

}

@property (readonly) id<VCSessionDownlinkBandwidthAllocatorClient> client;              //@synthesize client=_client - In the implementation block
@property (readonly) unsigned maxNetworkBitrate;                                        //@synthesize maxNetworkBitrate=_maxNetworkBitrate - In the implementation block
@property (readonly) unsigned maxMediaBitrate;                                          //@synthesize maxMediaBitrate=_maxMediaBitrate - In the implementation block
@property (readonly) unsigned qualityIndex;                                             //@synthesize qualityIndex=_qualityIndex - In the implementation block
@property (assign) BOOL isLowestQualityAudio;                                           //@synthesize isLowestQualityAudio=_isLowestQualityAudio - In the implementation block
@property (readonly) unsigned char type;                                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned streamID;                                                 //@synthesize streamID=_streamID - In the implementation block
@property (assign) unsigned actualNetworkBitrate;                                       //@synthesize actualNetworkBitrate=_actualNetworkBitrate - In the implementation block
@property (readonly) unsigned repairStreamID;                                           //@synthesize repairStreamID=_repairStreamID - In the implementation block
@property (readonly) unsigned repairMaxNetworkBitrate;                                  //@synthesize repairMaxNetworkBitrate=_repairMaxNetworkBitrate - In the implementation block
@property (readonly) BOOL hasRepairStreamID;                                            //@synthesize hasRepairStreamID=_hasRepairStreamID - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
+(long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2 ;
+(long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2 ;
+(long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned char)type;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)compare:(id)arg1 ;
-(id<VCSessionDownlinkBandwidthAllocatorClient>)client;
-(BOOL)isEnabled;
-(unsigned)streamID;
-(unsigned)maxNetworkBitrate;
-(unsigned)qualityIndex;
-(unsigned)maxMediaBitrate;
-(BOOL)hasRepairStreamID;
-(unsigned)repairStreamID;
-(id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned)arg3 mediaBitrate:(unsigned)arg4 qualityIndex:(unsigned)arg5 streamID:(unsigned)arg6 ;
-(void)setIsLowestQualityAudio:(BOOL)arg1 ;
-(BOOL)isLowestQualityAudio;
-(unsigned)actualNetworkBitrate;
-(void)setActualNetworkBitrate:(unsigned)arg1 ;
-(id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned)arg3 mediaBitrate:(unsigned)arg4 qualityIndex:(unsigned)arg5 streamID:(unsigned)arg6 hasRepairStreamID:(BOOL)arg7 repairStreamID:(unsigned)arg8 repairMaxNetworkBitrate:(unsigned)arg9 enabled:(BOOL)arg10 ;
-(unsigned)repairMaxNetworkBitrate;
@end

