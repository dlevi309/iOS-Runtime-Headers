/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)settingEnabled;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSettingEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSettingEnabled:(BOOL)arg1 ;
-(BOOL)hasSettingEnabled;
-(void)setSettingDate:(double)arg1 ;
-(void)setHasSettingDate:(BOOL)arg1 ;
-(BOOL)hasSettingDate;
-(double)settingDate;
@end

