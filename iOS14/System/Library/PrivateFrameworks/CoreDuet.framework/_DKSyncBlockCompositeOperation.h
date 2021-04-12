/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAsynchronous;
-(NSMutableArray *)blocks;
-(void)main;
-(id)executionBlocks;
@end

