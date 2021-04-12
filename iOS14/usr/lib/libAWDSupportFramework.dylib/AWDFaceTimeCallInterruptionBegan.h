/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallInterruptionBegan : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _isAudioInterrupted;
	unsigned _isVideo;
	unsigned _isVideoInterrupted;
	int _linkQuality;
	unsigned _onLockScreen;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoInterrupted; 
@property (assign,nonatomic) unsigned isVideoInterrupted;               //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,nonatomic) BOOL hasIsAudioInterrupted; 
@property (assign,nonatomic) unsigned isAudioInterrupted;               //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                          //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                     //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(id)description;
-(BOOL)hasLinkQuality;
-(unsigned)isVideo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)onLockScreen;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setIsVideoInterrupted:(unsigned)arg1 ;
-(void)setIsAudioInterrupted:(unsigned)arg1 ;
-(unsigned)isVideoInterrupted;
-(unsigned)isAudioInterrupted;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(void)setHasIsVideoInterrupted:(BOOL)arg1 ;
-(BOOL)hasIsVideoInterrupted;
-(void)setHasIsAudioInterrupted:(BOOL)arg1 ;
-(BOOL)hasIsAudioInterrupted;
@end

