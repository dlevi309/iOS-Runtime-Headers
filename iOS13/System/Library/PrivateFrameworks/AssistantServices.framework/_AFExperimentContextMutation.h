/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentContextMutating.h>

@class AFExperimentContext, NSDictionary, NSString;

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating> {

	AFExperimentContext* _baseModel;
	NSDictionary* _experimentsByConfigurationIdentifier;
	struct {
		unsigned isDirty : 1;
		unsigned hasExperimentsByConfigurationIdentifier : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setExperimentsByConfigurationIdentifier:(id)arg1 ;
@end

