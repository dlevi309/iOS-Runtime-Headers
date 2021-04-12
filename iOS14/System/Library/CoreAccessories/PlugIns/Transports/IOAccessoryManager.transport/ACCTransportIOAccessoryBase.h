/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol OS_dispatch_queue;
#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@class NSObject;

@interface ACCTransportIOAccessoryBase : NSObject {

	unsigned _ioConnect;
	IONotificationPortRef _ioNotificationPort;
	unsigned _ioNotificationObject;
	NSObject*<OS_dispatch_queue> _notificationPortQueue;
	unsigned _ioService;
	int _ioServiceClassType;
	int _primaryPortNumber;
	unsigned _upstreamManagerService;

}

@property (assign,nonatomic) unsigned upstreamManagerService;              //@synthesize upstreamManagerService=_upstreamManagerService - In the implementation block
@property (assign,nonatomic) int primaryPortNumber;                        //@synthesize primaryPortNumber=_primaryPortNumber - In the implementation block
@property (nonatomic,readonly) unsigned ioService;                         //@synthesize ioService=_ioService - In the implementation block
@property (nonatomic,readonly) int ioServiceClassType;                     //@synthesize ioServiceClassType=_ioServiceClassType - In the implementation block
-(BOOL)transmitData:(id)arg1 ;
-(void)transportClassTerminated;
-(void)dealloc;
-(id)initWithIOAccessoryClass:(int)arg1 ioService:(unsigned)arg2 ;
-(unsigned)ioService;
-(unsigned)upstreamManagerService;
-(int)ioServiceClassType;
-(int)primaryPortNumber;
-(void)setPrimaryPortNumber:(int)arg1 ;
-(void)setUpstreamManagerService:(unsigned)arg1 ;
@end

