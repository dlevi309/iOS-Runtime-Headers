/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection {

	SFSession* _session;

}

@property (retain) SFSession * session;              //@synthesize session=_session - In the implementation block
-(void)sendResponse:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(SFSession *)session;
-(void)setEventMessageHandler:(/*^block*/id)arg1 ;
-(void)setRequestMessageHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(void)setSession:(SFSession *)arg1 ;
-(/*^block*/id)eventMessageHandler;
-(void)invalidate;
-(void)sendEvent:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)invalidationHandler;
-(/*^block*/id)requestMessageHandler;
-(/*^block*/id)interruptionHandler;
-(void)connectToNearbyDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

