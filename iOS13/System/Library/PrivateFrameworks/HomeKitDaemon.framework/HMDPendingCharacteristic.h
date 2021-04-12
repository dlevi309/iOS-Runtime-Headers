/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol OS_dispatch_queue;
@class HMDCharacteristicWriteRequest, NSObject;

@interface HMDPendingCharacteristic : NSObject {

	HMDCharacteristicWriteRequest* _writeRequest;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;

}

@property (readonly) HMDCharacteristicWriteRequest * writeRequest;              //@synthesize writeRequest=_writeRequest - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (readonly) id handler;                                                //@synthesize handler=_handler - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(id)initWithCharacteristic:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(HMDCharacteristicWriteRequest *)writeRequest;
@end

