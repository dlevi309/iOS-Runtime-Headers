/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClientInfoMutating.h>

@class AFClientInfo, NSString;

@interface _AFClientInfoMutation : NSObject <AFClientInfoMutating> {

	AFClientInfo* _baseModel;
	int _processIdentifier;
	NSString* _processName;
	struct {
		unsigned isDirty : 1;
		unsigned hasProcessIdentifier : 1;
		unsigned hasProcessName : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProcessName:(id)arg1 ;
-(id)init;
-(void)setProcessIdentifier:(int)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

