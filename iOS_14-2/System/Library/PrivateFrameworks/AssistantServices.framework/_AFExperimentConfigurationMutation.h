/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentConfigurationMutating.h>

@class AFExperimentConfiguration, NSString, AFExperimentGroup, NSArray;

@interface _AFExperimentConfigurationMutation : NSObject <AFExperimentConfigurationMutating> {

	AFExperimentConfiguration* _baseModel;
	long long _type;
	NSString* _identifier;
	NSString* _version;
	AFExperimentGroup* _controlGroup;
	NSArray* _experimentGroups;
	NSString* _salt;
	struct {
		unsigned isDirty : 1;
		unsigned hasType : 1;
		unsigned hasIdentifier : 1;
		unsigned hasVersion : 1;
		unsigned hasControlGroup : 1;
		unsigned hasExperimentGroups : 1;
		unsigned hasSalt : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSalt:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setControlGroup:(id)arg1 ;
-(void)setExperimentGroups:(id)arg1 ;
-(id)generate;
-(void)setVersion:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end

