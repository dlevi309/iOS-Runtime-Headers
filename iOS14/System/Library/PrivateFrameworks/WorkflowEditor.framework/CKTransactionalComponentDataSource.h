/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/CKComponentStateListener.h>
#import <libobjc.A.dylib/CKComponentDebugReflowListener.h>

@protocol OS_dispatch_queue;
@class CKTransactionalComponentDataSourceState, CKTransactionalComponentDataSourceListenerAnnouncer, NSMutableArray, NSThread, NSObject, NSString;

@interface CKTransactionalComponentDataSource : NSObject <CKComponentStateListener, CKComponentDebugReflowListener> {

	CKTransactionalComponentDataSourceState* _state;
	CKTransactionalComponentDataSourceListenerAnnouncer* _announcer;
	unordered_map<int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > > > > >* _pendingAsynchronousStateUpdates;
	unordered_map<int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > > > > >* _pendingSynchronousStateUpdates;
	NSMutableArray* _pendingAsynchronousModifications;
	NSThread* _workThreadOverride;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addListener:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithConfiguration:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)state;
-(void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(void)didReceiveReflowComponentsRequest;
-(void)_enqueueModification:(id)arg1 ;
-(void)_startFirstAsynchronousModification;
-(id)_cancelEnqueuedModificationsOfType:(Class)arg1 ;
-(void)_synchronouslyApplyChange:(id)arg1 ;
-(void)_processStateUpdates;
-(void)_applyModificationPair:(id)arg1 ;
@end

