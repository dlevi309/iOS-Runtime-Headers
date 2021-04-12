/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@interface AVDispatchOnce : NSObject {

	os_unfair_lock_s _lock;
	BOOL _testFlag;

}
-(id)init;
-(void)runBlockOnce:(/*^block*/id)arg1 ;
@end

