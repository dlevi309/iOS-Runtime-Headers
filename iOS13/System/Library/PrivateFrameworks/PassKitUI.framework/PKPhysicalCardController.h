/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(PKAccount *)account;
-(PKPaymentPass *)paymentPass;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
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
@end

