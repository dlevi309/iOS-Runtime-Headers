/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol BRContainerHelper, OS_dispatch_queue, OS_dispatch_source, NSObject;
@class NSMutableDictionary, NSMutableSet, NSObject, br_pacer;

@interface BRContainerCache : NSObject {

	id<BRContainerHelper> _helper;
	NSMutableDictionary* _containersByID;
	NSMutableSet* _fetchedContainerIDs;
	BOOL _containerCacheUptodate;
	NSObject*<OS_dispatch_queue> _queue;
	br_pacer* _invalidationPacer;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	id<NSObject> _containerStatusObserver;

}
+(id)containerCache;
+(id)containerHelper;
+(BOOL)hasDaemonicParts;
-(void)dealloc;
-(id)containerByID:(id)arg1 forURL:(id)arg2 ;
-(id)documentContainers;
-(id)allContainersByID;
-(id)allContainersBlockIfNeeded:(BOOL)arg1 ;
-(void)subscribeToContainerStatusUpdate;
-(void)invalidateAndClearCache:(BOOL)arg1 ;
-(void)_containerListDidChange;
-(void)unsubscribeToContainerStatusUpdate;
-(id)initWithHelper:(id)arg1 ;
-(id)_allContainersByIDNoCopyBlocking:(BOOL)arg1 ;
-(void)_accountWillChange;
-(BOOL)_updateContainersCache;
@end

