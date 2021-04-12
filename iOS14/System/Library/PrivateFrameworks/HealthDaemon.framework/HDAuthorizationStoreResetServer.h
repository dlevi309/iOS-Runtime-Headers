/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKAuthorizationStoreResetServer.h>

@class NSString;

@interface HDAuthorizationStoreResetServer : HDStandardTaskServer <HKAuthorizationStoreResetServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetAuthorizationStatusesForObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
@end

