/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSetupFlowControllerProtocol.h>

@protocol PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;
@class PKAccountService, PKAccount, PKPaymentPass, PKPhysicalCard, NSString;

@interface PKPhysicalCardController : NSObject <PKSetupFlowControllerProtocol> {

	PKAccountService* _accountService;
	BOOL _updatingOrderController;
	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	id<PKSetupFlowControllerProtocol> _parentFlowController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPhysicalCard* _unactivatedPhysicalCard;
	PKPhysicalCard* _primaryPhysicalCard;

}

@property (nonatomic,readonly) PKAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                                              //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) id<PKSetupFlowControllerProtocol> parentFlowController;                     //@synthesize parentFlowController=_parentFlowController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryPhysicalCard; 
@property (nonatomic,readonly) BOOL canActivatePhysicalCard; 
@property (nonatomic,readonly) BOOL canRequestPhysicalCard; 
@property (nonatomic,readonly) BOOL canReplacePhysicalCard; 
@property (nonatomic,readonly) BOOL primaryPhysicalCardEnabled; 
@property (nonatomic,readonly) BOOL physicalCardBlocked; 
@property (nonatomic,readonly) PKPhysicalCard * unactivatedPhysicalCard;                                 //@synthesize unactivatedPhysicalCard=_unactivatedPhysicalCard - In the implementation block
@property (nonatomic,readonly) PKPhysicalCard * primaryPhysicalCard;                                     //@synthesize primaryPhysicalCard=_primaryPhysicalCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceSupportsContactlessActivation;
-(PKAccount *)account;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)_updatePhysicalCards;
-(BOOL)hasPrimaryPhysicalCard;
-(id)initWithAccountService:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 ;
-(void)updateWithAccount:(id)arg1 ;
-(BOOL)canActivatePhysicalCard;
-(BOOL)canRequestPhysicalCard;
-(BOOL)canReplacePhysicalCard;
-(BOOL)primaryPhysicalCardEnabled;
-(BOOL)physicalCardBlocked;
-(void)orderFlowViewControllerForReason:(unsigned long long)arg1 content:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(PKPhysicalCard *)unactivatedPhysicalCard;
-(PKPhysicalCard *)primaryPhysicalCard;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

