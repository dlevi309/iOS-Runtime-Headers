/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentMutating.h>

@class AFExperiment, NSString, NSDictionary;

@interface _AFExperimentMutation : NSObject <AFExperimentMutating> {

	AFExperiment* _baseModel;
	NSString* _configurationIdentifier;
	NSString* _configurationVersion;
	NSString* _deploymentGroupIdentifier;
	NSDictionary* _deploymentGroupProperties;
	long long _deploymentReason;
	struct {
		unsigned isDirty : 1;
		unsigned hasConfigurationIdentifier : 1;
		unsigned hasConfigurationVersion : 1;
		unsigned hasDeploymentGroupIdentifier : 1;
		unsigned hasDeploymentGroupProperties : 1;
		unsigned hasDeploymentReason : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfigurationVersion:(id)arg1 ;
-(void)setConfigurationIdentifier:(id)arg1 ;
-(id)init;
-(void)setDeploymentGroupIdentifier:(id)arg1 ;
-(void)setDeploymentGroupProperties:(id)arg1 ;
-(void)setDeploymentReason:(long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

