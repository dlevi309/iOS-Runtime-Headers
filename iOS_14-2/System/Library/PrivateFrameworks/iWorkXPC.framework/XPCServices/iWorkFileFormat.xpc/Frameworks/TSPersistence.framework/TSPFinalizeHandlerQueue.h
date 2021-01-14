/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue;
#import <TSPersistence/TSPersistence-Structs.h>
@class NSObject, TSPCancellationState;

@interface TSPFinalizeHandlerQueue : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _rootObjectIdentifier;
	TSPCancellationState* _cancellationState;
	vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> >* _order;
	unordered_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > >* _map;
	FinalizeHandlerItem* _currentItem;

}
-(id)init;
-(void)reset;
-(id)initWithRootObjectIdentifier:(long long)arg1 cancellationState:(id)arg2 ;
-(BOOL)runFinalizeHandlers;
-(id)initWithRootObjectIdentifier:(long long)arg1 ;
-(long long)currentObjectIdentifier;
-(void)addFinalizeHandlers:(vector<void ()(), std::__1::allocator<void ()()> >*)arg1 strongReferencesOrNull:(unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)arg2 forIdentifier:(long long)arg3 ;
-(void)visitItemForCycleDetection:(FinalizeHandlerItem*)arg1 ;
-(void)runFinalizeHandlerForItem:(FinalizeHandlerItem*)arg1 ;
@end

