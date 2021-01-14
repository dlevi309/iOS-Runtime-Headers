/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL isReadyToProcessChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)updateState;
-(void)removeObserver:(id)arg1 ;
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

