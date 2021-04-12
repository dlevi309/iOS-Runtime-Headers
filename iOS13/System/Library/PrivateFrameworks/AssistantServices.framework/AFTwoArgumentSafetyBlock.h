/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFTwoArgumentSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;
	id _defaultValue1;
	id _defaultValue2;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 defaultValue1:(id)arg2 defaultValue2:(id)arg3 ;
-(BOOL)invokeWithValue:(id)arg1 andValue:(id)arg2 ;
@end

