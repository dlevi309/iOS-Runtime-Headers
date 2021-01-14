/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <libobjc.A.dylib/WPAirPlaySoloDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, WPAirPlaySolo, NSMutableDictionary, NSString;

@interface APAdvertiserBTLEManager : NSObject <WPAirPlaySoloDelegate> {

	SCD_Struct_AP12 _advertisementData;
	unsigned short _btleMode;
	BOOL _isP2PAllowed;
	BOOL _p2pSolo;
	BOOL _p2pSoloQueried;
	NSObject*<OS_dispatch_source> _p2pSoloQueryTimer;
	BOOL _isAdvertising;
	BOOL _isScanning;
	BOOL _isEnabled;
	unsigned char _seed;
	int _touchSetupActiveNotifyToken;
	WPAirPlaySolo* _btleServer;
	void* _eventHandlerContext;
	/*function pointer*/void* _eventHandlerFunc;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	OpaqueAPAdvertiserBTLEManager* _managerRef;
	SCDynamicStoreRef _scStore;
	NSMutableDictionary* _soloDevices;
	NSObject*<OS_dispatch_source> _staleDevicesTimer;

}

@property (nonatomic,retain) WPAirPlaySolo * btleServer;                                   //@synthesize btleServer=_btleServer - In the implementation block
@property (assign,nonatomic) void* eventHandlerContext;                                    //@synthesize eventHandlerContext=_eventHandlerContext - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* eventHandlerFunc;                   //@synthesize eventHandlerFunc=_eventHandlerFunc - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventQueue;                    //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                 //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) BOOL isAdvertising;                                           //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                                              //@synthesize isScanning=_isScanning - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) OpaqueAPAdvertiserBTLEManager* managerRef;                    //@synthesize managerRef=_managerRef - In the implementation block
@property (assign,nonatomic) SCDynamicStoreRef scStore;                                    //@synthesize scStore=_scStore - In the implementation block
@property (assign,nonatomic) unsigned char seed;                                           //@synthesize seed=_seed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * soloDevices;                            //@synthesize soloDevices=_soloDevices - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> staleDevicesTimer;              //@synthesize staleDevicesTimer=_staleDevicesTimer - In the implementation block
@property (assign,nonatomic) int touchSetupActiveNotifyToken;                              //@synthesize touchSetupActiveNotifyToken=_touchSetupActiveNotifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned char)seed;
-(void)stopAdvertising;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setSeed:(unsigned char)arg1 ;
-(id)init;
-(BOOL)isScanning;
-(void)airPlaySoloStartedAdvertising:(id)arg1 ;
-(int)start;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setStaleDevicesTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)updatePreferences;
-(void)airPlaySoloDidUpdateState:(id)arg1 ;
-(int)stop;
-(int)setBTLEMode:(unsigned short)arg1 ;
-(void)setEventHandlerContext:(void*)arg1 ;
-(void)airPlaySoloStoppedScanning:(id)arg1 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(int)update;
-(void)stopScanning;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(void)setEventHandlerFunc:(/*function pointer*/void*)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void*)eventHandlerContext;
-(void)airPlaySoloStartedScanning:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)setManagerRef:(OpaqueAPAdvertiserBTLEManager*)arg1 ;
-(void)invalidate;
-(void)airPlaySoloStoppedAdvertising:(id)arg1 ;
-(OpaqueAPAdvertiserBTLEManager*)managerRef;
-(int)getBTLEMode:(unsigned short*)arg1 ;
-(BOOL)isEnabled;
-(SCDynamicStoreRef)scStore;
-(void)startScanning;
-(void)dispatchEvent:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_source>)staleDevicesTimer;
-(void)startAdvertising;
-(void)dealloc;
-(BOOL)isAdvertising;
-(/*function pointer*/void*)eventHandlerFunc;
-(int)startP2PSoloQueryTimer;
-(void)handleP2PSoloQueryTimerFired;
-(void)handleP2PSoloQueryTimerCancelled;
-(int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)arg1 ;
-(int)supportsSolo:(BOOL*)arg1 ;
-(id)stringForBTLEMode:(unsigned short)arg1 ;
-(int)setIsP2PAllowed:(BOOL)arg1 ;
-(int)setProperty:(id)arg1 withValue:(id)arg2 ;
-(int)startListeningForNetworkChanges;
-(int)stopListeningForNetworkChanges;
-(int)startStaleDeviceTimer;
-(void)updateAdvertisementData;
-(int)showDebugWithDataBuffer:(SCD_Struct_AP14*)arg1 verbose:(BOOL)arg2 ;
-(WPAirPlaySolo *)btleServer;
-(void)setBtleServer:(WPAirPlaySolo *)arg1 ;
-(void)setScStore:(SCDynamicStoreRef)arg1 ;
-(NSMutableDictionary *)soloDevices;
-(void)setSoloDevices:(NSMutableDictionary *)arg1 ;
-(int)touchSetupActiveNotifyToken;
-(void)setTouchSetupActiveNotifyToken:(int)arg1 ;
@end

