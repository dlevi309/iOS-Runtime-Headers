/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAsynchronous;
-(BOOL)isReady;
-(void)endOperation;
-(NSMutableArray *)errors;
-(id)initWithParent:(id)arg1 ;
-(void)childOperationWasAdded:(id)arg1 ;
-(void)setReadyToStart:(BOOL)arg1 ;
-(void)_shutdownOperation;
-(void)childOperation:(id)arg1 didEndWithErrors:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
@end

