/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/NNMKSyncStateManager.h>

@protocol NNMKSyncStateManager <NSObject>
@property (assign,nonatomic,__weak) id<NNMKSyncStateManagerDelegate> delegate; 
@required
-(id)pairedDeviceScreenScale;
-(id)pairedDeviceScreenSize;
-(void)reportInitialSyncDidComplete;
-(id<NNMKSyncStateManagerDelegate>)delegate;
-(BOOL)pairedDeviceSupportsMailContentProtectedChannel;
-(BOOL)isInitialSyncRestricted;
-(BOOL)pairedDeviceSupportsStandaloneMode;
-(void)reportInitialSyncDidCompleteSending;
-(void)setDelegate:(id)arg1;
-(BOOL)willPresentNotificationForMessage:(id)arg1;
-(void)reportInitialSyncProgress:(double)arg1;
-(BOOL)pairedDeviceSupportsMultipleMailboxes;
-(void)reportInitialSyncDidFailWithError:(id)arg1;
-(id)pairingStorePath;

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
-(id)pairedDeviceScreenScale;
-(void)_handleDidUnpairNotification:(id)arg1 ;
-(id)init;
-(id)pairedDeviceScreenSize;
-(void)reportInitialSyncDidComplete;
-(id<NNMKSyncStateManagerDelegate>)delegate;
-(BOOL)pairedDeviceSupportsMailContentProtectedChannel;
-(BOOL)isInitialSyncRestricted;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(BLTPingSubscriber *)notificationsPingSubscriber;
-(BOOL)pairedDeviceSupportsStandaloneMode;
-(void)reportInitialSyncDidCompleteSending;
-(void)setDelegate:(id<NNMKSyncStateManagerDelegate>)arg1 ;
-(BOOL)willPresentNotificationForMessage:(id)arg1 ;
-(void)_handlePairedDeviceChangedNotification:(id)arg1 ;
-(id)_bbSubsectionIdsForMessage:(id)arg1 ;
-(id)_pairedNanoRegistryDevice;
-(void)setInitialSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)setNotificationsPingSubscriber:(BLTPingSubscriber *)arg1 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(PSYSyncCoordinator *)initialSyncCoordinator;
-(void)reportInitialSyncProgress:(double)arg1 ;
-(BOOL)pairedDeviceSupportsMultipleMailboxes;
-(void)reportInitialSyncDidFailWithError:(id)arg1 ;
-(id)pairingStorePath;
-(void)dealloc;
@end

