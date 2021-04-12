/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKNanoSyncControlClient.h>

@class HKProxyProvider, NSString;

@interface HKNanoSyncControl : NSObject <_HKXPCExportable, HKNanoSyncControlClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
-(void)resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteInterface;
-(void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceNanoSyncWithPullRequest:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNanoSyncPairedDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)forceLastChanceNanoSyncWithCompletion:(/*^block*/id)arg1 ;
@end

