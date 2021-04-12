/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/


@class AccessoryEAInterface;

@interface EAUSBBuffer : NSObject {

	char* _bufPtr;
	unsigned long long _bufferLength;
	int _usbError;
	AccessoryEAInterface* _eaInterface;
	char* _readPtr;
	char* _writePtr;
	unsigned long long _writeAttempts;

}

@property (assign,nonatomic,__weak) AccessoryEAInterface * eaInterface;              //@synthesize eaInterface=_eaInterface - In the implementation block
@property (assign) int usbError;                                                     //@synthesize usbError=_usbError - In the implementation block
@property (nonatomic,readonly) char* readPtr;                                        //@synthesize readPtr=_readPtr - In the implementation block
@property (nonatomic,readonly) char* writePtr;                                       //@synthesize writePtr=_writePtr - In the implementation block
@property (nonatomic,readonly) unsigned long long writeAttempts;                     //@synthesize writeAttempts=_writeAttempts - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLength; 
@property (nonatomic,readonly) unsigned long long writeSpaceRemaining; 
-(void)dealloc;
-(void)reset;
-(char*)writePtr;
-(unsigned long long)dataLength;
-(id)initWithSession:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(unsigned long long)writeSpaceRemaining;
-(void)moveReadPtr:(unsigned long long)arg1 ;
-(void)moveWritePtr:(unsigned long long)arg1 ;
-(void)attemptWrite;
-(AccessoryEAInterface *)eaInterface;
-(void)setEaInterface:(AccessoryEAInterface *)arg1 ;
-(int)usbError;
-(void)setUsbError:(int)arg1 ;
-(char*)readPtr;
-(unsigned long long)writeAttempts;
@end

