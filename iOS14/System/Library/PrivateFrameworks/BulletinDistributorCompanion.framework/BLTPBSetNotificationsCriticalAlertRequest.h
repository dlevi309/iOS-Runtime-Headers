/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBSetNotificationsCriticalAlertRequest : PBRequest <NSCopying> {

	int _criticalAlertSetting;
	NSString* _sectionID;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasCriticalAlertSetting; 
@property (assign,nonatomic) int criticalAlertSetting;                  //@synthesize criticalAlertSetting=_criticalAlertSetting - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                      //@synthesize sectionID=_sectionID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)criticalAlertSetting;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCriticalAlertSetting:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSectionID;
-(void)setHasCriticalAlertSetting:(BOOL)arg1 ;
-(BOOL)hasCriticalAlertSetting;
-(id)criticalAlertSettingAsString:(int)arg1 ;
-(int)StringAsCriticalAlertSetting:(id)arg1 ;
@end

