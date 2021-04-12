/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setImagePath:(id)arg1 ;
-(void)setSymbolName:(id)arg1 ;
@end

