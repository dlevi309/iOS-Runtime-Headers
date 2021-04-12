/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setProcessName:(id)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
@end

