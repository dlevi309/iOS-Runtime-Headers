/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASCloudKitManagerChangesObserver.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class ASFriendListManager, ASCloudKitManager, STConversation, NSObject, NSHashTable, NSString;

@interface ASGatewayManager : NSObject <ASCloudKitManagerChangesObserver, ASActivitySharingManagerReadyObserver> {

	ASFriendListManager* _friendListManager;
	ASCloudKitManager* _cloudKitManager;
	STConversation* _screenTimeConversation;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BOOL _currentlyPairedWatchMeetsMinimumVersion;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL hasReachedMaximumNumberOfFriends; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReadyToProcessChanges; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateState;
-(void)activitySharingManagerReady:(id)arg1 ;
-(BOOL)hasReachedMaximumNumberOfFriends;
-(unsigned)inviteCompatibilityVersion;
-(BOOL)shouldFilterIncomingMessageFromContact:(id)arg1 ;
-(BOOL)isInviteVersionCompatible:(unsigned)arg1 ;
-(void)gatewayStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isReadyToProcessChanges;
-(void)cloudKitManagerDidUpdateAccountStatus:(id)arg1 ;
-(void)_queue_notifyObservers;
-(BOOL)_shouldFilterWhitelistContactDestinations:(id)arg1 ;
-(BOOL)_shouldFilterBlacklistContactDestinations:(id)arg1 ;
@end

