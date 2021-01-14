/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBSectionIcon, NSString;

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying> {

	unsigned long long _subtypeID;
	BLTPBSectionIcon* _icon;
	NSString* _sectionID;
	BOOL _defaultSubtype;
	SCD_Struct_BL3 _has;

}

@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                      //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) BOOL hasSubtypeID; 
@property (assign,nonatomic) unsigned long long subtypeID;              //@synthesize subtypeID=_subtypeID - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultSubtype; 
@property (assign,nonatomic) BOOL defaultSubtype;                       //@synthesize defaultSubtype=_defaultSubtype - In the implementation block
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) BLTPBSectionIcon * icon;                   //@synthesize icon=_icon - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)hasIcon;
-(NSString *)sectionID;
-(BLTPBSectionIcon *)icon;
-(void)mergeFrom:(id)arg1 ;
-(void)setIcon:(BLTPBSectionIcon *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSectionID;
-(void)setSubtypeID:(unsigned long long)arg1 ;
-(void)setHasSubtypeID:(BOOL)arg1 ;
-(BOOL)hasSubtypeID;
-(void)setDefaultSubtype:(BOOL)arg1 ;
-(void)setHasDefaultSubtype:(BOOL)arg1 ;
-(BOOL)hasDefaultSubtype;
-(unsigned long long)subtypeID;
-(BOOL)defaultSubtype;
@end

