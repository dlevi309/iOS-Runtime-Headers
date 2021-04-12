/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setConfigurationIdentifier:(id)arg1 ;
-(void)setConfigurationVersion:(id)arg1 ;
-(void)setDeploymentGroupIdentifier:(id)arg1 ;
-(void)setDeploymentGroupProperties:(id)arg1 ;
-(void)setDeploymentReason:(long long)arg1 ;
@end

