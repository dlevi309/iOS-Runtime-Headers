/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasSound;
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(int)sound;
-(NSString *)sectionID;
-(void)setSound:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSound:(BOOL)arg1 ;
-(id)soundAsString:(int)arg1 ;
-(int)StringAsSound:(id)arg1 ;
-(BOOL)hasSectionID;
@end

