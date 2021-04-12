/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation {

	os_unfair_lock_s _lock;
	NSMutableArray* _blocks;

}

@property (readonly) NSMutableArray * blocks;              //@synthesize blocks=_blocks - In the implementation block
+(id)blockCompositeOperationWithBlock:(/*^block*/id)arg1 ;
+(id)blockCompositeOperationWithParent:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)executionBlocks;
-(NSMutableArray *)blocks;
-(id)initWithParent:(id)arg1 block:(/*^block*/id)arg2 ;
@end

