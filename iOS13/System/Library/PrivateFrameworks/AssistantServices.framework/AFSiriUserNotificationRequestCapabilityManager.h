/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)requiredIntentIDInNotificationCategory;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)pairedDevicesChanged:(id)arg1 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(BOOL)requestCanBeHandled;
-(BOOL)hasEligibleSetup;
-(BOOL)supportedByApplicationWithBundleID:(id)arg1 ;
-(void)systemControllerDied:(id)arg1 ;
-(void)updateAudioRouteAvailabilityForSpokenMessages:(id)arg1 ;
-(void)fetchInitialState;
-(void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyObserversOfCurrentEligibleSetupState:(BOOL)arg1 ;
-(void)fetchEligibleSetupStateWithCompletion:(/*^block*/id)arg1 ;
-(void)updateWirelessSplitterSessionInfoAndObserve;
-(void)fetchWirelessSplitterSessionInfoAndStartObservingSync;
-(BOOL)_updateAudioRouteAvailabilityForSpokenMessagesAndBroadcast:(BOOL)arg1 ;
-(void)notifyObserversOfCurrentRequestCanBeHandledState;
-(void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRequestCanBeHandledStateWithCompletion:(/*^block*/id)arg1 ;
-(id)_settingsConnection;
-(void)_settingsConnectionDidDisconnect;
@end

