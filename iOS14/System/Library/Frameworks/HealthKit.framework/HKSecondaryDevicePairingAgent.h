/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSUUID, NSString;

@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable> {

	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)tearDownHealthSharingWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSharingStatusWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

