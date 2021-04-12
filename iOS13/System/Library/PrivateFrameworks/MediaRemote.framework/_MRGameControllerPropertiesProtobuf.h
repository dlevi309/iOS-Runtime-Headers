/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying> {

	int _buttonAUpDelay;
	unsigned _playerIndex;
	int _profile;
	NSString* _vendorName;
	BOOL _supportsExtendedMotion;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasPlayerIndex; 
@property (assign,nonatomic) unsigned playerIndex;                        //@synthesize playerIndex=_playerIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorName; 
@property (nonatomic,retain) NSString * vendorName;                       //@synthesize vendorName=_vendorName - In the implementation block
@property (assign,nonatomic) BOOL hasButtonAUpDelay; 
@property (assign,nonatomic) int buttonAUpDelay;                          //@synthesize buttonAUpDelay=_buttonAUpDelay - In the implementation block
@property (assign,nonatomic) BOOL hasProfile; 
@property (assign,nonatomic) int profile;                                 //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsExtendedMotion; 
@property (assign,nonatomic) BOOL supportsExtendedMotion;                 //@synthesize supportsExtendedMotion=_supportsExtendedMotion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)vendorName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)profile;
-(void)setProfile:(int)arg1 ;
-(void)setPlayerIndex:(unsigned)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setSupportsExtendedMotion:(BOOL)arg1 ;
-(BOOL)supportsExtendedMotion;
-(void)setButtonAUpDelay:(int)arg1 ;
-(unsigned)playerIndex;
-(int)buttonAUpDelay;
-(void)setHasPlayerIndex:(BOOL)arg1 ;
-(BOOL)hasPlayerIndex;
-(BOOL)hasVendorName;
-(void)setHasButtonAUpDelay:(BOOL)arg1 ;
-(BOOL)hasButtonAUpDelay;
-(void)setHasProfile:(BOOL)arg1 ;
-(BOOL)hasProfile;
-(id)profileAsString:(int)arg1 ;
-(int)StringAsProfile:(id)arg1 ;
-(void)setHasSupportsExtendedMotion:(BOOL)arg1 ;
-(BOOL)hasSupportsExtendedMotion;
@end

