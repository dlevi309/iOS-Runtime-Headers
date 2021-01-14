/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithHelper:(id)arg1 ;
-(id)containerByID:(id)arg1 forURL:(id)arg2 ;
-(id)documentContainers;
-(id)allContainersByID;
-(id)allContainersBlockIfNeeded:(BOOL)arg1 ;
-(void)subscribeToContainerStatusUpdate;
-(void)invalidateAndClearCache:(BOOL)arg1 ;
-(void)_containerListDidChange;
-(void)unsubscribeToContainerStatusUpdate;
-(void)_accountWillChange;
-(id)_allContainersByIDNoCopyBlocking:(BOOL)arg1 ;
-(BOOL)_updateContainersCache;
-(void)dealloc;
@end

