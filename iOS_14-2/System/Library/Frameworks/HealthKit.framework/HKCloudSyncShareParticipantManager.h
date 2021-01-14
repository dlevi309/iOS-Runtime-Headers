/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) long long lastKnownParticipantSharingStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)taskIdentifier;
+(id)clientInterface;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)fetchAllShareParticipantEmailAddressesWithCompletion:(/*^block*/id)arg1 ;
-(long long)lastKnownParticipantSharingStatus;
-(void)revokeAccessForAllShareParticipantsWithCompletion:(/*^block*/id)arg1 ;
-(void)tearDownHealthSharingForProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

