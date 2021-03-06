/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/


#import <IOUSBHost/IOUSBHost-Structs.h>
@class IOUSBHostControllerInterface;

@interface IOUSBHostCIEndpointStateMachine : NSObject {

	int _endpointState;
	int _endpointType;
	unsigned long long _deviceAddress;
	unsigned long long _endpointAddress;
	const IOUSBHostCIMessage* _currentTransferMessage;
	IOUSBHostControllerInterface* _controllerInterface;

}

@property (assign,nonatomic) int endpointState;                                               //@synthesize endpointState=_endpointState - In the implementation block
@property (assign,nonatomic) unsigned long long deviceAddress;                                //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (assign,nonatomic) unsigned long long endpointAddress;                              //@synthesize endpointAddress=_endpointAddress - In the implementation block
@property (assign,nonatomic) const IOUSBHostCIMessage* currentTransferMessage;                //@synthesize currentTransferMessage=_currentTransferMessage - In the implementation block
@property (nonatomic,retain) IOUSBHostControllerInterface * controllerInterface;              //@synthesize controllerInterface=_controllerInterface - In the implementation block
@property (assign,nonatomic) int endpointType;                                                //@synthesize endpointType=_endpointType - In the implementation block
-(void)setEndpointType:(int)arg1 ;
-(unsigned long long)deviceAddress;
-(void)setDeviceAddress:(unsigned long long)arg1 ;
-(int)endpointState;
-(void)setEndpointState:(int)arg1 ;
-(int)endpointType;
-(void)setControllerInterface:(IOUSBHostControllerInterface *)arg1 ;
-(IOUSBHostControllerInterface *)controllerInterface;
-(BOOL)inspectCommand:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 error:(id*)arg3 ;
-(void)setEndpointAddress:(unsigned long long)arg1 ;
-(unsigned long long)endpointAddress;
-(void)setCurrentTransferMessage:(const IOUSBHostCIMessage*)arg1 ;
-(BOOL)processCommand:(const IOUSBHostCIMessage*)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(const IOUSBHostCIMessage*)currentTransferMessage;
-(id)initWithInterface:(id)arg1 command:(const IOUSBHostCIMessage*)arg2 error:(id*)arg3 ;
-(BOOL)processDoorbell:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)enqueueTransferCompletionForMessage:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 transferLength:(unsigned long long)arg3 error:(id*)arg4 ;
@end

