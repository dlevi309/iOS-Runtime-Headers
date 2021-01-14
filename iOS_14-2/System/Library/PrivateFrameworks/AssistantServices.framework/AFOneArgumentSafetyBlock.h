/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFOneArgumentSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;
	id _defaultValue;

}
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)invokeWithValue:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 defaultValue:(id)arg2 ;
-(void)dealloc;
@end

