/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDispatchQueue:(id)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(unsigned)connect;
-(void)activate;
-(void)setService:(unsigned)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(unsigned)service;
-(void)dealloc;
-(void)_findService;
-(void)setReadyHandler:(/*^block*/id)arg1 ;
-(BOOL)setMappings:(id)arg1 error:(id*)arg2 ;
-(BOOL)playSlotIndices:(id)arg1 error:(id*)arg2 ;
-(void)signalReady;
@end

