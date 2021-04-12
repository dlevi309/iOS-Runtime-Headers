/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPersistOperation : HDCloudSyncOperation {

	_HKMedicalIDData* _medicalIDDataToPersist;

}

@property (nonatomic,retain) _HKMedicalIDData * medicalIDDataToPersist;              //@synthesize medicalIDDataToPersist=_medicalIDDataToPersist - In the implementation block
-(void)main;
-(void)setMedicalIDDataToPersist:(_HKMedicalIDData *)arg1 ;
-(BOOL)_persistMedicalIDToDisk:(id)arg1 errorOut:(id*)arg2 ;
-(_HKMedicalIDData *)medicalIDDataToPersist;
@end

