/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest <NSCopying> {

	int _level;
	NSString* _sectionID;
	BOOL _mirror;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasLevel; 
@property (assign,nonatomic) int level;                         //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;              //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) BOOL hasMirror; 
@property (assign,nonatomic) BOOL mirror;                       //@synthesize mirror=_mirror - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)mirror;
-(NSString *)sectionID;
-(void)setHasLevel:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)level;
-(BOOL)hasLevel;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLevel:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMirror:(BOOL)arg1 ;
-(BOOL)hasSectionID;
-(id)levelAsString:(int)arg1 ;
-(int)StringAsLevel:(id)arg1 ;
-(void)setHasMirror:(BOOL)arg1 ;
-(BOOL)hasMirror;
@end

