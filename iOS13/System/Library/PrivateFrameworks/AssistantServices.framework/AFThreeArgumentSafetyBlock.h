/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFThreeArgumentSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)invokeWithValue:(id)arg1 andValue:(id)arg2 andValue:(id)arg3 ;
@end

