/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;

}
-(void)dealloc;
-(BOOL)invoke;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)invokeWithSignal:(long long)arg1 ;
@end

