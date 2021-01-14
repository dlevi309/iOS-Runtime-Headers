/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBPeer.h>

@class NSString, NSArray, NSNumber, NSHashTable;

@interface CBClassicPeer : CBPeer {

	BOOL _isDevFused;
	unsigned char _colorID;
	BOOL _isConnectedOverUSB;
	unsigned char _batteryPercentSingle;
	unsigned char _batteryPercentLeft;
	unsigned char _batteryPercentRight;
	unsigned char _batteryPercentCase;
	unsigned char _batteryPercentCombined;
	unsigned char _listeningMode;
	BOOL _LRDetectionEnabled;
	BOOL _EQConfigEnabled;
	unsigned char _EQConfigTreble;
	unsigned char _EQConfigMid;
	unsigned char _EQConfigBass;
	unsigned char _singleClickMode;
	unsigned char _doubleClickMode;
	unsigned char _clickHoldModeLeft;
	unsigned char _clickHoldModeRight;
	unsigned char _oneBudANCMode;
	unsigned char _switchControlMode;
	unsigned char _doubleTapCapability;
	unsigned char _micMode;
	BOOL _inEarDetectionEnabled;
	BOOL _smartRoutingEnabled;
	BOOL _remoteTimeSyncEnabled;
	unsigned char _primaryInEarStatus;
	unsigned char _secondaryInEarStatus;
	BOOL _isIncoming;
	unsigned char _modeSupported;
	BOOL _traceLogging;
	unsigned short _productID;
	unsigned short _vendorID;
	unsigned short _vendorIDSource;
	unsigned short _version;
	unsigned short _syncSettings;
	unsigned short _doubleTapAction;
	unsigned short _doubleTapActionLeft;
	unsigned short _doubleTapActionRight;
	unsigned short _connectionHandle;
	int _deviceType;
	unsigned _listeningModeConfigs;
	unsigned _doubleClickInterval;
	unsigned _clickHoldInterval;
	unsigned _appleFeatureBitMask;
	long long _state;
	NSString* _name;
	/*^block*/id _connectL2CAPCallback;
	/*^block*/id _disconnectL2CAPCallback;
	/*^block*/id _connectRFCOMMCallback;
	/*^block*/id _disconnectRFCOMMCallback;
	NSString* _appleModelIdentifier;
	NSArray* _syncGroups;
	unsigned long long _timeSyncID;
	NSArray* _services;
	NSNumber* _RSSI;
	NSHashTable* _L2CAPChannels;
	NSHashTable* _RFCOMMChannels;
	long long _internalState;
	NSString* _addressString;

}

