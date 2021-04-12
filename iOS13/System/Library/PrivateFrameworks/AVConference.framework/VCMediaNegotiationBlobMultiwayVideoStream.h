/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobMultiwayVideoStream : PBCodable <NSCopying> {

	unsigned _frameRate;
	unsigned _keyFrameInterval;
	unsigned _maxMediaBitrate;
	unsigned _maxNetworkBitrate;
	unsigned _maxPacketsPerSecond;
	unsigned _metadata;
	unsigned _payload;
	unsigned _qualityIndex;
	unsigned _repairedMaxNetworkBitrate;
	unsigned _repairedStreamID;
	unsigned _ssrc;
	unsigned _streamID;
	unsigned _supportedVideoFormats;
	SCD_Struct_VC1 _has;

}

@property (nonatomic,readonly) BOOL isSubStream; 
@property (assign,nonatomic) unsigned ssrc;                                   //@synthesize ssrc=_ssrc - In the implementation block
@property (assign,nonatomic) BOOL hasMaxNetworkBitrate; 
@property (assign,nonatomic) unsigned maxNetworkBitrate;                      //@synthesize maxNetworkBitrate=_maxNetworkBitrate - In the implementation block
@property (assign,nonatomic) unsigned payload;                                //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned streamID;                               //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) BOOL hasMetadata; 
@property (assign,nonatomic) unsigned metadata;                               //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned qualityIndex;                           //@synthesize qualityIndex=_qualityIndex - In the implementation block
@property (assign,nonatomic) unsigned supportedVideoFormats;                  //@synthesize supportedVideoFormats=_supportedVideoFormats - In the implementation block
@property (assign,nonatomic) unsigned frameRate;                              //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) unsigned keyFrameInterval;                       //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) BOOL hasMaxMediaBitrate; 
@property (assign,nonatomic) unsigned maxMediaBitrate;                        //@synthesize maxMediaBitrate=_maxMediaBitrate - In the implementation block
@property (assign,nonatomic) BOOL hasMaxPacketsPerSecond; 
@property (assign,nonatomic) unsigned maxPacketsPerSecond;                    //@synthesize maxPacketsPerSecond=_maxPacketsPerSecond - In the implementation block
@property (assign,nonatomic) BOOL hasRepairedStreamID; 
@property (assign,nonatomic) unsigned repairedStreamID;                       //@synthesize repairedStreamID=_repairedStreamID - In the implementation block
@property (assign,nonatomic) BOOL hasRepairedMaxNetworkBitrate; 
@property (assign,nonatomic) unsigned repairedMaxNetworkBitrate;              //@synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate - In the implementation block
+(int)payloadForVideoPayload:(int)arg1 ;
+(BOOL)convertVideoFormat:(int)arg1 width:(int*)arg2 height:(int*)arg3 ;
+(int)videoFormatForWidth:(int)arg1 height:(int)arg2 ;
+(int)videoPayloadForPayload:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(unsigned)arg1 ;
-(unsigned)metadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPayload:(unsigned)arg1 ;
-(unsigned)payload;
-(BOOL)hasMetadata;
-(void)setHasMetadata:(BOOL)arg1 ;
-(unsigned)streamID;
-(void)setStreamID:(unsigned)arg1 ;
-(void)setFrameRate:(unsigned)arg1 ;
-(unsigned)frameRate;
-(unsigned)supportedVideoFormats;
-(void)setMaxNetworkBitrate:(unsigned)arg1 ;
-(void)setHasMaxNetworkBitrate:(BOOL)arg1 ;
-(BOOL)hasMaxNetworkBitrate;
-(void)setMaxMediaBitrate:(unsigned)arg1 ;
-(void)setHasMaxMediaBitrate:(BOOL)arg1 ;
-(BOOL)hasMaxMediaBitrate;
-(void)setMaxPacketsPerSecond:(unsigned)arg1 ;
-(void)setHasMaxPacketsPerSecond:(BOOL)arg1 ;
-(BOOL)hasMaxPacketsPerSecond;
-(void)setRepairedStreamID:(unsigned)arg1 ;
-(void)setHasRepairedStreamID:(BOOL)arg1 ;
-(BOOL)hasRepairedStreamID;
-(void)setRepairedMaxNetworkBitrate:(unsigned)arg1 ;
-(void)setHasRepairedMaxNetworkBitrate:(BOOL)arg1 ;
-(BOOL)hasRepairedMaxNetworkBitrate;
-(unsigned)ssrc;
-(void)setSsrc:(unsigned)arg1 ;
-(unsigned)maxNetworkBitrate;
-(unsigned)qualityIndex;
-(void)setQualityIndex:(unsigned)arg1 ;
-(void)setSupportedVideoFormats:(unsigned)arg1 ;
-(unsigned)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned)arg1 ;
-(unsigned)maxMediaBitrate;
-(unsigned)maxPacketsPerSecond;
-(unsigned)repairedStreamID;
-(unsigned)repairedMaxNetworkBitrate;
-(id)newMultiwayVideoStream;
-(id)initWithStreamConfig:(id)arg1 ;
-(BOOL)isSubStream;
-(void)printWithLogFile:(void*)arg1 ;
@end

