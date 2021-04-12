/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)criticalAlertSetting;
-(void)setCriticalAlertSetting:(int)arg1 ;
-(BOOL)hasSectionID;
-(void)setHasCriticalAlertSetting:(BOOL)arg1 ;
-(BOOL)hasCriticalAlertSetting;
-(id)criticalAlertSettingAsString:(int)arg1 ;
-(int)StringAsCriticalAlertSetting:(id)arg1 ;
@end

