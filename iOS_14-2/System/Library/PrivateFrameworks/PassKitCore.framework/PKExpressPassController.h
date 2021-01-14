/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentDataProvider, PKPassLibraryDataProvider;
@interface PKExpressPassController : NSObject {

	id<PKPaymentDataProvider> _paymentDataProvider;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	BOOL _isForWatch;
	BOOL _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
	id _presentingViewController;
	long long _apiVersion;

}

@property (assign,nonatomic,__weak) id presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) long long apiVersion;                            //@synthesize apiVersion=_apiVersion - In the implementation block
-(long long)apiVersion;
-(BOOL)supportsLowPowerExpressMode;
-(id)presentingViewController;
-(void)setPresentingViewController:(id)arg1 ;
-(id)expressModeSupportedForPass:(id)arg1 ;
-(void)enableExpressModeWithPassInformation:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isExpressModeEnabledForPass:(id)arg1 ;
-(void)conflictingExpressPassesWithPassInformation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)validExpressModeUpgradeRequestForPass:(id)arg1 ;
-(void)upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)disableExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)deviceUsesAutomaticAuthorization;
-(void)setApiVersion:(long long)arg1 ;
-(id)initWithPaymentDataProvider:(id)arg1 passLibraryDataProvider:(id)arg2 isForWatch:(BOOL)arg3 ;
-(id)expressModeUpgradeRequestForPass:(id)arg1 ;
-(id)expressState;
@end

