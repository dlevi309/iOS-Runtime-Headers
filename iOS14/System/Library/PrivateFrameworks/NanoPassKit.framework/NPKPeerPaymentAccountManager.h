/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPeerPaymentAccount *)account;
-(void)setAccount:(PKPeerPaymentAccount *)arg1 ;
-(id)init;
-(id)initWithPeerPaymentService:(id)arg1 ;
-(void)_handleAccountChanged:(id)arg1 ;
-(void)_updateAccount;
-(PKPeerPaymentService *)peerPaymentService;
@end

