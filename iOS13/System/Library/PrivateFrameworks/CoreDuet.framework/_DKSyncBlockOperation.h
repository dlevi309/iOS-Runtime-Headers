/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation {

	os_unfair_lock_s _lock;
	BOOL _asynchronous;
	NSMutableArray* _blocks;

}

@property (readonly) NSMutableArray * blocks;                     //@synthesize blocks=_blocks - In the implementation block
@property (getter=isAsynchronous) BOOL asynchronous;              //@synthesize asynchronous=_asynchronous - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)executionBlocks;
-(void)setAsynchronous:(BOOL)arg1 ;
-(NSMutableArray *)blocks;
@end

