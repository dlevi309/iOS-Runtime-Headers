/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

