/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@interface CKStatefulViewReusePool : NSObject {

	unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id> >, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem> > >* _pool;
	unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id> >, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem> > >* _pendingPool;
	BOOL _enqueuedPendingPurge;
	BOOL _pendingReusePoolEnabled;

}

@property (assign,nonatomic) BOOL pendingReusePoolEnabled;              //@synthesize pendingReusePoolEnabled=_pendingReusePoolEnabled - In the implementation block
+(id)sharedPool;
-(void)enqueueStatefulView:(id)arg1 forControllerClass:(Class)arg2 context:(id)arg3 mayRelinquishBlock:(/*^block*/id)arg4 ;
-(id)dequeueStatefulViewForControllerClass:(Class)arg1 preferredSuperview:(id)arg2 context:(id)arg3 ;
-(void)purgePendingPool;
-(BOOL)pendingReusePoolEnabled;
-(void)setPendingReusePoolEnabled:(BOOL)arg1 ;
@end

