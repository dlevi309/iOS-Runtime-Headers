/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
*/

#import <APTransport/APTransport-Structs.h>
#import <APTransport/APBluetoothClientDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class APBluetoothClient, NSObject, NSMutableDictionary, NSString;

@interface APBrowserBTLEManager : NSObject <APBluetoothClientDelegate> {

	unsigned short _btleMode;
	BOOL _p2pSoloSupported;
	BOOL _p2pSoloSupportedIsSet;
	BOOL _trackingEnabled;
	BOOL _isAdvertising;
	BOOL _isScanning;
	BOOL _isEnabled;
	BOOL _preferencesUpdated;
	BOOL _isInvalidated;
	BOOL _isSoloBeaconDisabled;
	APBluetoothClient* _btleClient;
	void* _eventHandlerContext;
	/*function pointer*/void* _eventHandlerFunc;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _queue;
	OpaqueAPBrowserBTLEManager* _managerRef;
	NSMutableDictionary* _btleDevices;
	NSObject*<OS_dispatch_source> _staleDevicesTimer;

}

@property (nonatomic,retain) APBluetoothClient * btleClient;                               //@synthesize btleClient=_btleClient - In the implementation block
@property (assign,nonatomic) void* eventHandlerContext;                                    //@synthesize eventHandlerContext=_eventHandlerContext - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* eventHandlerFunc;                   //@synthesize eventHandlerFunc=_eventHandlerFunc - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventQueue;                    //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isAdvertising;                                           //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                                              //@synthesize isScanning=_isScanning - In the implementation block
@property (assign,nonatomic) BOOL isSoloBeaconDisabled;                                    //@synthesize isSoloBeaconDisabled=_isSoloBeaconDisabled - In the implementation block
@property (assign,nonatomic) BOOL isInvalidated;                                           //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (assign,nonatomic) BOOL preferencesUpdated;                                      //@synthesize preferencesUpdated=_preferencesUpdated - In the implementation block
@property (assign,nonatomic) OpaqueAPBrowserBTLEManager* managerRef;                       //@synthesize managerRef=_managerRef - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * btleDevices;                            //@synthesize btleDevices=_btleDevices - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> staleDevicesTimer;              //@synthesize staleDevicesTimer=_staleDevicesTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)createEventInfoDictionary:(id*)arg1 withDeviceID:(id)arg2 IPAddress:(id)arg3 port:(id)arg4 supportsSolo:(id)arg5 rssi:(id)arg6 ;
-(int)handleFoundDevice:(id)arg1 withAdvertisementData:(SCD_Struct_AP0*)arg2 rssi:(int)arg3 ;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)isInvalidated;
-(id)stringForBTLEmode:(unsigned short)arg1 ;
-(id)init;
-(BOOL)isScanning;
-(void)airPlaySoloStartedAdvertising:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)setStaleDevicesTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)ensureAdvertisingStarted;
-(int)ensureStaleDeviceTimerStarted;
-(void)airPlaySoloDidUpdateState:(id)arg1 ;
-(void)setPreferencesUpdated:(BOOL)arg1 ;
-(int)stop;
-(unsigned long long)nearbySoloDevicesCount;
-(int)setBTLEMode:(unsigned short)arg1 ;
-(BOOL)preferencesUpdated;
-(void)setEventHandlerContext:(void*)arg1 ;
-(void)airPlaySoloStoppedScanning:(id)arg1 ;
-(int)ensureScanningStarted;
-(void)setIsScanning:(BOOL)arg1 ;
-(int)setSupportsSolo:(BOOL)arg1 ;
-(BOOL)shouldAdvertiseSourcePresence;
-(int)update;
-(void)setIsInvalidated:(BOOL)arg1 ;
-(int)ensurePreferencesUpdatedWithShouldForce:(BOOL)arg1 ;
-(void)setBtleDevices:(NSMutableDictionary *)arg1 ;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(void)setEventHandlerFunc:(/*function pointer*/void*)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)setIsSoloBeaconDisabled:(BOOL)arg1 ;
-(void*)eventHandlerContext;
-(BOOL)isSoloBeaconDisabled;
-(int)getTrackingEnabled:(BOOL*)arg1 ;
-(int)ensureAdvertisingStopped;
-(int)dispatchEvent:(unsigned)arg1 withEventInfo:(id)arg2 ;
-(int)dispatchLostEventForAllDevices;
-(void)airPlaySoloStartedScanning:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)setManagerRef:(OpaqueAPBrowserBTLEManager*)arg1 ;
-(NSMutableDictionary *)btleDevices;
-(int)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)startMode:(unsigned short)arg1 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg1 ;
-(OpaqueAPBrowserBTLEManager*)managerRef;
-(int)ensureBTLEClientInitialized;
-(int)getBTLEMode:(unsigned short*)arg1 ;
-(BOOL)isEnabled;
-(int)setTrackingEnabled:(BOOL)arg1 ;
-(APBluetoothClient *)btleClient;
-(void)setBtleClient:(APBluetoothClient *)arg1 ;
-(int)ensureScanningStopped;
-(int)setEventHandler:(/*function pointer*/void*)arg1 context:(void*)arg2 managerRef:(OpaqueAPBrowserBTLEManager*)arg3 ;
-(NSObject*<OS_dispatch_source>)staleDevicesTimer;
-(int)handleLostDevice:(id)arg1 ;
-(int)copyShowInfo:(id*)arg1 verbose:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isAdvertising;
-(/*function pointer*/void*)eventHandlerFunc;
@end

