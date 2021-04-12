/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying> {

	unsigned _customVideoHeight;
	unsigned _customVideoWidth;
	unsigned _rtpSSRC;
	unsigned _tilesPerFrame;
	NSMutableArray* _videoPayloadCollections;
	BOOL _allowRTCPFB;
	SCD_Struct_VC53 _has;

}

@property (assign,nonatomic) unsigned rtpSSRC;                                      //@synthesize rtpSSRC=_rtpSSRC - In the implementation block
@property (assign,nonatomic) BOOL allowRTCPFB;                                      //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoPayloadCollections;              //@synthesize videoPayloadCollections=_videoPayloadCollections - In the implementation block
@property (assign,nonatomic) BOOL hasCustomVideoWidth; 
@property (assign,nonatomic) unsigned customVideoWidth;                             //@synthesize customVideoWidth=_customVideoWidth - In the implementation block
@property (assign,nonatomic) BOOL hasCustomVideoHeight; 
@property (assign,nonatomic) unsigned customVideoHeight;                            //@synthesize customVideoHeight=_customVideoHeight - In the implementation block
@property (assign,nonatomic) BOOL hasTilesPerFrame; 
@property (assign,nonatomic) unsigned tilesPerFrame;                                //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
+(Class)videoPayloadCollectionsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)rtpSSRC;
-(void)setRtpSSRC:(unsigned)arg1 ;
-(unsigned)tilesPerFrame;
-(BOOL)allowRTCPFB;
-(void)setAllowRTCPFB:(BOOL)arg1 ;
-(unsigned)customVideoWidth;
-(void)setCustomVideoWidth:(unsigned)arg1 ;
-(unsigned)customVideoHeight;
-(void)setCustomVideoHeight:(unsigned)arg1 ;
-(void)setVideoPayloadCollections:(NSMutableArray *)arg1 ;
-(void)addVideoPayloadCollections:(id)arg1 ;
-(unsigned long long)videoPayloadCollectionsCount;
-(void)clearVideoPayloadCollections;
-(id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasCustomVideoWidth:(BOOL)arg1 ;
-(BOOL)hasCustomVideoWidth;
-(void)setHasCustomVideoHeight:(BOOL)arg1 ;
-(BOOL)hasCustomVideoHeight;
-(void)setTilesPerFrame:(unsigned)arg1 ;
-(void)setHasTilesPerFrame:(BOOL)arg1 ;
-(BOOL)hasTilesPerFrame;
-(NSMutableArray *)videoPayloadCollections;
-(id)initWithSSRC:(unsigned)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 ;
-(id)initWithScreenSSRC:(unsigned)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 customVideoWidth:(unsigned)arg6 customVideoHeight:(unsigned)arg7 tilesPerFrame:(unsigned)arg8 ;
-(id)newVideoRuleCollectionsForScreen:(BOOL)arg1 isCellular16x9Capable:(BOOL)arg2 isLocalConfig:(BOOL)arg3 ;
-(id)newFeatureStrings;
-(void)printVideoWithLogFile:(void*)arg1 ;
-(void)printScreenWithLogFile:(void*)arg1 ;
-(BOOL)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(BOOL)arg3 isCellular16x9Capable:(BOOL)arg4 ;
-(id)getPayloadSettingsForPayload:(int)arg1 ;
-(void)checkAndInsertRuleWithWidth:(unsigned)arg1 height:(unsigned)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned*)arg6 negotiationBit:(unsigned)arg7 rules:(id)arg8 isCellular16x9Capable:(BOOL)arg9 ;
-(id)parameterSetStringFromPayloadSettings:(id)arg1 ;
@end

