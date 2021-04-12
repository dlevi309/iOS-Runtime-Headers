/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentGroupMutating.h>

@class AFExperimentGroup, NSString, NSDictionary;

@interface _AFExperimentGroupMutation : NSObject <AFExperimentGroupMutating> {

	AFExperimentGroup* _baseModel;
	NSString* _identifier;
	unsigned long long _allocation;
	NSDictionary* _properties;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasAllocation : 1;
		unsigned hasProperties : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setAllocation:(unsigned long long)arg1 ;
@end

