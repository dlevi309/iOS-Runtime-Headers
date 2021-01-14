/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKHealthRecordsAccountInfoStoreServer.h>

@class NSString;

@interface HDHealthRecordsAccountInfoServer : HDStandardTaskServer <HKHealthRecordsAccountInfoStoreServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_determineMedicalRecordsAccountInfoStatusWithCompletion:(/*^block*/id)arg1 ;
@end

