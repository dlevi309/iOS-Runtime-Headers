/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class PKPeerPaymentService, PKPeerPaymentAccount;

@interface NPKPeerPaymentAccountManager : NSObject {

	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _account;

}

@property (retain) PKPeerPaymentAccount * account;                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentService * peerPaymentService;              //@synthesize peerPaymentService=_peerPaymentService - In the implementation block
+(id)sharedInstance;
-(id)init;
-(PKPeerPaymentAccount *)account;
-(void)setAccount:(PKPeerPaymentAccount *)arg1 ;
-(void)_updateAccount;
-(PKPeerPaymentService *)peerPaymentService;
-(id)initWithPeerPaymentService:(id)arg1 ;
-(void)_handleAccountChanged:(id)arg1 ;
@end

