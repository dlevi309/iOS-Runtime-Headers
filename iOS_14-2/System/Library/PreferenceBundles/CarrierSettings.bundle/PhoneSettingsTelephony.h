/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
*/


@protocol OS_dispatch_queue;
#import <CarrierSettings/CarrierSettings-Structs.h>
@class NSMutableDictionary, NSString, PHForwardingSettings, NSObject;

@interface PhoneSettingsTelephony : NSObject {

	NSMutableDictionary* _pendingSaves;
	NSMutableDictionary* _pendingRequests;
	NSString* _myNumber;
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
	CTServerConnectionRef _serverConnection;

}

@property (nonatomic,readonly) CTServerConnectionRef serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
-(id)currentNetwork;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(void)startWatching;
-(id)descriptionDictionary;
-(CTServerConnectionRef)serverConnection;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)_reset;
-(void)setCallForwardingNumber:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(void)stopWatching;
-(int)networkSelectionMode;
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
-(BOOL)allowSIMLock;
-(unsigned)simLocked:(BOOL)arg1 ;
-(BOOL)hasSubscriberIdentity;
-(BOOL)simIsPresent;
-(void)_handleCallForwardingSettings:(id)arg1 didAttemptToSet:(BOOL)arg2 forwardingReason:(id)arg3 ;
-(void)postCallForwardingChangedNotificationForForwardingReason:(id)arg1 ;
-(void)_phoneNumberSaveFinishedWithSuccess:(BOOL)arg1 ;
-(id)manuallySelectedNetworkDictionary;
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
-(BOOL)allowPINChange;
-(void)setPIN:(id)arg1 password:(id)arg2 ;
-(int)showCallForwarding;
-(int)showCallWaiting;
-(int)showCallerID;
-(int)showSIMPIN;
-(int)showReplyWithMessage;
-(id)pendingRequestForUniqueSettingType:(id)arg1 ;
-(id)pendingSaveForUniqueSettingType:(id)arg1 ;
-(void)receivedRequestResponseForUniqueSettingType:(id)arg1 ;
-(void)receivedSaveResponseForUniqueSettingType:(id)arg1 ;
-(id)lastUsedForwardingNumberForReason:(id)arg1 ;
-(void)resetLastUsedForwardingNumberForReason:(id)arg1 ;
-(void)_handleCallWaitingSettings:(id)arg1 ;
-(void)_handleNetworkList:(id)arg1 ;
-(void)_handleCallerIDChanged;
-(void)_handlePINSettings:(id)arg1 ;
-(void)_simRemoved;
-(void)_simPUKLocked;
-(void)_networkSettingsDisabled;
-(void)_phoneBookSelected;
-(void)_phoneNumberWritten;
-(void)_phoneNumberChanged;
@end

