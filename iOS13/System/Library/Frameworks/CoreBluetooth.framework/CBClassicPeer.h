/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBPeer.h>

@class NSString, NSArray, NSData, NSNumber, NSHashTable;

@interface CBClassicPeer : CBPeer {

	BOOL _isIncoming;
	BOOL _isAppleDevice;
	unsigned char _batteryPercentSingle;
	unsigned char _batteryPercentLeft;
	unsigned char _batteryPercentRight;
	unsigned char _batteryPercentCase;
	unsigned char _batteryPercentCombined;
	BOOL _inEarDetect;
	unsigned char _micMode;
	unsigned char _buttonMode;
	unsigned char _leftDoubleTap;
	unsigned char _rightDoubleTap;
	unsigned char _listeningMode;
	unsigned char _eqMode;
	unsigned char _lrDetectionMode;
	unsigned char _doubleTapCapability;
	BOOL _traceLogging;
	unsigned char _primaryBud;
	unsigned char _primaryInEar;
	unsigned char _secondaryInEar;
	BOOL _inEar;
	BOOL _isLEHID;
	BOOL _isDevFused;
	unsigned char _modeSupported;
	unsigned short _connectionHandle;
	unsigned short _productID;
	unsigned short _vendorID;
	unsigned short _vendorIDSource;
	unsigned short _syncSettings;
	int _deviceType;
	long long _state;
	NSString* _name;
	long long _systemState;
	NSArray* _syncGroups;
	NSArray* _services;
	NSString* _addressString;
	NSData* _addressData;
	unsigned long long _appleFeatureBitMask;
	NSNumber* _RSSI;
	NSHashTable* _l2capChannels;

}

