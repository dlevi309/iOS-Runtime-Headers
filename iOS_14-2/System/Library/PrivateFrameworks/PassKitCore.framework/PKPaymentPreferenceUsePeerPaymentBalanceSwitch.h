/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(PKCurrencyAmount *)peerPaymentBalance;
-(PKPaymentPass *)peerPaymentPass;
-(void)setPeerPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(BOOL)isEnabled;
@end

