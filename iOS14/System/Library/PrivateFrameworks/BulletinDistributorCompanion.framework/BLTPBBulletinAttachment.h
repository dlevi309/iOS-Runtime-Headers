/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasURL;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(void)setURL:(NSString *)arg1 ;
-(BOOL)hasType;
-(NSString *)uRL;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(id)description;
-(BOOL)isUpdated;
-(unsigned)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsUpdated:(BOOL)arg1 ;
-(void)setHasIsUpdated:(BOOL)arg1 ;
-(BOOL)hasIsUpdated;
-(id)attachmentURLURL;
@end

