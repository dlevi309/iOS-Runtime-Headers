/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)ioService;
-(id)initWithIOAccessoryClass:(int)arg1 ioService:(unsigned)arg2 ;
-(unsigned)upstreamManagerService;
-(BOOL)transmitData:(id)arg1 ;
-(void)transportClassTerminated;
-(int)ioServiceClassType;
-(int)primaryPortNumber;
-(void)setPrimaryPortNumber:(int)arg1 ;
-(void)setUpstreamManagerService:(unsigned)arg1 ;
@end

