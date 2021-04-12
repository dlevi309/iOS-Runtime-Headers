/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKMedicalIDStoreServerInterface.h>

@class NSString;

@interface HDMedicalIDStoreTaskServer : HDStandardTaskServer <HKMedicalIDStoreServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_updateMedicalIDData:(id)arg1 lastFetchedMedicalIDData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchMedicalIDWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_medicalIDClinicalContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1 ;
@end

