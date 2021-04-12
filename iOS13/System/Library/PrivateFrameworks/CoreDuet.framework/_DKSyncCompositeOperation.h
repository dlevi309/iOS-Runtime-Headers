/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {

	_DKSyncCompositeOperation* _parent;
	AB _isReadyToStart;
	NSHashTable* _children;
	os_unfair_lock_s _lock;
	NSMutableArray* _errors;

}

@property (readonly) NSMutableArray * errors;              //@synthesize errors=_errors - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithParent:(id)arg1 ;
-(void)cancel;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(NSMutableArray *)errors;
-(void)endOperation;
-(void)childOperationWasAdded:(id)arg1 ;
-(void)setReadyToStart:(BOOL)arg1 ;
-(void)_shutdownOperation;
-(void)childOperation:(id)arg1 didEndWithErrors:(id)arg2 ;
@end

