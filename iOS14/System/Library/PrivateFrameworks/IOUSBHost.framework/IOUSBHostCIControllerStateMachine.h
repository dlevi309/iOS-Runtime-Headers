/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/


#import <IOUSBHost/IOUSBHost-Structs.h>
@class IOUSBHostControllerInterface;

@interface IOUSBHostCIControllerStateMachine : NSObject {

	int _controllerState;
	IOUSBHostControllerInterface* _controllerInterface;
	unsigned long long _lastFrameNumber;
	unsigned long long _lastFrameTimestamp;

}

@property (assign,nonatomic) int controllerState;                                             //@synthesize controllerState=_controllerState - In the implementation block
@property (nonatomic,retain) IOUSBHostControllerInterface * controllerInterface;              //@synthesize controllerInterface=_controllerInterface - In the implementation block
@property (assign,nonatomic) unsigned long long lastFrameNumber;                              //@synthesize lastFrameNumber=_lastFrameNumber - In the implementation block
@property (assign,nonatomic) unsigned long long lastFrameTimestamp;                           //@synthesize lastFrameTimestamp=_lastFrameTimestamp - In the implementation block
-(void)setControllerState:(int)arg1 ;
-(unsigned long long)lastFrameTimestamp;
-(void)setLastFrameTimestamp:(unsigned long long)arg1 ;
-(void)setControllerInterface:(IOUSBHostControllerInterface *)arg1 ;
-(IOUSBHostControllerInterface *)controllerInterface;
-(BOOL)inspectCommand:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 error:(id*)arg3 ;
-(BOOL)processCommand:(const IOUSBHostCIMessage*)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(int)controllerState;
-(void)setLastFrameNumber:(unsigned long long)arg1 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 frame:(unsigned long long)arg3 timestamp:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)enqueueUpdatedFrame:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)lastFrameNumber;
-(id)initWithInterface:(id)arg1 error:(id*)arg2 ;
@end
