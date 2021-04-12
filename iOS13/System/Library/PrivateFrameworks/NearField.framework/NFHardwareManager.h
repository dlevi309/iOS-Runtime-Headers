/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NFHardwareManagerCallbacks.h>

@class NSXPCConnection, NSMutableSet, NSArray, NSDictionary, NFHardwareControllerInfo, NSUUID, NSString;

@interface NFHardwareManager : NSObject <NSXPCConnectionDelegate, NFHardwareManagerCallbacks> {

	NSXPCConnection* _connection;
	NSMutableSet* _sessions;
	BOOL _hasEventListener;
	NSMutableSet* _eventListeners;
	NSArray* _secureElements;
	NSDictionary* _secureElementsById;
	unsigned _hwSupport;
	BOOL _didPreWarm;

}

@property (readonly) NFHardwareControllerInfo * controllerInfo; 
@property (readonly) NSUUID * blessedUser; 
@property (nonatomic,readonly) BOOL isBackgroundTagReadingAvailable; 
@property (assign,nonatomic) BOOL suspendBackgroundTagReading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHardwareManager;
-(id)init;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)preWarm;
-(BOOL)secureElementBootHistory:(id*)arg1 ;
-(id)startSesHatSession:(/*^block*/id)arg1 ;
-(id)secureElements;
-(id)startNdefTagSession:(/*^block*/id)arg1 ;
-(id)startReaderSession:(/*^block*/id)arg1 ;
-(void)registerEventListener:(id)arg1 ;
-(void)_connectIfNeeded;
-(BOOL)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2 ;
-(void)actOnUserInitiatedSystemShutDown:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(id)startECommercePaymentSession:(/*^block*/id)arg1 ;
-(id)startLoyaltyAndContactlessPaymentSession:(/*^block*/id)arg1 ;
-(id)startPeerPaymentSession:(/*^block*/id)arg1 ;
-(id)startTrustSession:(/*^block*/id)arg1 ;
-(id)startSecureElementManagerSessionWithPriority:(/*^block*/id)arg1 ;
-(id)startSecureElementManagerSession:(/*^block*/id)arg1 ;
-(void)unregisterEventListener:(id)arg1 ;
-(BOOL)isExpressModeSupported;
-(BOOL)isInRestrictedMode;
-(BOOL)setFieldDetectEnabled:(BOOL)arg1 ;
-(id)startFieldDetectSession:(/*^block*/id)arg1 ;
-(void)invalidateConnection;
-(void)setAuthorization:(id)arg1 ;
-(BOOL)expressModesEnabled;
-(void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(BOOL)arg2 ;
-(void)didInvalidateXPCConnection:(id)arg1 ;
-(void)didInterruptXPCConnection:(id)arg1 ;
-(id)updateHWSupport:(BOOL)arg1 ;
-(unsigned)getHwSupport;
-(id)controllerInfoWithError:(id*)arg1 ;
-(id)getDieIDWithError:(id*)arg1 ;
-(id)getHeadlessModeFlags:(unsigned*)arg1 ;
-(id)getPowerCounters:(id*)arg1 ;
-(unsigned)checkUserBlessing:(id)arg1 hasCards:(BOOL*)arg2 ;
-(unsigned)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3 ;
-(id)secureElementWithIdentifier:(id)arg1 ;
-(void)sessionDidEnd:(id)arg1 ;
-(id)startSecureElementManagerSessionWithPriority:(BOOL)arg1 callback:(/*^block*/id)arg2 ;
-(id)_startReaderSessionWithUI:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)configureReaderModeRFForTransitPartner:(BOOL)arg1 transitPartner:(unsigned)arg2 callback:(/*^block*/id)arg3 ;
-(unsigned)queryHardwareSupport:(id*)arg1 ;
-(NFHardwareControllerInfo *)controllerInfo;
-(id)rfSettings;
-(id)getDieID;
-(id)getUniqueFDRKey:(id*)arg1 ;
-(id)pushSignedRF:(id)arg1 ;
-(BOOL)isExpressAppletTypeSupported:(unsigned char)arg1 ;
-(id)configureHeadlessFactoryMode:(BOOL)arg1 ;
-(BOOL)getHeadlessFactoryMode:(id*)arg1 ;
-(id)disableHeadless;
-(id)startSinglePollExpressModeAssertion:(double)arg1 ;
-(id)releaseSinglePollExpressModeAssertion;
-(void)dumpLPMDebugLog;
-(unsigned)checkUserBlessing:(id)arg1 ;
-(unsigned)setBlessedUser:(id)arg1 withAuthorization:(id)arg2 ;
-(NSUUID *)blessedUser;
-(BOOL)hasCard;
-(BOOL)triggerDelayedWake:(unsigned char)arg1 ;
-(id)enableHeadlessTestMode:(unsigned short)arg1 ;
-(id)toggleGPIO:(unsigned short)arg1 ;
-(void)refreshSecureElements;
-(id)hostEmulationLog;
-(id)startContactlessPaymentSession:(/*^block*/id)arg1 ;
-(id)startContactlessSession:(/*^block*/id)arg1 ;
-(id)startContactlessUICCSession:(/*^block*/id)arg1 ;
-(id)startReaderSessionWithActionSheetUI:(/*^block*/id)arg1 ;
-(id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)startHCESession:(/*^block*/id)arg1 ;
-(id)startSecureElementAndHCESession:(/*^block*/id)arg1 ;
-(BOOL)areSessionsAllowed;
-(BOOL)isBackgroundTagReadingAvailable;
-(BOOL)suspendBackgroundTagReading;
-(void)setSuspendBackgroundTagReading:(BOOL)arg1 ;
-(id)setChipscope:(BOOL)arg1 ;
@end

