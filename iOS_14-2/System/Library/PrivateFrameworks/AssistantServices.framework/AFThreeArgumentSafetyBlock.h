/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFThreeArgumentSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;

}
-(BOOL)invokeWithValue:(id)arg1 andValue:(id)arg2 andValue:(id)arg3 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

