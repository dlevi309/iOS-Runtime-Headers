/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection {

	SFSession* _session;

}

@property (retain) SFSession * session;              //@synthesize session=_session - In the implementation block
-(void)invalidate;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)interruptionHandler;
-(/*^block*/id)invalidationHandler;
-(SFSession *)session;
-(void)setSession:(SFSession *)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)setEventMessageHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)eventMessageHandler;
-(/*^block*/id)requestMessageHandler;
-(void)setRequestMessageHandler:(/*^block*/id)arg1 ;
-(void)connectToNearbyDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

