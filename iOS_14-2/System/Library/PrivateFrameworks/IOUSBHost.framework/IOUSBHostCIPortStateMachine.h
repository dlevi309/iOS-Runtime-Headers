/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/


#import <IOUSBHost/IOUSBHost-Structs.h>
@class IOUSBHostControllerInterface;

@interface IOUSBHostCIPortStateMachine : NSObject {

	BOOL _powered;
	BOOL _connected;
	BOOL _overcurrent;
	int _portState;
	unsigned _portStatus;
	int _linkState;
	int _speed;
	unsigned long long _portNumber;
	IOUSBHostControllerInterface* _controllerInterface;

}

@property (assign,nonatomic) unsigned long long portNumber;                                   //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) int portState;                                                   //@synthesize portState=_portState - In the implementation block
@property (assign,nonatomic) unsigned portStatus;                                             //@synthesize portStatus=_portStatus - In the implementation block
@property (nonatomic,retain) IOUSBHostControllerInterface * controllerInterface;              //@synthesize controllerInterface=_controllerInterface - In the implementation block
@property (assign,nonatomic) BOOL powered;                                                    //@synthesize powered=_powered - In the implementation block
@property (assign,nonatomic) BOOL connected;                                                  //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL overcurrent;                                                //@synthesize overcurrent=_overcurrent - In the implementation block
@property (nonatomic,readonly) int linkState;                                                 //@synthesize linkState=_linkState - In the implementation block
@property (nonatomic,readonly) int speed;                                                     //@synthesize speed=_speed - In the implementation block
-(BOOL)connected;
-(void)setConnected:(BOOL)arg1 ;
-(void)setPowered:(BOOL)arg1 ;
-(int)speed;
-(unsigned long long)portNumber;
-(void)setPortNumber:(unsigned long long)arg1 ;
-(BOOL)powered;
-(void)setPortState:(int)arg1 ;
-(void)setControllerInterface:(IOUSBHostControllerInterface *)arg1 ;
-(int)portState;
-(unsigned)portStatus;
-(void)setPortStatus:(unsigned)arg1 ;
-(BOOL)processCommand:(const IOUSBHostCIMessage*)arg1 readonly:(BOOL)arg2 commandResult:(int)arg3 error:(id*)arg4 ;
-(IOUSBHostControllerInterface *)controllerInterface;
-(BOOL)updateLinkState:(int)arg1 speed:(int)arg2 inhibitLinkStateChange:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)overcurrent;
-(id)initWithInterface:(id)arg1 portNumber:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)inspectCommand:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(BOOL)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 error:(id*)arg3 ;
-(void)setOvercurrent:(BOOL)arg1 ;
-(int)linkState;
@end

