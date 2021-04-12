/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKDeviceStoreClient.h>

@class HKProxyProvider, NSString;

@interface HKDeviceStore : NSObject <_HKXPCExportable, HKDeviceStoreClient> {

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
-(id)remoteInterface;
-(void)fetchDevicesMatchingValues:(id)arg1 forProperty:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAllDevicesWithCompletion:(/*^block*/id)arg1 ;
@end

