/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKAuthorizationStoreWriteServer.h>

@class NSString;

@interface HDAuthorizationStoreWriteServer : HDStandardTaskServer <HKAuthorizationStoreWriteServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
@end

