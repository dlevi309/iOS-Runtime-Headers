/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBundleResourceMutating.h>

@class AFBundleResource, NSString;

@interface _AFBundleResourceMutation : NSObject <AFBundleResourceMutating> {

	AFBundleResource* _baseModel;
	NSString* _name;
	NSString* _extension;
	struct {
		unsigned isDirty : 1;
		unsigned hasName : 1;
		unsigned hasExtension : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setExtension:(id)arg1 ;
-(id)generate;
-(void)setName:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end

