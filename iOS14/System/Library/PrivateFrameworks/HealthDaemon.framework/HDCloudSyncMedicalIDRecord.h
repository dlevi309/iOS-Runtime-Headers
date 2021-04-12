/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncCodableMedicalID, HDCodableMedicalIDData, NSArray;

@interface HDCloudSyncMedicalIDRecord : HDCloudSyncRecord {

	HDCloudSyncCodableMedicalID* _underlyingCodableMedicalIDMessage;

}

@property (nonatomic,retain) HDCodableMedicalIDData * medicalIDData; 
@property (nonatomic,readonly) NSArray * medicalIDLogs; 
+(id)recordType;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDWithZoneID:(id)arg1 ;
+(BOOL)isMedicalIDRecord:(id)arg1 ;
-(HDCodableMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(HDCodableMedicalIDData *)arg1 ;
-(id)description;
-(id)serializeUnderlyingMessage;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(NSArray *)medicalIDLogs;
-(id)initInSyncCircle:(id)arg1 ;
-(id)initInZone:(id)arg1 ;
-(void)addMedicalIDEvent:(id)arg1 ;
@end

