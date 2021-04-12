/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAsynchronous;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)blocks;
-(void)main;
-(void)setAsynchronous:(BOOL)arg1 ;
-(id)executionBlocks;
@end

