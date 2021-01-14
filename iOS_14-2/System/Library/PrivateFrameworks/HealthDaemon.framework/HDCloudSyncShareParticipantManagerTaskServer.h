/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKCloudSyncShareParticipantManagerServerInterface.h>

@class NSString;

@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchSharingParticipantStatus:(/*^block*/id)arg1 ;
-(void)remote_fetchAllShareParticipantEmailAddressesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_revokeAccessForAllShareParticipantsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_tearDownHealthSharingForProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

