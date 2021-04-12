/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setLevel:(int)arg1 ;
-(BOOL)hasLevel;
-(void)setHasLevel:(BOOL)arg1 ;
-(BOOL)mirror;
-(void)setMirror:(BOOL)arg1 ;
-(BOOL)hasSectionID;
-(id)levelAsString:(int)arg1 ;
-(int)StringAsLevel:(id)arg1 ;
-(void)setHasMirror:(BOOL)arg1 ;
-(BOOL)hasMirror;
@end

