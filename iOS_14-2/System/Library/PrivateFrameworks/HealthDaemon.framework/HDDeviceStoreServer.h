/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKDeviceStoreServer.h>

@class NSString;

@interface HDDeviceStoreServer : HDStandardTaskServer <HKDeviceStoreServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchDevicesMatchingValues:(id)arg1 forProperty:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchAllDevicesWithCompletion:(/*^block*/id)arg1 ;
@end

