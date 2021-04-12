/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableArray;

@interface NTKTransactionCommitCoordinator : NSObject {

	NSMutableArray* _commitHandlers;

}
+(id)_sharedInstance;
+(BOOL)addTransactionCommitHandler:(/*^block*/id)arg1 ;
+(void)flushCommitHandlers;
-(id)init;
-(BOOL)_addTransactionCommitHandler:(/*^block*/id)arg1 ;
-(void)_registerCATransactionCommitHandler;
@end