@property (assign,nonatomic) int deviceType;                                    //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned short productID;                          //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) unsigned short vendorID;                           //@synthesize vendorID=_vendorID - In the implementation block
@property (assign,nonatomic) unsigned short vendorIDSource;                     //@synthesize vendorIDSource=_vendorIDSource - In the implementation block
@property (assign,nonatomic) unsigned short version;                            //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL isDevFused;                                   //@synthesize isDevFused=_isDevFused - In the implementation block
@property (assign,nonatomic) unsigned char colorID;                             //@synthesize colorID=_colorID - In the implementation block
@property (nonatomic,copy) NSString * appleModelIdentifier;                     //@synthesize appleModelIdentifier=_appleModelIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isConnectedOverUSB;                           //@synthesize isConnectedOverUSB=_isConnectedOverUSB - In the implementation block
@property (nonatomic,retain) NSArray * syncGroups;                              //@synthesize syncGroups=_syncGroups - In the implementation block
@property (assign,nonatomic) unsigned short syncSettings;                       //@synthesize syncSettings=_syncSettings - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentSingle;                //@synthesize batteryPercentSingle=_batteryPercentSingle - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentLeft;                  //@synthesize batteryPercentLeft=_batteryPercentLeft - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentRight;                 //@synthesize batteryPercentRight=_batteryPercentRight - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentCase;                  //@synthesize batteryPercentCase=_batteryPercentCase - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentCombined;              //@synthesize batteryPercentCombined=_batteryPercentCombined - In the implementation block
@property (assign,nonatomic) unsigned char listeningMode;                       //@synthesize listeningMode=_listeningMode - In the implementation block
@property (assign,nonatomic) unsigned listeningModeConfigs;                     //@synthesize listeningModeConfigs=_listeningModeConfigs - In the implementation block
@property (assign,nonatomic) BOOL LRDetectionEnabled;                           //@synthesize LRDetectionEnabled=_LRDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL EQConfigEnabled;                              //@synthesize EQConfigEnabled=_EQConfigEnabled - In the implementation block
@property (assign,nonatomic) unsigned char EQConfigTreble;                      //@synthesize EQConfigTreble=_EQConfigTreble - In the implementation block
@property (assign,nonatomic) unsigned char EQConfigMid;                         //@synthesize EQConfigMid=_EQConfigMid - In the implementation block
@property (assign,nonatomic) unsigned char EQConfigBass;                        //@synthesize EQConfigBass=_EQConfigBass - In the implementation block
@property (assign,nonatomic) unsigned char singleClickMode;                     //@synthesize singleClickMode=_singleClickMode - In the implementation block
@property (assign,nonatomic) unsigned char doubleClickMode;                     //@synthesize doubleClickMode=_doubleClickMode - In the implementation block
@property (assign,nonatomic) unsigned char clickHoldModeLeft;                   //@synthesize clickHoldModeLeft=_clickHoldModeLeft - In the implementation block
@property (assign,nonatomic) unsigned char clickHoldModeRight;                  //@synthesize clickHoldModeRight=_clickHoldModeRight - In the implementation block
@property (assign,nonatomic) unsigned doubleClickInterval;                      //@synthesize doubleClickInterval=_doubleClickInterval - In the implementation block
@property (assign,nonatomic) unsigned clickHoldInterval;                        //@synthesize clickHoldInterval=_clickHoldInterval - In the implementation block
@property (assign,nonatomic) unsigned char oneBudANCMode;                       //@synthesize oneBudANCMode=_oneBudANCMode - In the implementation block
@property (assign,nonatomic) unsigned char switchControlMode;                   //@synthesize switchControlMode=_switchControlMode - In the implementation block
@property (assign,nonatomic) unsigned short doubleTapAction;                    //@synthesize doubleTapAction=_doubleTapAction - In the implementation block
@property (assign,nonatomic) unsigned short doubleTapActionLeft;                //@synthesize doubleTapActionLeft=_doubleTapActionLeft - In the implementation block
@property (assign,nonatomic) unsigned short doubleTapActionRight;               //@synthesize doubleTapActionRight=_doubleTapActionRight - In the implementation block
@property (assign,nonatomic) unsigned char doubleTapCapability;                 //@synthesize doubleTapCapability=_doubleTapCapability - In the implementation block
@property (assign,nonatomic) unsigned char micMode;                             //@synthesize micMode=_micMode - In the implementation block
@property (assign,nonatomic) BOOL inEarDetectionEnabled;                        //@synthesize inEarDetectionEnabled=_inEarDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL smartRoutingEnabled;                          //@synthesize smartRoutingEnabled=_smartRoutingEnabled - In the implementation block
@property (assign,nonatomic) BOOL remoteTimeSyncEnabled;                        //@synthesize remoteTimeSyncEnabled=_remoteTimeSyncEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long timeSyncID;                     //@synthesize timeSyncID=_timeSyncID - In the implementation block
@property (assign,nonatomic) unsigned char primaryInEarStatus;                  //@synthesize primaryInEarStatus=_primaryInEarStatus - In the implementation block
@property (assign,nonatomic) unsigned char secondaryInEarStatus;                //@synthesize secondaryInEarStatus=_secondaryInEarStatus - In the implementation block
@property (nonatomic,retain) NSArray * services;                                //@synthesize services=_services - In the implementation block
@property (assign,nonatomic) unsigned appleFeatureBitMask;                      //@synthesize appleFeatureBitMask=_appleFeatureBitMask - In the implementation block
@property (nonatomic,retain) NSNumber * RSSI;                                   //@synthesize RSSI=_RSSI - In the implementation block
@property (nonatomic,retain) NSHashTable * L2CAPChannels;                       //@synthesize L2CAPChannels=_L2CAPChannels - In the implementation block
@property (nonatomic,retain) NSHashTable * RFCOMMChannels;                      //@synthesize RFCOMMChannels=_RFCOMMChannels - In the implementation block
@property (assign,nonatomic) BOOL isIncoming;                                   //@synthesize isIncoming=_isIncoming - In the implementation block
@property (assign,nonatomic) long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long internalState;                           //@synthesize internalState=_internalState - In the implementation block
@property (assign,nonatomic) unsigned short connectionHandle;                   //@synthesize connectionHandle=_connectionHandle - In the implementation block
@property (nonatomic,copy) NSString * addressString;                            //@synthesize addressString=_addressString - In the implementation block
@property (assign,nonatomic) unsigned char modeSupported;                       //@synthesize modeSupported=_modeSupported - In the implementation block
@property (assign,nonatomic) BOOL traceLogging;                                 //@synthesize traceLogging=_traceLogging - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (copy) id connectL2CAPCallback;                                       //@synthesize connectL2CAPCallback=_connectL2CAPCallback - In the implementation block
@property (copy) id disconnectL2CAPCallback;                                    //@synthesize disconnectL2CAPCallback=_disconnectL2CAPCallback - In the implementation block
@property (copy) id connectRFCOMMCallback;                                      //@synthesize connectRFCOMMCallback=_connectRFCOMMCallback - In the implementation block
@property (copy) id disconnectRFCOMMCallback;                                   //@synthesize disconnectRFCOMMCallback=_disconnectRFCOMMCallback - In the implementation block
-(BOOL)isiPad;
-(void)handleL2CAPChannelClosed:(id)arg1 ;
-(BOOL)isiPhone;
-(void)handleL2CAPChannelOpened:(id)arg1 ;
-(BOOL)isMac;
-(id)initWithInfo:(id)arg1 manager:(id)arg2 ;
-(NSArray *)services;
-(void)setL2CAPChannels:(NSHashTable *)arg1 ;
-(void)setBatteryPercentLeft:(unsigned char)arg1 ;
-(int)deviceType;
-(void)setRFCOMMChannels:(NSHashTable *)arg1 ;
-(unsigned short)psmForService:(id)arg1 ;
-(NSString *)appleModelIdentifier;
-(id)disconnectL2CAPCallback;
-(void)setInternalState:(long long)arg1 ;
-(NSArray *)syncGroups;
-(unsigned char)colorID;
-(id)disconnectRFCOMMCallback;
-(BOOL)isAppleDevice;
-(BOOL)smartRoutingEnabled;
-(unsigned char)switchControlMode;
-(void)setServices:(NSArray *)arg1 ;
-(void)setDoubleTapCapability:(unsigned char)arg1 ;
-(void)setConnectL2CAPCallback:(id)arg1 ;
-(void)setLRDetectionEnabled:(BOOL)arg1 ;
-(void)setSecondaryInEarStatus:(unsigned char)arg1 ;
-(unsigned char)clickHoldModeRight;
-(void)handleSuccessfulConnection:(id)arg1 ;
-(void)setDeviceType:(int)arg1 ;
-(unsigned short)doubleTapActionRight;
-(BOOL)isGameController;
-(unsigned char)secondaryInEarStatus;
-(NSHashTable *)RFCOMMChannels;
-(unsigned char)primaryInEarStatus;
-(id)importServices:(id)arg1 ;
-(void)setOrphan;
-(void)closeL2CAPChannel:(id)arg1 ;
-(void)setClickHoldModeRight:(unsigned char)arg1 ;
-(void)setDisconnectL2CAPCallback:(id)arg1 ;
-(void)setDoubleTapActionRight:(unsigned short)arg1 ;
-(unsigned short)syncSettings;
-(void)handleRFCOMMChannelClosed:(id)arg1 ;
-(void)setPrimaryInEarStatus:(unsigned char)arg1 ;
-(unsigned char)EQConfigBass;
-(void)setDisconnectRFCOMMCallback:(id)arg1 ;
-(void)setEQConfigEnabled:(BOOL)arg1 ;
-(unsigned char)batteryPercentRight;
-(void)setListeningMode:(unsigned char)arg1 ;
-(void)setAppleFeatureBitMask:(unsigned)arg1 ;
-(void)setIsConnectedOverUSB:(BOOL)arg1 ;
-(void)setTraceLogging:(BOOL)arg1 ;
-(void)setAppleModelIdentifier:(NSString *)arg1 ;
-(BOOL)isMultiBatteryDevice;
-(id)service:(id)arg1 ;
-(unsigned char)listeningMode;
-(void)setColorID:(unsigned char)arg1 ;
-(NSNumber *)RSSI;
-(long long)internalState;
-(void)handlePeerUpdated:(id)arg1 ;
-(void)setEQConfigBass:(unsigned char)arg1 ;
-(void)setClickHoldInterval:(unsigned)arg1 ;
-(void)setSyncSettings:(unsigned short)arg1 ;
-(void)setSwitchControlMode:(unsigned char)arg1 ;
-(void)setSyncGroups:(NSArray *)arg1 ;
-(void)setClickHoldModeLeft:(unsigned char)arg1 ;
-(void)setDoubleClickInterval:(unsigned)arg1 ;
-(void)setIsIncoming:(BOOL)arg1 ;
-(void)setListeningModeConfigs:(unsigned)arg1 ;
-(unsigned char)EQConfigMid;
-(NSString *)name;
-(void)closeRFCOMMChannel:(id)arg1 ;
-(void)handleDisconnection;
-(unsigned)appleFeatureBitMask;
-(unsigned char)EQConfigTreble;
-(BOOL)isRFCOMMServiceSupported:(id)arg1 ;
-(id)serviceForPSM:(unsigned short)arg1 ;
-(unsigned short)doubleTapAction;
-(id)description;
-(void)setIsDevFused:(BOOL)arg1 ;
-(id)serviceForRFCOMMChannelID:(unsigned char)arg1 ;
-(BOOL)isReportingBatteryPercent;
-(void)setAddressString:(NSString *)arg1 ;
-(void)setBatteryPercentCase:(unsigned char)arg1 ;
-(void)setConnectRFCOMMCallback:(id)arg1 ;
-(unsigned short)productID;
-(void)setDoubleTapAction:(unsigned short)arg1 ;
-(void)setDoubleClickMode:(unsigned char)arg1 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(void)setEQConfigTreble:(unsigned char)arg1 ;
-(unsigned)doubleClickInterval;
-(unsigned)clickHoldInterval;
-(unsigned char)micMode;
-(BOOL)LRDetectionEnabled;
-(void)setSingleClickMode:(unsigned char)arg1 ;
-(unsigned short)doubleTapActionLeft;
-(unsigned short)connectionHandle;
-(void)setVendorIDSource:(unsigned short)arg1 ;
-(unsigned char)rfcommChannelIDForService:(id)arg1 ;
-(BOOL)isIncoming;
-(unsigned)getConnectedServices;
-(BOOL)traceLogging;
-(unsigned char)doubleTapCapability;
-(void)setRemoteTimeSyncEnabled:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)inEarDetectionEnabled;
-(unsigned long long)hash;
-(void)setConnectionHandle:(unsigned short)arg1 ;
-(void)setSmartRoutingEnabled:(BOOL)arg1 ;
-(void)handleRFCOMMChannelOpened:(id)arg1 ;
-(void)setBatteryPercentSingle:(unsigned char)arg1 ;
-(id)connectRFCOMMCallback;
-(BOOL)remoteTimeSyncEnabled;
-(long long)state;
-(BOOL)isAppleFeatureSupported:(unsigned)arg1 ;
-(void)setProductID:(unsigned short)arg1 ;
-(unsigned char)batteryPercentSingle;
-(void)setBatteryPercentRight:(unsigned char)arg1 ;
-(unsigned char)batteryPercentLeft;
-(void)setEQConfigMid:(unsigned char)arg1 ;
-(unsigned char)modeSupported;
-(unsigned long long)timeSyncID;
-(id)connectL2CAPCallback;
-(void)setName:(NSString *)arg1 ;
-(NSHashTable *)L2CAPChannels;
-(void)setVersion:(unsigned short)arg1 ;
-(NSString *)addressString;
-(BOOL)EQConfigEnabled;
-(BOOL)isDevFused;
-(void)setTimeSyncID:(unsigned long long)arg1 ;
-(void)handleFailedConnection;
-(unsigned char)doubleClickMode;
-(void)setOneBudANCMode:(unsigned char)arg1 ;
-(id)channelWithPSM:(unsigned short)arg1 ;
-(BOOL)isSonyGameController;
-(BOOL)isXboxGameController;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(unsigned)listeningModeConfigs;
-(unsigned short)vendorIDSource;
-(void)openRFCOMMChannel:(id)arg1 options:(id)arg2 ;
-(unsigned char)batteryPercentCase;
-(void)openL2CAPChannel:(id)arg1 options:(id)arg2 ;
-(unsigned char)clickHoldModeLeft;
-(BOOL)isConnectedOverUSB;
-(void)setVendorID:(unsigned short)arg1 ;
-(unsigned short)version;
-(unsigned char)oneBudANCMode;
-(unsigned short)vendorID;
-(BOOL)isServiceSupported:(id)arg1 ;
-(void)openRFCOMMChannel:(id)arg1 ;
-(void)setModeSupported:(unsigned char)arg1 ;
-(void)setBatteryPercentCombined:(unsigned char)arg1 ;
-(void)handleGetPeerState:(id)arg1 ;
-(unsigned char)batteryPercentCombined;
-(id)channelWithID:(unsigned char)arg1 ;
-(void)dealloc;
-(void)setInEarDetectionEnabled:(BOOL)arg1 ;
-(void)sendMsg:(int)arg1 requiresConnected:(BOOL)arg2 args:(id)arg3 ;
-(void)setMicMode:(unsigned char)arg1 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(void)openL2CAPChannel:(id)arg1 ;
-(void)setDoubleTapActionLeft:(unsigned short)arg1 ;
-(unsigned char)singleClickMode;
@end

