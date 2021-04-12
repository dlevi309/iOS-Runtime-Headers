/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying> {

	NSString* _companionBundleIdentifier;
	NSData* _iconDigest;
	NSString* _localizedDisplayName;
	unsigned _playbackState;
	int _processID;
	NSString* _watchBundleIdentifier;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasCompanionBundleIdentifier; 
@property (nonatomic,retain) NSString * companionBundleIdentifier;              //@synthesize companionBundleIdentifier=_companionBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDisplayName; 
@property (nonatomic,retain) NSString * localizedDisplayName;                   //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState; 
@property (assign,nonatomic) unsigned playbackState;                            //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchBundleIdentifier; 
@property (nonatomic,retain) NSString * watchBundleIdentifier;                  //@synthesize watchBundleIdentifier=_watchBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIconDigest; 
@property (nonatomic,retain) NSData * iconDigest;                               //@synthesize iconDigest=_iconDigest - In the implementation block
@property (assign,nonatomic) BOOL hasProcessID; 
@property (assign,nonatomic) int processID;                                     //@synthesize processID=_processID - In the implementation block
-(void)setPlaybackState:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)processID;
-(NSString *)companionBundleIdentifier;
-(unsigned)playbackState;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)localizedDisplayName;
-(unsigned long long)hash;
-(void)setProcessID:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPlaybackState;
-(void)setCompanionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)watchBundleIdentifier;
-(void)setWatchBundleIdentifier:(NSString *)arg1 ;
-(NSData *)iconDigest;
-(void)setIconDigest:(NSData *)arg1 ;
-(BOOL)hasProcessID;
-(BOOL)hasCompanionBundleIdentifier;
-(BOOL)hasLocalizedDisplayName;
-(BOOL)hasWatchBundleIdentifier;
-(BOOL)hasIconDigest;
-(void)setHasProcessID:(BOOL)arg1 ;
@end

