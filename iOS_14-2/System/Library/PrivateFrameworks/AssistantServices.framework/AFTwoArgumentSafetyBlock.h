/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFTwoArgumentSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;
	id _defaultValue1;
	id _defaultValue2;

}
-(id)initWithBlock:(/*^block*/id)arg1 defaultValue1:(id)arg2 defaultValue2:(id)arg3 ;
-(BOOL)invokeWithValue:(id)arg1 andValue:(id)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

