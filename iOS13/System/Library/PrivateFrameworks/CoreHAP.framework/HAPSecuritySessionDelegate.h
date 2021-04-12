/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPSecuritySessionDelegate <NSObject>
@optional
-(void)securitySessionIsOpening:(id)arg1;
-(void)securitySessionDidOpen:(id)arg1;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2;

@required
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;

@end

