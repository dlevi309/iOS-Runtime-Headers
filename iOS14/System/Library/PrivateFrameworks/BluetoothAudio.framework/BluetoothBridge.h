/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothAudio.framework/BluetoothAudio
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <BluetoothAudio/BluetoothAudio-Structs.h>
@class NSObject, SFDeviceDiscovery;

@interface BluetoothBridge : NSObject {

	BOOL _targetUserSession;
	NSObject*<OS_dispatch_semaphore> _connectedSemaphore;
	NSObject*<OS_dispatch_semaphore> _disconnectedSemaphore;
	OpaqueFigEndpointManagerRef _manager;
	SFDeviceDiscovery* _deviceDiscovery;
	NSObject*<OS_dispatch_queue> _queue;
	BTSessionImplRef _session;

}

@property (retain) NSObject*<OS_dispatch_semaphore> connectedSemaphore;                 //@synthesize connectedSemaphore=_connectedSemaphore - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> disconnectedSemaphore;              //@synthesize disconnectedSemaphore=_disconnectedSemaphore - In the implementation block
@property (assign,nonatomic) OpaqueFigEndpointManagerRef manager;                       //@synthesize manager=_manager - In the implementation block
@property (retain) SFDeviceDiscovery * deviceDiscovery;                                 //@synthesize deviceDiscovery=_deviceDiscovery - In the implementation block
@property (assign) BOOL targetUserSession;                                              //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign) BTSessionImplRef session;                                            //@synthesize session=_session - In the implementation block
+(id)sharedBluetoothBridge;
-(BOOL)isPaired:(BTDeviceImplRef)arg1 ;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(id)init;
-(void)deviceConnected:(BTDeviceImplRef)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)connectedSemaphore;
-(void)setManager:(OpaqueFigEndpointManagerRef)arg1 ;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
-(BOOL)isAppleAudioDevice:(BTDeviceImplRef)arg1 ;
-(BTSessionImplRef)session;
-(BOOL)isConnected:(BTDeviceImplRef)arg1 ;
-(CFDictionaryRef)createDescriptionWithDevice:(BTDeviceImplRef)arg1 ;
-(void)deviceDisconnected:(BTDeviceImplRef)arg1 ;
-(void)removeListeners;
-(void)setDisconnectedSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setSession:(BTSessionImplRef)arg1 ;
-(unsigned char)supportedFormats:(BTDeviceImplRef)arg1 ;
-(id)nameFromDevice:(BTDeviceImplRef)arg1 ;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)startLEScanning:(BOOL)arg1 ;
-(BTDeviceImplRef)deviceFromAddress:(id)arg1 ;
-(void)setConnectedSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(OpaqueFigEndpointManagerRef)manager;
-(void)addListeners;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isAudioDevice:(BTDeviceImplRef)arg1 ;
-(id)addressFromDevice:(BTDeviceImplRef)arg1 ;
-(CFDictionaryRef)createDescriptionWithAddress:(id)arg1 name:(id)arg2 supportedFormats:(unsigned char)arg3 deviceClassMinor:(unsigned)arg4 vendorID:(unsigned short)arg5 productID:(unsigned short)arg6 connected:(BOOL)arg7 shareable:(BOOL)arg8 ;
-(BTDeviceImplRef)deviceFromAddressString:(id)arg1 ;
-(void)descriptionAddNearby:(CFDictionaryRef)arg1 nearby:(BOOL)arg2 batterySingle:(double)arg3 batteryLeft:(double)arg4 batteryRight:(double)arg5 batteryCase:(double)arg6 ;
-(void)stopLEScanning;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connectToAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)disconnectedSemaphore;
-(void)disconnectFromAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

