/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchMedicalRecordsForClinicalRecordsUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_privateSourceBundleIdentifiersByPublicWithError:(id*)arg1 ;
-(id)_medicalRecordForClinicalRecordWithUUID:(id)arg1 privateSourceBundleIdentifiersByPublic:(id)arg2 error:(id*)arg3 ;
@end

