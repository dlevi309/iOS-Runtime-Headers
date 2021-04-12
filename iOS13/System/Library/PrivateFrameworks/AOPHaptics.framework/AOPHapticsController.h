/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AOPHaptics.framework/AOPHaptics
*/


@protocol OS_dispatch_queue;
#import <AOPHaptics/AOPHaptics-Structs.h>
@class NSObject;

@interface AOPHapticsController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IONotificationPortRef _notificationPort;
	unsigned _arrivalNotification;
	/*^block*/id _cancelHandler;
	/*^block*/id _readyHandler;
	atomic_flag _activated;
	atomic_flag _cancelled;
	unsigned _service;
	unsigned _connect;

}

@property (assign,nonatomic) unsigned service;              //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;              //@synthesize connect=_connect - In the implementation block
+(int)AHtoHMOutputType:(unsigned char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)setDispatchQueue:(id)arg1 ;
-(unsigned)service;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(unsigned)connect;
-(void)activate;
-(void)setService:(unsigned)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(void)_findService;
-(void)setReadyHandler:(/*^block*/id)arg1 ;
-(BOOL)setMappings:(id)arg1 error:(id*)arg2 ;
-(BOOL)playSlotIndices:(id)arg1 error:(id*)arg2 ;
-(void)signalReady;
@end

