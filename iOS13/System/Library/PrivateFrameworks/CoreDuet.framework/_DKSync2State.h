/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _DKSyncType, _DKSyncCompositeOperation, NSMutableArray;

@interface _DKSync2State : NSObject {

	BOOL _isPending;
	_DKSyncType* _type;
	_DKSyncCompositeOperation* _parent;
	NSMutableArray* _completions;

}

@property (retain) NSMutableArray * completions;                    //@synthesize completions=_completions - In the implementation block
@property (assign) BOOL isPending;                                  //@synthesize isPending=_isPending - In the implementation block
@property (retain) _DKSyncType * type;                              //@synthesize type=_type - In the implementation block
@property (retain) _DKSyncCompositeOperation * parent;              //@synthesize parent=_parent - In the implementation block
-(_DKSyncCompositeOperation *)parent;
-(_DKSyncType *)type;
-(void)setType:(_DKSyncType *)arg1 ;
-(void)setParent:(_DKSyncCompositeOperation *)arg1 ;
-(BOOL)isPending;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)mergeType:(id)arg1 ;
-(void)setIsPending:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishWithError:(id)arg1 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
@end

