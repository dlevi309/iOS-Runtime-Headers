/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBBulletinAttachment : PBCodable <NSCopying> {

	NSString* _identifier;
	unsigned _type;
	NSString* _uRL;
	BOOL _isUpdated;
	SCD_Struct_BL3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                     //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasIsUpdated; 
@property (assign,nonatomic) BOOL isUpdated;                     //@synthesize isUpdated=_isUpdated - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setURL:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isUpdated;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSString *)uRL;
-(BOOL)hasURL;
-(BOOL)hasIdentifier;
-(void)setIsUpdated:(BOOL)arg1 ;
-(void)setHasIsUpdated:(BOOL)arg1 ;
-(BOOL)hasIsUpdated;
-(id)attachmentURLURL;
@end

