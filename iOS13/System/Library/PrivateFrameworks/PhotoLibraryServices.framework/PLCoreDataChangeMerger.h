/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLManagedObjectContextList, NSObject, NSDictionary;

@interface PLCoreDataChangeMerger : NSObject {

	PLManagedObjectContextList* _contextsToReceiveNotifications;
	NSObject*<OS_dispatch_queue> _mergeChangesQueue;
	BOOL _invalidated;
	BOOL _isMergingCoalescedSaveNotification;
	NSDictionary* _allDidSaveObjectIDsUserInfo;

}

@property (assign,nonatomic) BOOL isMergingCoalescedSaveNotification;               //@synthesize isMergingCoalescedSaveNotification=_isMergingCoalescedSaveNotification - In the implementation block
@property (nonatomic,copy) NSDictionary * allDidSaveObjectIDsUserInfo;              //@synthesize allDidSaveObjectIDsUserInfo=_allDidSaveObjectIDsUserInfo - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)refreshAllObjects;
-(id)allContexts;
-(NSDictionary *)allDidSaveObjectIDsUserInfo;
-(BOOL)isMergingCoalescedSaveNotification;
-(void)registerToReceiveCoreDataChanges:(id)arg1 ;
-(void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleUnknownMergeEvent;
-(id)allContextsNotIdenticalTo:(id)arg1 ;
-(void)setIsMergingCoalescedSaveNotification:(BOOL)arg1 ;
-(void)setAllDidSaveObjectIDsUserInfo:(NSDictionary *)arg1 ;
@end

