/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

