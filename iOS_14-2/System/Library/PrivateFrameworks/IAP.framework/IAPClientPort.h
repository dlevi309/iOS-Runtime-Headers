/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface IAPClientPort : NSObject {

	NSString* _uuid;
	/*^block*/id _sendDataHandler;
	NSObject*<OS_dispatch_queue> _sendDataHandlerQueue;
	NSObject*<OS_dispatch_queue> _clientPortEventQueue;

}

@property (nonatomic,readonly) NSString * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sendDataHandlerQueue;              //@synthesize sendDataHandlerQueue=_sendDataHandlerQueue - In the implementation block
@property (assign,nonatomic) id sendDataHandler;                                               //@synthesize sendDataHandler=_sendDataHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientPortEventQueue;              //@synthesize clientPortEventQueue=_clientPortEventQueue - In the implementation block
-(NSString *)uuid;
-(id)sendDataHandler;
-(void)setSendDataHandler:(id)arg1 ;
-(void)dealloc;
-(id)initWithUUID:(id)arg1 queue:(id)arg2 sendHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)sendDataHandlerQueue;
-(NSObject*<OS_dispatch_queue>)clientPortEventQueue;
@end

