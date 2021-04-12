/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentPreference.h>

@class PKPaymentPass, PKCurrencyAmount;

@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference {

	BOOL _on;
	BOOL _enabled;
	PKPaymentPass* _peerPaymentPass;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (nonatomic,retain) PKPaymentPass * peerPaymentPass;                    //@synthesize peerPaymentPass=_peerPaymentPass - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;              //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                //@synthesize on=_on - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(PKCurrencyAmount *)peerPaymentBalance;
-(PKPaymentPass *)peerPaymentPass;
-(void)setPeerPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
@end

