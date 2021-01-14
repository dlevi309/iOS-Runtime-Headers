/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPSecuritySessionDelegate <NSObject>
@optional
-(void)securitySessionIsOpening:(id)arg1;
-(void)securitySessionDidOpen:(id)arg1;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
-(id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)arg1;

@required
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;

@end

