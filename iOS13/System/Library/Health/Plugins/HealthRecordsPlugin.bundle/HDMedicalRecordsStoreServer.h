/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKMedicalRecordsStoreServer.h>

@class NSString;

@interface HDMedicalRecordsStoreServer : HDStandardTaskServer <HKMedicalRecordsStoreServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchMedicalRecordsForClinicalRecordsUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_privateSourceBundleIdentifiersByPublicWithError:(id*)arg1 ;
-(id)_medicalRecordForClinicalRecordWithUUID:(id)arg1 privateSourceBundleIdentifiersByPublic:(id)arg2 error:(id*)arg3 ;
@end

