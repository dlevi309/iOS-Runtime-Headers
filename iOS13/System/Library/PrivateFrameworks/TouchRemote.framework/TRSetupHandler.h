/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@protocol TRSetupHandlerDelegate;
@interface TRSetupHandler : NSObject {

	id<TRSetupHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TRSetupHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TRSetupHandlerDelegate>)delegate;
-(void)setDelegate:(id<TRSetupHandlerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleCompletionRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleNetworkRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleActivationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end

