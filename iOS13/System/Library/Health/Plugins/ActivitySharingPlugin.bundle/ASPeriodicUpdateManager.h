/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class ASCloudKitManager, ASFriendListManager, ASRelationshipManager, NSHashTable, NSObject, NSString;

@interface ASPeriodicUpdateManager : NSObject <ASActivitySharingManagerReadyObserver> {

	ASCloudKitManager* _cloudKitManager;
	ASFriendListManager* _friendListManager;
	ASRelationshipManager* _relationshipManager;
	NSHashTable* _providers;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _providerQueue;
	BOOL _isWatch;
	BOOL _isPushInProgress;
	BOOL _hasQueuedPush;
	BOOL _hasRegisteredForUpdates;

}

@property (nonatomic,readonly) BOOL hasRegisteredForUpdates;              //@synthesize hasRegisteredForUpdates=_hasRegisteredForUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeProvider:(id)arg1 ;
-(void)addProvider:(id)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)requestImmediateUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIsWatch:(BOOL)arg1 ;
-(void)beginPeriodicUpdates;
-(void)endPeriodicUpdates;
-(void)_queue_performUpdateForActivity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)hasRegisteredForUpdates;
@end

