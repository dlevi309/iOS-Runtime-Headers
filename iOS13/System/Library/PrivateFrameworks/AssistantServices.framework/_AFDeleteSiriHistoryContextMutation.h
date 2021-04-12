/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFDeleteSiriHistoryContextMutating.h>

@class AFDeleteSiriHistoryContext, NSString;

@interface _AFDeleteSiriHistoryContextMutation : NSObject <AFDeleteSiriHistoryContextMutating> {

	AFDeleteSiriHistoryContext* _baseModel;
	NSString* _successTitle;
	NSString* _successBody;
	NSString* _successButtonText;
	NSString* _errorTitle;
	NSString* _errorBody;
	NSString* _errorButtonText;
	struct {
		unsigned isDirty : 1;
		unsigned hasSuccessTitle : 1;
		unsigned hasSuccessBody : 1;
		unsigned hasSuccessButtonText : 1;
		unsigned hasErrorTitle : 1;
		unsigned hasErrorBody : 1;
		unsigned hasErrorButtonText : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setErrorTitle:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setSuccessTitle:(id)arg1 ;
-(void)setSuccessBody:(id)arg1 ;
-(void)setSuccessButtonText:(id)arg1 ;
-(void)setErrorBody:(id)arg1 ;
-(void)setErrorButtonText:(id)arg1 ;
@end

