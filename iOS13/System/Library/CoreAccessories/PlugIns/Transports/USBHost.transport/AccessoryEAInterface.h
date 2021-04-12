/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/

#import <USBHost/USBHost-Structs.h>
#import <USBHost/iAP2EASession.h>

@class NSMutableArray, NSString, NSThread, NSRunLoop;

@interface AccessoryEAInterface : iAP2EASession {

	NSMutableArray* _writeBufferArray;
	NSMutableArray* _readBufferArray;
	NSMutableArray* _dataForAppArray;
	NSMutableArray* _allReadBuffers;
	NSMutableArray* _allWriteBuffers;
	CFSocketRef _listenSockRef;
	CFRunLoopSourceRef _listenSockRls;
	CFSocketRef _sockRef;
	CFRunLoopSourceRef _sockRls;
	BOOL _sockReadDisabled;
	unsigned long long _deviceID;
	NSString* _protocolName;
	IOUSBInterfaceStruct300* _usbInterface;
	CFRunLoopSourceRef _usbRls;
	unsigned char _inPipe;
	unsigned char _outPipe;
	unsigned short _maxInSize;
	unsigned short _maxOutSize;
	unsigned _interfaceSpeed;
	NSThread* _runLoopThread;
	NSRunLoop* _runLoop;
	unsigned long long _registryEntryID;
	/*^block*/id _dataInHandler;

}

@property (nonatomic,readonly) unsigned long long registryEntryID;              //@synthesize registryEntryID=_registryEntryID - In the implementation block
@property (nonatomic,copy) id dataInHandler;                                    //@synthesize dataInHandler=_dataInHandler - In the implementation block
+(id)findNativeEAInterfacesForRegistryID:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_run;
-(unsigned long long)registryEntryID;
-(void)shuttingDownSession;
-(id)initWithProtocol:(id)arg1 endpointUUID:(id)arg2 eaSessionUUID:(id)arg3 USBDeviceID:(unsigned long long)arg4 ;
-(id)dataInHandler;
-(void)setDataInHandler:(id)arg1 ;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(BOOL)closeDataPipes;
-(void)_enqueueReadBuffer:(id)arg1 ;
-(void)_enqueueWriteBuffer:(id)arg1 ;
-(void)_registerListenSocket;
-(IOUSBInterfaceStruct300*)_createInterfaceFromUSBID:(unsigned long long)arg1 ;
-(void)_readSessionDataFromApp;
-(void)_writeSessionDataToApp;
-(void)_openPipeToAppOnThread;
-(void)_readSessionDataFromUSB;
-(void)_openPipeFromAppOnThread;
-(void)_cancelThread;
-(id)_dequeueWriteBuffer;
-(void)_writeUSBData:(id)arg1 ;
-(int)_clearPipeStall:(unsigned char)arg1 ;
-(void)_writeComplete:(id)arg1 writeLength:(unsigned long long)arg2 ;
-(id)_dequeueReadBuffer;
-(void)_acceptSocketCB:(CFSocketRef)arg1 acceptedSock:(int)arg2 ;
-(void)_readSocketCB:(CFSocketRef)arg1 ;
-(void)_writeSocketCB:(CFSocketRef)arg1 ;
-(void)_readComplete:(id)arg1 readLength:(unsigned long long)arg2 ;
@end

