/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLChangePublisher;
@class PLChangeNode, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor, NSURL, NSDictionary;

@interface PLChangeHandlingContainer : NSObject {

	PLChangeNode* _changeNode;
	PLCoreDataChangeMerger* _changeMerger;
	id<PLChangePublisher> _changePublisher;
	PLPersistentHistoryChangeDistributor* _persistentHistoryChangeDistributor;
	NSURL* _libraryURL;

}

@property (copy,readonly) NSURL * libraryURL;                                                //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,readonly) BOOL isMergingCoalescedSaveNotification; 
@property (nonatomic,copy,readonly) NSDictionary * allDidSaveObjectIDsUserInfo; 
-(NSURL *)libraryURL;
-(void)distributeChangesSinceLastCheckpoint;
-(id)initWithLibraryURL:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 persistentStoreCoordinator:(id)arg4 ;
-(void)start;
-(void)handleUnknownMergeEvent;
-(void)unpauseLaunchEventNotifications;
-(void)pauseLaunchEventNotifications;
-(BOOL)isMergingCoalescedSaveNotification;
-(void)stop;
-(void)registerToReceiveCoreDataChanges:(id)arg1 ;
-(NSDictionary *)allDidSaveObjectIDsUserInfo;
-(void)connectManagedObjectContext:(id)arg1 ;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

