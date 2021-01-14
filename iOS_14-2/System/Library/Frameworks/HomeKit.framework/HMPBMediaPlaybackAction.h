/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable <NSCopying> {

	NSData* _actionUUID;
	int _mediaPlaybackState;
	NSMutableArray* _mediaProfiles;
	NSData* _playbackArchive;
	NSData* _volume;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasActionUUID; 
@property (nonatomic,retain) NSData * actionUUID;                         //@synthesize actionUUID=_actionUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediaProfiles;              //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPlaybackState; 
@property (assign,nonatomic) int mediaPlaybackState;                      //@synthesize mediaPlaybackState=_mediaPlaybackState - In the implementation block
@property (nonatomic,readonly) BOOL hasVolume; 
@property (nonatomic,retain) NSData * volume;                             //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackArchive; 
@property (nonatomic,retain) NSData * playbackArchive;                    //@synthesize playbackArchive=_playbackArchive - In the implementation block
+(Class)mediaProfilesType;
-(id)dictionaryRepresentation;
-(void)setVolume:(NSData *)arg1 ;
-(NSMutableArray *)mediaProfiles;
-(int)mediaPlaybackState;
-(BOOL)hasPlaybackArchive;
-(void)setActionUUID:(NSData *)arg1 ;
-(void)setMediaProfiles:(NSMutableArray *)arg1 ;
-(void)setMediaPlaybackState:(int)arg1 ;
-(void)setPlaybackArchive:(NSData *)arg1 ;
-(void)addMediaProfiles:(id)arg1 ;
-(unsigned long long)mediaProfilesCount;
-(void)clearMediaProfiles;
-(id)mediaProfilesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActionUUID;
-(void)setHasMediaPlaybackState:(BOOL)arg1 ;
-(BOOL)hasMediaPlaybackState;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVolume;
-(id)description;
-(NSData *)playbackArchive;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)actionUUID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)volume;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

