/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class CKContainer, _HKMedicalIDData, HDCloudSyncMedicalIDRecord;

@interface HDCloudSyncMedicalIDFetchOperation : HDCloudSyncOperation {

	CKContainer* _container;
	_HKMedicalIDData* _cloudMedicalIDData;
	HDCloudSyncMedicalIDRecord* _medicalIDRecord;

}

@property (nonatomic,readonly) _HKMedicalIDData * cloudMedicalIDData;                     //@synthesize cloudMedicalIDData=_cloudMedicalIDData - In the implementation block
@property (nonatomic,readonly) HDCloudSyncMedicalIDRecord * medicalIDRecord;              //@synthesize medicalIDRecord=_medicalIDRecord - In the implementation block
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)_startMedicalIDFetchForContainer:(id)arg1 database:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 container:(id)arg3 ;
-(_HKMedicalIDData *)cloudMedicalIDData;
-(HDCloudSyncMedicalIDRecord *)medicalIDRecord;
@end

