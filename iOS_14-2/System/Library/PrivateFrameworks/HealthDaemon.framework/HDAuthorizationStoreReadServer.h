/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKAuthorizationStoreReadServer.h>

@class NSString;

@interface HDAuthorizationStoreReadServer : HDStandardTaskServer <HKAuthorizationStoreReadServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)remote_fetchAuthorizationRecordsForSourceBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchAuthorizationStatusesForSampleUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchAuthorizationStatusesForDocumentType:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
@end

