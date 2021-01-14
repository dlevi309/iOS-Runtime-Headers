/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _operations;

}
-(id)init;
-(void)addOperation:(/*^block*/id)arg1 ;
-(id)evaluateWithInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)evaluatorWithInput:(id)arg1 ;
@end

