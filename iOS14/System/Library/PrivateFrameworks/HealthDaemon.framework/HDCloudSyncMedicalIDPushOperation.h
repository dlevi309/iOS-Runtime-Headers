/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class _HKMedicalIDData, HDCloudSyncMedicalIDRecord;

@interface HDCloudSyncMedicalIDPushOperation : HDCloudSyncOperation {

	_HKMedicalIDData* _cloudMedicalIDData;
	_HKMedicalIDData* _medicalIDDataToPush;
	HDCloudSyncMedicalIDRecord* _medicalIDRecord;

}

@property (nonatomic,retain) _HKMedicalIDData * cloudMedicalIDData;                     //@synthesize cloudMedicalIDData=_cloudMedicalIDData - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDDataToPush;                    //@synthesize medicalIDDataToPush=_medicalIDDataToPush - In the implementation block
@property (nonatomic,retain) HDCloudSyncMedicalIDRecord * medicalIDRecord;              //@synthesize medicalIDRecord=_medicalIDRecord - In the implementation block
-(void)main;
-(_HKMedicalIDData *)cloudMedicalIDData;
-(HDCloudSyncMedicalIDRecord *)medicalIDRecord;
-(id)_eventWithDeviceProperties;
-(void)_pushMedicalIDRecordToCloudForContainer:(id)arg1 database:(id)arg2 ;
-(void)setCloudMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(_HKMedicalIDData *)medicalIDDataToPush;
-(void)setMedicalIDDataToPush:(_HKMedicalIDData *)arg1 ;
-(void)setMedicalIDRecord:(HDCloudSyncMedicalIDRecord *)arg1 ;
@end

