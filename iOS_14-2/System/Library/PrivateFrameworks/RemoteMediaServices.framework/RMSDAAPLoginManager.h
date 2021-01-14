/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class RMSDAAPRequestManager, RMSFairPlaySession;

@interface RMSDAAPLoginManager : NSObject {

	RMSDAAPRequestManager* _requestManager;
	RMSFairPlaySession* _fairPlaySession;
	BOOL _isFairPlayRequired;

}
-(void)_requestControlInterfaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestFairPlayHandshake:(/*^block*/id)arg1 ;
-(void)_requestLoginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestServerInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isFairplayRequiredForServerInfo:(id)arg1 ;
-(void)_continueFairPlayHandshakeWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)loginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

