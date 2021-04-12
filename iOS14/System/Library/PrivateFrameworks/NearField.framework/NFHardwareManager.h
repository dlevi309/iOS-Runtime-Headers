/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NFHardwareManagerXPCDelegate.h>
#import <libobjc.A.dylib/NFHardwareManagerCallbacks.h>

@class NFHardwareManagerXPC, NSMutableSet, NSArray, NSDictionary, NFHardwareControllerInfo, NSUUID, NSString;

@interface NFHardwareManager : NSObject <NFHardwareManagerXPCDelegate, NFHardwareManagerCallbacks> {

	NFHardwareManagerXPC* _xpc;
	NSMutableSet* _sessions;
	BOOL _hasEventListener;
	NSMutableSet* _eventListeners;
	NSArray* _secureElements;
	NSDictionary* _secureElementsById;
	unsigned _hwSupport;
	BOOL _didPreWarm;
	long long _type;

}

@property (readonly) NFHardwareControllerInfo * controllerInfo; 
@property (readonly) NSUUID * blessedUser; 
@property (nonatomic,readonly) BOOL isBackgroundTagReadingAvailable; 
@property (assign,nonatomic) BOOL suspendBackgroundTagReading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHardwareManagerWithNoUI;
+(id)sharedHardwareManager;
-(id)getRadioEnabledState:(long long*)arg1 ;
-(void)invalidateConnection;
-(void)refreshSecureElements;
-(void)temperatureChanged:(double)arg1 ;
-(void)configureReaderModeRFForTransitPartner:(BOOL)arg1 transitPartner:(unsigned)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithType:(long long)arg1 ;
-(BOOL)hasCard;
-(id)startECommercePaymentSession:(/*^block*/id)arg1 ;
-(id)startSesHatSession:(/*^block*/id)arg1 ;
-(id)startNdefTagSession:(/*^block*/id)arg1 ;
-(id)getDieID;
-(id)getDieIDWithError:(id*)arg1 ;
-(id)setRadioEnabledSetting:(BOOL)arg1 ;
-(id)startSecureElementManagerSessionWithPriority:(/*^block*/id)arg1 ;
-(BOOL)suspendBackgroundTagReading;
-(void)dumpLPMDebugLog;
-(id)startPeerPaymentSession:(/*^block*/id)arg1 ;
-(id)rfSettings;
-(void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(BOOL)arg2 ;
-(id)getPowerCounters:(id*)arg1 ;
-(id)startSinglePollExpressModeAssertion:(double)arg1 ;
-(void)sessionDidEnd:(id)arg1 ;
-(id)startSecureElementAndHCESession:(/*^block*/id)arg1 ;
-(BOOL)getHeadlessFactoryMode:(id*)arg1 ;
-(BOOL)isInRestrictedMode;
-(unsigned)checkUserBlessing:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)startLoyaltyAndContactlessPaymentSession:(/*^block*/id)arg1 ;
-(id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)getUniqueFDRKey:(id*)arg1 ;
-(id)secureElements;
-(BOOL)expressModesEnabled;
-(void)setSuspendBackgroundTagReading:(BOOL)arg1 ;
-(id)startContactlessSession:(/*^block*/id)arg1 ;
-(id)connectToXPCManager;
-(BOOL)areSessionsAllowed;
-(id)startTrustSession:(/*^block*/id)arg1 ;
-(unsigned)queryHardwareSupport:(id*)arg1 ;
-(BOOL)triggerHammerfestRecovery;
-(void)setAuthorization:(id)arg1 ;
-(id)hostEmulationLog;
-(NFHardwareControllerInfo *)controllerInfo;
-(BOOL)isExpressModeSupported;
-(id)startFieldDetectSession:(/*^block*/id)arg1 ;
-(BOOL)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2 ;
-(void)registerEventListener:(id)arg1 ;
-(unsigned)setBlessedUser:(id)arg1 withAuthorization:(id)arg2 ;
-(BOOL)secureElementBootHistory:(id*)arg1 ;
-(id)controllerInfoWithError:(id*)arg1 ;
-(id)getRadioEnabledSetting:(BOOL*)arg1 ;
-(id)_sessionAttribute;
-(id)setChipscope:(BOOL)arg1 ;
-(void)didInterrupt:(id)arg1 ;
-(id)getHeadlessModeFlags:(unsigned*)arg1 ;
-(id)getTemperature:(double*)arg1 ;
-(id)_startReaderSessionWithUI:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(unsigned)checkUserBlessing:(id)arg1 hasCards:(BOOL*)arg2 ;
-(id)startSecureElementManagerSessionWithPriority:(BOOL)arg1 callback:(/*^block*/id)arg2 ;
-(id)disableHeadless;
-(void)didChangeRadioState:(BOOL)arg1 ;
-(void)didInvalidate;
-(BOOL)isBackgroundTagReadingAvailable;
-(id)enableHeadlessTestMode:(unsigned short)arg1 ;
-(id)enableLPEMFeature:(unsigned long long)arg1 ;
-(id)startHCESession:(/*^block*/id)arg1 ;
-(BOOL)isExpressAppletTypeSupported:(unsigned char)arg1 ;
-(id)pushSignedRF:(id)arg1 ;
-(id)startReaderSession:(/*^block*/id)arg1 ;
-(id)stateInfo:(id*)arg1 ;
-(void)unregisterEventListener:(id)arg1 ;
-(id)toggleGPIO:(unsigned short)arg1 ;
-(BOOL)preWarm;
-(id)startContactlessPaymentSession:(/*^block*/id)arg1 ;
-(id)startReaderSessionWithActionSheetUI:(/*^block*/id)arg1 ;
-(id)startContactlessUICCSession:(/*^block*/id)arg1 ;
-(id)updateHWSupportWithXPC:(id)arg1 ;
-(id)releaseSinglePollExpressModeAssertion;
-(void)failForwardCompleted;
-(BOOL)setFieldDetectEnabled:(BOOL)arg1 ;
-(void)actOnUserInitiatedSystemShutDown:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(id)startSecureElementManagerSession:(/*^block*/id)arg1 ;
-(unsigned)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3 ;
-(NSUUID *)blessedUser;
-(id)disableLPEMFeature:(unsigned long long)arg1 ;
-(id)secureElementWithIdentifier:(id)arg1 ;
-(id)configureHeadlessFactoryMode:(BOOL)arg1 ;
-(unsigned)getHwSupport;
-(BOOL)triggerDelayedWake:(unsigned char)arg1 ;
@end

