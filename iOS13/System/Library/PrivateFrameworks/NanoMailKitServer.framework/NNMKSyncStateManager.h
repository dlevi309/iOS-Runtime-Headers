/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/NNMKSyncStateManager.h>

@protocol NNMKSyncStateManager <NSObject>
@property (assign,nonatomic,__weak) id<NNMKSyncStateManagerDelegate> delegate; 
@required
-(id<NNMKSyncStateManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)pairingStorePath;
-(BOOL)pairedDeviceSupportsMultipleMailboxes;
-(BOOL)pairedDeviceSupportsStandaloneMode;
-(void)reportInitialSyncProgress:(double)arg1;
-(void)reportInitialSyncDidCompleteSending;
-(void)reportInitialSyncDidComplete;
-(void)reportInitialSyncDidFailWithError:(id)arg1;
-(BOOL)willPresentNotificationForMessage:(id)arg1;
-(BOOL)isInitialSyncRestricted;
-(id)pairedDeviceScreenSize;
-(id)pairedDeviceScreenScale;
-(BOOL)pairedDeviceSupportsMailContentProtectedChannel;

@end


@protocol NNMKSyncStateManagerDelegate;
@class BLTPingSubscriber, PSYSyncCoordinator, NSString;

@interface NNMKSyncStateManager : NSObject <PSYSyncCoordinatorDelegate, NNMKSyncStateManager> {

	id<NNMKSyncStateManagerDelegate> delegate;
	BLTPingSubscriber* _notificationsPingSubscriber;
	PSYSyncCoordinator* _initialSyncCoordinator;

}

@property (nonatomic,retain) BLTPingSubscriber * notificationsPingSubscriber;               //@synthesize notificationsPingSubscriber=_notificationsPingSubscriber - In the implementation block
@property (nonatomic,retain) PSYSyncCoordinator * initialSyncCoordinator;                   //@synthesize initialSyncCoordinator=_initialSyncCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NNMKSyncStateManagerDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<NNMKSyncStateManagerDelegate>)delegate;
-(void)setDelegate:(id<NNMKSyncStateManagerDelegate>)arg1 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(id)pairingStorePath;
-(BOOL)pairedDeviceSupportsMultipleMailboxes;
-(BOOL)pairedDeviceSupportsStandaloneMode;
-(void)reportInitialSyncProgress:(double)arg1 ;
-(void)reportInitialSyncDidCompleteSending;
-(void)reportInitialSyncDidComplete;
-(void)reportInitialSyncDidFailWithError:(id)arg1 ;
-(BOOL)willPresentNotificationForMessage:(id)arg1 ;
-(void)_handleDidUnpairNotification:(id)arg1 ;
-(void)_handlePairedDeviceChangedNotification:(id)arg1 ;
-(id)_pairedNanoRegistryDevice;
-(id)_bbSubsectionIdsForMessage:(id)arg1 ;
-(BOOL)isInitialSyncRestricted;
-(id)pairedDeviceScreenSize;
-(id)pairedDeviceScreenScale;
-(BOOL)pairedDeviceSupportsMailContentProtectedChannel;
-(BLTPingSubscriber *)notificationsPingSubscriber;
-(void)setNotificationsPingSubscriber:(BLTPingSubscriber *)arg1 ;
-(PSYSyncCoordinator *)initialSyncCoordinator;
-(void)setInitialSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
@end

