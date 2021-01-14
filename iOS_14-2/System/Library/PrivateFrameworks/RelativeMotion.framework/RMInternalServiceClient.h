/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/


@protocol OS_dispatch_queue;
@class NSObject, RMConnectionClient;

@interface RMInternalServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	RMConnectionClient* _spiClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RMConnectionClient * spiClient;                  //@synthesize spiClient=_spiClient - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RMConnectionClient *)spiClient;
-(void)listClientsWithReply:(/*^block*/id)arg1 ;
-(void)handleSpiIncomingMessage:(id)arg1 data:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)setSpiClient:(RMConnectionClient *)arg1 ;
-(void)parseSpiErrorReply:(id)arg1 forMessage:(id)arg2 ;
-(void)getNumClientsWithReply:(/*^block*/id)arg1 ;
-(void)disconnectAllClientsWithReply:(/*^block*/id)arg1 ;
-(void)disconnectClient:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

