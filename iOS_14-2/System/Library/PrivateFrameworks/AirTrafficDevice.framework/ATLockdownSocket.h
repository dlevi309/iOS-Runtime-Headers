/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
#import <ATFoundation/ATSocket.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface ATLockdownSocket : ATSocket {

	void* _lockdownInfo;
	lockdown_connectionRef _connection;
	NSObject*<OS_dispatch_source> _recvSource;
	NSObject*<OS_dispatch_queue> _socketRWQueue;
	char _readBuffer[65536];

}

@property (nonatomic,readonly) BOOL isWifi; 
-(BOOL)open;
-(BOOL)isOpen;
-(void)close;
-(BOOL)isWifi;
-(void)writeData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithLockdownInfo:(void*)arg1 ;
-(void)_readLength:(unsigned long long)arg1 ;
-(int)send:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(int)recv:(char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
@end

