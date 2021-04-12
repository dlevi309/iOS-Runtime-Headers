/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFCallSiteInfoMutating.h>

@class AFCallSiteInfo, NSString;

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating> {

	AFCallSiteInfo* _baseModel;
	NSString* _imagePath;
	NSString* _symbolName;
	struct {
		unsigned isDirty : 1;
		unsigned hasImagePath : 1;
		unsigned hasSymbolName : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImagePath:(id)arg1 ;
-(id)init;
-(void)setSymbolName:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

