/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKCurrencyAmount, NSString;

@interface PKPeerPaymentAccountResolutionControllerConfiguration : NSObject {

	BOOL _manuallyTriggered;
	BOOL _graduation;
	PKCurrencyAmount* _currencyAmount;
	unsigned long long _registrationFlowState;
	NSString* _senderAddress;

}

@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                     //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (assign,nonatomic) unsigned long long registrationFlowState;              //@synthesize registrationFlowState=_registrationFlowState - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                                //@synthesize senderAddress=_senderAddress - In the implementation block
@property (assign,nonatomic) BOOL manuallyTriggered;                                //@synthesize manuallyTriggered=_manuallyTriggered - In the implementation block
@property (assign,getter=isGraduation,nonatomic) BOOL graduation;                   //@synthesize graduation=_graduation - In the implementation block
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)description;
-(void)setRegistrationFlowState:(unsigned long long)arg1 ;
-(BOOL)manuallyTriggered;
-(void)setManuallyTriggered:(BOOL)arg1 ;
-(unsigned long long)registrationFlowState;
-(BOOL)isGraduation;
-(void)setGraduation:(BOOL)arg1 ;
@end

