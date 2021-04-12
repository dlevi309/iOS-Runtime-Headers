/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _interruptionDuration;
	unsigned _isAudioResumed;
	unsigned _isVideo;
	unsigned _isVideoResumed;
	int _linkQuality;
	unsigned _onLockScreen;
	SCD_Struct_AW17 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInterruptionDuration; 
@property (assign,nonatomic) unsigned interruptionDuration;              //@synthesize interruptionDuration=_interruptionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoResumed; 
@property (assign,nonatomic) unsigned isVideoResumed;                    //@synthesize isVideoResumed=_isVideoResumed - In the implementation block
@property (assign,nonatomic) BOOL hasIsAudioResumed; 
@property (assign,nonatomic) unsigned isAudioResumed;                    //@synthesize isAudioResumed=_isAudioResumed - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                            //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                           //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                      //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)isVideo;
-(unsigned)onLockScreen;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)setInterruptionDuration:(unsigned)arg1 ;
-(void)setIsVideoResumed:(unsigned)arg1 ;
-(void)setIsAudioResumed:(unsigned)arg1 ;
-(unsigned)interruptionDuration;
-(unsigned)isVideoResumed;
-(unsigned)isAudioResumed;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasInterruptionDuration:(BOOL)arg1 ;
-(BOOL)hasInterruptionDuration;
-(void)setHasIsVideoResumed:(BOOL)arg1 ;
-(BOOL)hasIsVideoResumed;
-(void)setHasIsAudioResumed:(BOOL)arg1 ;
-(BOOL)hasIsAudioResumed;
@end

