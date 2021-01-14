/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)open;
-(IDSDevice *)device;
-(long long)priority;
-(ATIDSService *)service;
-(void)dealloc;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDevice:(id)arg1 service:(id)arg2 priority:(long long)arg3 ;
-(void)addTransportUpgradeException;
-(void)removeTransportUpgradeException;
-(void)closeDescriptor;
@end

