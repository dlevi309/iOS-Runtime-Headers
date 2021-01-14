/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sendResponse:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)setEventMessageHandler:(id)arg1 ;
-(void)setRequestMessageHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)eventMessageHandler;
-(void)invalidate;
-(void)sendEvent:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)requestMessageHandler;
-(id)interruptionHandler;
@end

