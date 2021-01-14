/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAssertionContextMutating.h>

@class AFAssertionContext, NSString, NSDictionary;

@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating> {

	AFAssertionContext* _baseModel;
	unsigned long long _timestamp;
	NSString* _reason;
	NSDictionary* _userInfo;
	AFAssertionContext* _parentContext;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimestamp : 1;
		unsigned hasReason : 1;
		unsigned hasUserInfo : 1;
		unsigned hasParentContext : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id)arg1 ;
-(id)init;
-(void)setParentContext:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setReason:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
@end

