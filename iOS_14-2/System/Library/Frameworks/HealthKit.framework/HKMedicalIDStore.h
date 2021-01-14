/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, _HKMedicalIDData, NSString;

@interface HKMedicalIDStore : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKTaskServerProxyProvider* _setupStatusProxyProvider;
	_HKMedicalIDData* _lastFetchedMedicalIDData;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) long long medicalIDSetUpStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setupStatusTaskIdentifier;
+(id)serverInterface;
+(id)setupStatusServerInterface;
+(id)taskIdentifier;
+(id)clientInterface;
+(id)setupStatusClientInterface;
-(void)connectionInvalidated;
-(void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)fetchMedicalIDClinicalContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(/*^block*/id)arg1 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)setLastFetchedMedicalIDData:(id)arg1 ;
-(id)lastFetchedMedicalIDData;
-(long long)medicalIDSetUpStatus;
-(void)updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMedicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
@end

