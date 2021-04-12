/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBSetNotificationsSoundRequest : PBRequest <NSCopying> {

	NSString* _sectionID;
	int _sound;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasSound; 
@property (assign,nonatomic) int sound;                         //@synthesize sound=_sound - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;              //@synthesize sectionID=_sectionID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setSound:(int)arg1 ;
-(int)sound;
-(BOOL)hasSound;
-(void)setHasSound:(BOOL)arg1 ;
-(id)soundAsString:(int)arg1 ;
-(int)StringAsSound:(id)arg1 ;
-(BOOL)hasSectionID;
@end

