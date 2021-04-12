/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
*/


@protocol OS_dispatch_queue;
#import <CarrierSettings/CarrierSettings-Structs.h>
@class NSMutableDictionary, NSString, PHForwardingSettings, NSObject, NSDictionary;

@interface PhoneSettingsTelephony : NSObject {

	NSMutableDictionary* _pendingSaves;
	NSMutableDictionary* _pendingRequests;
	NSString* _myNumber;
	NSString* _carrierName;
	PHForwardingSettings* _callForwardingSettingsUnconditional;
	PHForwardingSettings* _callForwardingSettingsMobileBusy;
	PHForwardingSettings* _callForwardingSettingsNoReply;
	PHForwardingSettings* _callForwardingSettingsNotReachable;
	unsigned _callWaitingEnabled;
	unsigned _callerIDIsModifiable;
	unsigned _callerIDMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _networkSelectionMode;
	unsigned _simLocked;
	NSString* _cachedPassword;
	NSString* _newNumber;
	unsigned _savingPhoneNumber : 1;
	unsigned _phoneBookSelected : 1;
	unsigned _phoneNumberWritten : 1;
	NSDictionary* _simToolkitMenu;
	CTServerConnectionRef _serverConnection;

}

@property (nonatomic,readonly) CTServerConnectionRef serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_reset;
-(id)carrierName;
-(id)currentNetwork;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(void)setCallForwardingNumber:(id)arg1 ;
-(CTServerConnectionRef)serverConnection;
-(id)descriptionDictionary;
-(void)startWatching;
-(void)stopWatching;
-(void)_handleCallerIDChanged;
-(int)showReplyWithMessage;
-(void)destroyServerConnection;
-(void)resetCallForwardingSettings;
-(void)_resetCallerIDSettings;
-(unsigned)callForwardingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)_callForwardingSettingsForForwardingReason:(id)arg1 ;
-(void)_requestCallForwardingSettingsForReason:(id)arg1 ;
-(void)setCallForwardingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_saveCallForwardingEnabled:(BOOL)arg1 number:(id)arg2 forwardingReason:(id)arg3 ;
-(id)callForwardingNumber:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setCallForwardingNumber:(id)arg1 forReason:(id)arg2 ;
-(void)_requestSettings:(id)arg1 ;
-(void)_saveSettings:(id)arg1 ;
-(unsigned)callerIDModifiable:(BOOL)arg1 ;
-(unsigned)callerIDMode:(BOOL)arg1 ;
-(void)_handleCallerIDSettings:(id)arg1 ;
-(void)_handleSIMLockSettings:(id)arg1 ;
-(void)_populateToolkitMenuIfNeeded;
-(BOOL)allowSIMLock;
-(unsigned)simLocked:(BOOL)arg1 ;
-(BOOL)hasSubscriberIdentity;
-(BOOL)simIsPresent;
-(id)simToolkitMenuItems;
-(void)_handleCallForwardingSettings:(id)arg1 didAttemptToSet:(BOOL)arg2 forwardingReason:(id)arg3 ;
-(void)postCallForwardingChangedNotificationForForwardingReason:(id)arg1 ;
-(void)_phoneNumberSaveFinishedWithSuccess:(BOOL)arg1 ;
-(id)manuallySelectedNetworkDictionary;
-(int)networkSelectionMode;
-(void)_invalidateSIMLockedSetting;
-(int)currentNetworkSelectionState;
-(id)myNumber;
-(void)setMyNumber:(id)arg1 ;
-(BOOL)allowNetworkSelection;
-(void)enableAutomaticNetworkSelection;
-(void)selectManualNetwork:(id)arg1 ;
-(unsigned)callForwardingEnabled:(BOOL)arg1 ;
-(id)callForwardingNumber:(BOOL)arg1 ;
-(unsigned)callWaitingEnabled:(BOOL)arg1 ;
-(void)setCallWaitingEnabled:(BOOL)arg1 ;
-(BOOL)allowCallerIDChange:(BOOL)arg1 ;
-(void)setCallerIDEnabled:(unsigned)arg1 ;
-(void)requestNetworkList;
-(void)setSIMLocked:(BOOL)arg1 password:(id)arg2 ;
-(id)unlockAttemptsRemainingString;
-(void)selectSIMToolkitMenuItemAtIndex:(int)arg1 ;
-(id)simToolkitMenuTitle;
-(BOOL)allowPINChange;
-(void)setPIN:(id)arg1 password:(id)arg2 ;
-(int)showCallForwarding;
-(int)showCallWaiting;
-(int)showCallerID;
-(int)showSIMPIN;
-(int)showSIMToolkitMenu;
-(id)pendingRequestForUniqueSettingType:(id)arg1 ;
-(id)pendingSaveForUniqueSettingType:(id)arg1 ;
-(void)receivedRequestResponseForUniqueSettingType:(id)arg1 ;
-(void)receivedSaveResponseForUniqueSettingType:(id)arg1 ;
-(id)lastUsedForwardingNumberForReason:(id)arg1 ;
-(void)resetLastUsedForwardingNumberForReason:(id)arg1 ;
-(void)_handleCallWaitingSettings:(id)arg1 ;
-(void)_handleNetworkList:(id)arg1 ;
-(void)_handlePINSettings:(id)arg1 ;
-(void)_carrierInfoChanged;
-(void)_simRemoved;
-(void)_simReady;
-(void)_simPUKLocked;
-(void)_networkSettingsDisabled;
-(void)_phoneBookSelected;
-(void)_phoneNumberWritten;
-(void)_phoneNumberChanged;
-(void)_invalidateSIMToolkitMenuItemCache;
@end

