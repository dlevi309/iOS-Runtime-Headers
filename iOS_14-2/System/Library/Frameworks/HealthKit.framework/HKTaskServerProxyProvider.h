/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKProxyProvider.h>

@class NSUUID, NSURL, HKTaskConfiguration, NSString;

@interface HKTaskServerProxyProvider : HKProxyProvider {

	NSUUID* _taskUUID;
	NSURL* _pluginURL;
	HKTaskConfiguration* _taskConfiguration;

}

@property (nonatomic,copy,readonly) NSUUID * taskUUID;                      //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier; 
@property (nonatomic,copy) NSURL * pluginURL;                               //@synthesize pluginURL=_pluginURL - In the implementation block
@property (copy) HKTaskConfiguration * taskConfiguration;                   //@synthesize taskConfiguration=_taskConfiguration - In the implementation block
-(void)setPluginURL:(NSURL *)arg1 ;
-(NSUUID *)taskUUID;
-(id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteInterface:(id)arg5 taskUUID:(id)arg6 ;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 healthStore:(id)arg2 endpointHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(NSString *)taskIdentifier;
-(id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 taskUUID:(id)arg4 ;
-(void)setTaskConfiguration:(HKTaskConfiguration *)arg1 ;
-(HKTaskConfiguration *)taskConfiguration;
-(NSURL *)pluginURL;
@end

