/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <ATFoundation/ATSocket.h>

@class IDSDeviceConnection, IDSDevice, ATIDSService;

@interface ATIDSSocket : ATSocket {

	IDSDeviceConnection* _deviceConnection;
	unsigned _wifiWriteBufferSize;
	unsigned _btWriteBufferSize;
	IDSDevice* _device;
	ATIDSService* _service;
	long long _priority;

}

@property (nonatomic,readonly) IDSDevice * device;                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) ATIDSService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long priority;                  //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(BOOL)open;
-(long long)priority;
-(IDSDevice *)device;
-(ATIDSService *)service;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDevice:(id)arg1 service:(id)arg2 priority:(long long)arg3 ;
-(void)addTransportUpgradeException;
-(void)removeTransportUpgradeException;
-(void)closeDescriptor;
@end