@property (assign,nonatomic) int deviceType;                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL isIncoming;                                     //@synthesize isIncoming=_isIncoming - In the implementation block
@property (assign,nonatomic) long long state;                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long systemState;                               //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,readonly) unsigned short connectionHandle;                   //@synthesize connectionHandle=_connectionHandle - In the implementation block
@property (assign,nonatomic) BOOL isAppleDevice;                                  //@synthesize isAppleDevice=_isAppleDevice - In the implementation block
@property (assign,nonatomic) unsigned short productID;                            //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) unsigned short vendorID;                             //@synthesize vendorID=_vendorID - In the implementation block
@property (assign,nonatomic) unsigned short vendorIDSource;                       //@synthesize vendorIDSource=_vendorIDSource - In the implementation block
@property (nonatomic,retain) NSArray * syncGroups;                                //@synthesize syncGroups=_syncGroups - In the implementation block
@property (assign,nonatomic) unsigned short syncSettings;                         //@synthesize syncSettings=_syncSettings - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentSingle;                  //@synthesize batteryPercentSingle=_batteryPercentSingle - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentLeft;                    //@synthesize batteryPercentLeft=_batteryPercentLeft - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentRight;                   //@synthesize batteryPercentRight=_batteryPercentRight - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentCase;                    //@synthesize batteryPercentCase=_batteryPercentCase - In the implementation block
@property (assign,nonatomic) unsigned char batteryPercentCombined;                //@synthesize batteryPercentCombined=_batteryPercentCombined - In the implementation block
@property (assign,nonatomic) BOOL inEarDetect;                                    //@synthesize inEarDetect=_inEarDetect - In the implementation block
@property (assign,nonatomic) unsigned char micMode;                               //@synthesize micMode=_micMode - In the implementation block
@property (assign,nonatomic) unsigned char buttonMode;                            //@synthesize buttonMode=_buttonMode - In the implementation block
@property (assign,nonatomic) unsigned char leftDoubleTap;                         //@synthesize leftDoubleTap=_leftDoubleTap - In the implementation block
@property (assign,nonatomic) unsigned char rightDoubleTap;                        //@synthesize rightDoubleTap=_rightDoubleTap - In the implementation block
@property (assign,nonatomic) unsigned char listeningMode;                         //@synthesize listeningMode=_listeningMode - In the implementation block
@property (assign,nonatomic) unsigned char eqMode;                                //@synthesize eqMode=_eqMode - In the implementation block
@property (assign,nonatomic) unsigned char lrDetectionMode;                       //@synthesize lrDetectionMode=_lrDetectionMode - In the implementation block
@property (assign,nonatomic) unsigned char doubleTapCapability;                   //@synthesize doubleTapCapability=_doubleTapCapability - In the implementation block
@property (assign,nonatomic) BOOL traceLogging;                                   //@synthesize traceLogging=_traceLogging - In the implementation block
@property (assign,nonatomic) unsigned char primaryBud;                            //@synthesize primaryBud=_primaryBud - In the implementation block
@property (assign,nonatomic) unsigned char primaryInEar;                          //@synthesize primaryInEar=_primaryInEar - In the implementation block
@property (assign,nonatomic) unsigned char secondaryInEar;                        //@synthesize secondaryInEar=_secondaryInEar - In the implementation block
@property (assign,nonatomic) BOOL inEar;                                          //@synthesize inEar=_inEar - In the implementation block
@property (assign,nonatomic) BOOL isLEHID;                                        //@synthesize isLEHID=_isLEHID - In the implementation block
@property (assign,nonatomic) BOOL isDevFused;                                     //@synthesize isDevFused=_isDevFused - In the implementation block
@property (nonatomic,retain) NSArray * services;                                  //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) NSString * addressString;                              //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,copy) NSData * addressData;                                  //@synthesize addressData=_addressData - In the implementation block
@property (assign,nonatomic) unsigned long long appleFeatureBitMask;              //@synthesize appleFeatureBitMask=_appleFeatureBitMask - In the implementation block
@property (assign,nonatomic) unsigned char modeSupported;                         //@synthesize modeSupported=_modeSupported - In the implementation block
@property (nonatomic,retain) NSNumber * RSSI;                                     //@synthesize RSSI=_RSSI - In the implementation block
@property (nonatomic,retain) NSHashTable * l2capChannels;                         //@synthesize l2capChannels=_l2capChannels - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(int)deviceType;
-(unsigned short)productID;
-(BOOL)isIncoming;
-(void)setDeviceType:(int)arg1 ;
-(NSArray *)services;
-(NSData *)addressData;
-(NSString *)addressString;
-(void)setAddressString:(NSString *)arg1 ;
-(void)openL2CAPChannel:(id)arg1 ;
-(void)setProductID:(unsigned short)arg1 ;
-(unsigned short)vendorID;
-(void)setVendorID:(unsigned short)arg1 ;
-(void)setIsIncoming:(BOOL)arg1 ;
-(BOOL)isAppleDevice;
-(void)setServices:(NSArray *)arg1 ;
-(unsigned char)micMode;
-(void)setMicMode:(unsigned char)arg1 ;
-(unsigned char)doubleTapCapability;
-(unsigned char)listeningMode;
-(void)setListeningMode:(unsigned char)arg1 ;
-(BOOL)isServiceSupported:(id)arg1 ;
-(unsigned short)syncSettings;
-(void)setSyncSettings:(unsigned short)arg1 ;
-(NSArray *)syncGroups;
-(id)initWithInfo:(id)arg1 manager:(id)arg2 ;
-(id)dataArrayToUUIDArray:(id)arg1 ;
-(void)sendMsg:(int)arg1 requiresConnected:(BOOL)arg2 args:(id)arg3 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(void)handlePeerUpdated:(id)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(long long)systemState;
-(void)setSystemState:(long long)arg1 ;
-(unsigned short)vendorIDSource;
-(void)setVendorIDSource:(unsigned short)arg1 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(id)channelWithPSM:(unsigned short)arg1 ;
-(id)service:(id)arg1 ;
-(unsigned long long)appleFeatureBitMask;
-(unsigned short)psmForService:(id)arg1 ;
-(void)openL2CAPChannel:(id)arg1 options:(id)arg2 ;
-(void)handleSuccessfulConnection:(id)arg1 ;
-(void)handleFailedConnection;
-(void)handleDisconnection;
-(void)handleL2CAPChannelOpened:(id)arg1 ;
-(void)handleL2CAPChannelClosed:(id)arg1 ;
-(void)setOrphan;
-(BOOL)isAppleFeatureSupported:(unsigned long long)arg1 ;
-(void)removeAllL2CAPChannels;
-(unsigned short)connectionHandle;
-(void)setIsAppleDevice:(BOOL)arg1 ;
-(void)setSyncGroups:(NSArray *)arg1 ;
-(unsigned char)batteryPercentSingle;
-(void)setBatteryPercentSingle:(unsigned char)arg1 ;
-(unsigned char)batteryPercentLeft;
-(void)setBatteryPercentLeft:(unsigned char)arg1 ;
-(unsigned char)batteryPercentRight;
-(void)setBatteryPercentRight:(unsigned char)arg1 ;
-(unsigned char)batteryPercentCase;
-(void)setBatteryPercentCase:(unsigned char)arg1 ;
-(unsigned char)batteryPercentCombined;
-(void)setBatteryPercentCombined:(unsigned char)arg1 ;
-(BOOL)inEarDetect;
-(void)setInEarDetect:(BOOL)arg1 ;
-(unsigned char)buttonMode;
-(void)setButtonMode:(unsigned char)arg1 ;
-(unsigned char)leftDoubleTap;
-(void)setLeftDoubleTap:(unsigned char)arg1 ;
-(unsigned char)rightDoubleTap;
-(void)setRightDoubleTap:(unsigned char)arg1 ;
-(unsigned char)eqMode;
-(void)setEqMode:(unsigned char)arg1 ;
-(unsigned char)lrDetectionMode;
-(void)setLrDetectionMode:(unsigned char)arg1 ;
-(void)setDoubleTapCapability:(unsigned char)arg1 ;
-(BOOL)traceLogging;
-(void)setTraceLogging:(BOOL)arg1 ;
-(unsigned char)primaryBud;
-(void)setPrimaryBud:(unsigned char)arg1 ;
-(unsigned char)primaryInEar;
-(void)setPrimaryInEar:(unsigned char)arg1 ;
-(unsigned char)secondaryInEar;
-(void)setSecondaryInEar:(unsigned char)arg1 ;
-(BOOL)inEar;
-(void)setInEar:(BOOL)arg1 ;
-(BOOL)isLEHID;
-(void)setIsLEHID:(BOOL)arg1 ;
-(BOOL)isDevFused;
-(void)setIsDevFused:(BOOL)arg1 ;
-(void)setAddressData:(NSData *)arg1 ;
-(void)setAppleFeatureBitMask:(unsigned long long)arg1 ;
-(unsigned char)modeSupported;
-(void)setModeSupported:(unsigned char)arg1 ;
-(NSNumber *)RSSI;
-(NSHashTable *)l2capChannels;
-(void)setL2capChannels:(NSHashTable *)arg1 ;
@end

