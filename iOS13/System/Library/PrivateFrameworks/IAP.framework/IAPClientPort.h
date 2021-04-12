/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)uuid;
-(id)sendDataHandler;
-(void)setSendDataHandler:(id)arg1 ;
-(id)initWithUUID:(id)arg1 queue:(id)arg2 sendHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)sendDataHandlerQueue;
-(NSObject*<OS_dispatch_queue>)clientPortEventQueue;
@end

