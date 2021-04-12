/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBSetRemoteGlobalSpokenSettingEnabledRequest : PBRequest <NSCopying> {

	double _settingDate;
	BOOL _settingEnabled;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasSettingEnabled; 
@property (assign,nonatomic) BOOL settingEnabled;                 //@synthesize settingEnabled=_settingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSettingDate; 
@property (assign,nonatomic) double settingDate;                  //@synthesize settingDate=_settingDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)settingEnabled;
-(void)setSettingEnabled:(BOOL)arg1 ;
-(void)setHasSettingEnabled:(BOOL)arg1 ;
-(BOOL)hasSettingEnabled;
-(void)setSettingDate:(double)arg1 ;
-(void)setHasSettingDate:(BOOL)arg1 ;
-(BOOL)hasSettingDate;
-(double)settingDate;
@end

