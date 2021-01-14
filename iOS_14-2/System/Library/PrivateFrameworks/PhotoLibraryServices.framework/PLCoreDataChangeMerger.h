/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)allContextsNotIdenticalTo:(id)arg1 ;
-(void)handleUnknownMergeEvent;
-(BOOL)isMergingCoalescedSaveNotification;
-(void)registerToReceiveCoreDataChanges:(id)arg1 ;
-(id)allContexts;
-(NSDictionary *)allDidSaveObjectIDsUserInfo;
-(void)invalidate;
-(void)setAllDidSaveObjectIDsUserInfo:(NSDictionary *)arg1 ;
-(void)refreshAllObjects;
-(void)setIsMergingCoalescedSaveNotification:(BOOL)arg1 ;
-(void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

