/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, BBSyncServiceDelegate;
@class IDSService, NSMutableArray, NSObject, NSString;

@interface BBSyncService : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	NSMutableArray* _pendingDismissalDictionaries;
	NSMutableArray* _pendingDismissalIDs;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _queuedFeed;
	NSString* _queuedSectionID;
	NSString* _queuedUniversalSectionID;
	id<BBSyncServiceDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long pairedDeviceCount; 
@property (assign,nonatomic,__weak) id<BBSyncServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(id)dismissalSectionIdentifiersForIncomingMessage:(id)arg1 ;
-(BOOL)_hasDestination;
-(void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(id)_syncAccount;
-(BOOL)_syncHasDefaultPairedDevice;
-(id)_dismissalDictionaryForBulletin:(id)arg1 ;
-(id)_syncLocalDevices;
-(void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(id<BBSyncServiceDelegate>)delegate;
-(void)setDelegate:(id<BBSyncServiceDelegate>)arg1 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)sendPendingSyncedRemovals;
-(void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(unsigned long long)pairedDeviceCount;
-(void)_sendSyncMessage:(id)arg1 ;
@end

