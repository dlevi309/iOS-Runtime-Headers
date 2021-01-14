/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSiriActivationResultMutating.h>

@class AFSiriActivationResult, NSError, NSString;

@interface _AFSiriActivationResultMutation : NSObject <AFSiriActivationResultMutating> {

	AFSiriActivationResult* _baseModel;
	long long _actionType;
	NSError* _error;
	struct {
		unsigned isDirty : 1;
		unsigned hasActionType : 1;
		unsigned hasError : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActionType:(long long)arg1 ;
-(id)init;
-(void)setError:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

