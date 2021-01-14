/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBSetNotificationsGroupingRequest : PBRequest <NSCopying> {

	int _grouping;
	NSString* _sectionID;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasGrouping; 
@property (assign,nonatomic) int grouping;                      //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;              //@synthesize sectionID=_sectionID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(int)grouping;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setGrouping:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasGrouping;
-(BOOL)hasSectionID;
-(void)setHasGrouping:(BOOL)arg1 ;
-(id)groupingAsString:(int)arg1 ;
-(int)StringAsGrouping:(id)arg1 ;
@end

