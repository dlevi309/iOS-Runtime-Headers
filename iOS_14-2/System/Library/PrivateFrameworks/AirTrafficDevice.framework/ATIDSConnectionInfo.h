/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@class IDSDevice, ATIDSSocket;

@interface ATIDSConnectionInfo : NSObject {

	unsigned _failureCount;
	IDSDevice* _device;
	long long _priority;
	double _wakeupTimestamp;
	unsigned long long _connectionState;
	ATIDSSocket* _socket;

}

@property (nonatomic,retain) IDSDevice * device;                              //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double wakeupTimestamp;                          //@synthesize wakeupTimestamp=_wakeupTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long connectionState;              //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) unsigned failureCount;                           //@synthesize failureCount=_failureCount - In the implementation block
@property (nonatomic,retain) ATIDSSocket * socket;                            //@synthesize socket=_socket - In the implementation block
-(unsigned long long)connectionState;
-(id)init;
-(ATIDSSocket *)socket;
-(IDSDevice *)device;
-(unsigned)failureCount;
-(void)setFailureCount:(unsigned)arg1 ;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(void)setDevice:(IDSDevice *)arg1 ;
-(void)setSocket:(ATIDSSocket *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)dealloc;
-(double)wakeupTimestamp;
-(void)setWakeupTimestamp:(double)arg1 ;
@end

