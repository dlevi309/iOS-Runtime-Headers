/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>
#import <libobjc.A.dylib/AFSettingsDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class AFSettingsConnection, AFNotifyObserver, AVSystemController, NSHashTable, NSObject, NSString;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate> {

	BOOL _inWirelessSplitterSession;
	BOOL _inWirelessSplitterSessionStateValid;
	BOOL _routeAvailableForSpokenMessages;
	BOOL _lastKnownEligibilityState;
	BOOL _localVoiceAssetAvailable;
	AFSettingsConnection* _settingsConnection;
	AFNotifyObserver* _pairedInfoChangeObserver;
	AFNotifyObserver* _wirelessSplitterSessionObserver;
	AFNotifyObserver* _wirelessGuestConnectionObserver;
	AVSystemController* _avSystemController;
	AFNotifyObserver* _forcedUpdateObserver;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(BOOL)supportedByApplicationWithBundleID:(id)arg1 ;
+(long long)announcementTypeForBundleID:(id)arg1 ;
+(id)_requiredIntentIdentifiersForAnnouncementType:(long long)arg1 ;
+(id)_announceableIntentIdentifiersForAnnouncementType:(long long)arg1 ;
+(BOOL)_isRouteAvailableForAnnouncement:(id)arg1 ;
+(BOOL)applicationWithBundleID:(id)arg1 canAnnounceNotificationWithIntentIdentifiers:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)notifyObserversOfCurrentRequestCanBeHandledState;
-(void)fetchElligibleSetupStateAndNotifyObservers:(id)arg1 ;
-(void)fetchRequestCanBeHandledStateWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchInitialState;
-(void)systemControllerDied:(id)arg1 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)updateAudioRouteAvailabilityForSpokenMessages:(id)arg1 ;
-(void)updateWirelessSplitterSessionInfoAndObserve;
-(BOOL)hasEligibleSetup;
-(void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)requestCanBeHandled;
-(void)fetchWirelessSplitterSessionInfoAndStartObservingSync;
-(id)_init;
-(void)notifyObserversOfCurrentEligibleSetupState:(BOOL)arg1 ;
-(void)_settingsConnectionDidDisconnect;
-(BOOL)_updateAudioRouteAvailabilityForSpokenMessagesAndBroadcast:(BOOL)arg1 ;
-(void)fetchLocalVoiceAssetAvailabilityWithCompletion:(/*^block*/id)arg1 ;
-(id)_settingsConnection;
-(void)fetchEligibleSetupStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
@end

