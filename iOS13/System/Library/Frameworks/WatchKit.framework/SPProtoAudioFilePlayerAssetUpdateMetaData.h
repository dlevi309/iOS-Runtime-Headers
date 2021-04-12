/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable <NSCopying> {

	double _duration;
	NSString* _albumTitle;
	NSString* _artist;
	NSString* _identifier;
	NSString* _sandboxExtensionToken;
	NSString* _title;
	NSString* _uRL;
	SCD_Struct_SP5 _has;

}

@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                                //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumTitle; 
@property (nonatomic,retain) NSString * albumTitle;                         //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) NSString * artist;                             //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasSandboxExtensionToken; 
@property (nonatomic,retain) NSString * sandboxExtensionToken;              //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setURL:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(NSString *)sandboxExtensionToken;
-(double)duration;
-(void)writeTo:(id)arg1 ;
-(NSString *)artist;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasDuration;
-(NSString *)uRL;
-(BOOL)hasURL;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(BOOL)hasArtist;
-(NSString *)albumTitle;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(BOOL)hasAlbumTitle;
-(BOOL)hasSandboxExtensionToken;
-(id)sockPuppetMessage;
@end

