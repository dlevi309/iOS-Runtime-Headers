/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)taskIdentifier;
-(NSUUID *)taskUUID;
-(id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 taskUUID:(id)arg4 ;
-(void)setTaskConfiguration:(HKTaskConfiguration *)arg1 ;
-(HKTaskConfiguration *)taskConfiguration;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSURL *)pluginURL;
-(void)setPluginURL:(NSURL *)arg1 ;
@end

