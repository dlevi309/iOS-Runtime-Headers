/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@interface TRConnection : NSObject {

	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _eventMessageHandler;
	/*^block*/id _requestMessageHandler;

}

@property (nonatomic,copy) id interruptionHandler;                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id eventMessageHandler;                //@synthesize eventMessageHandler=_eventMessageHandler - In the implementation block
@property (nonatomic,copy) id requestMessageHandler;              //@synthesize requestMessageHandler=_requestMessageHandler - In the implementation block
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)setEventMessageHandler:(id)arg1 ;
-(id)eventMessageHandler;
-(id)requestMessageHandler;
-(void)setRequestMessageHandler:(id)arg1 ;
@end

