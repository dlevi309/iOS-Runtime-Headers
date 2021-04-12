/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentActionControllerDelegate.h>

@protocol PKPeerPaymentActionViewControllerDelegate;
@class PKPeerPaymentAccount, PKPeerPaymentActionController, PKPeerPaymentWebService, PKPaymentPass, NSDecimalNumber, PKPeerPaymentAccountFeatureDescriptor, NSString;

@interface PKPeerPaymentActionViewController : UIViewController <PKPeerPaymentActionControllerDelegate> {

	BOOL _viewHasAppeared;
	BOOL _dismissingViewController;
	BOOL _showCancelButton;
	id<PKPeerPaymentActionViewControllerDelegate> _delegate;
	PKPeerPaymentAccount* _account;
	PKPeerPaymentActionController* _actionController;
	PKPeerPaymentWebService* _webService;
	PKPaymentPass* _pass;
	long long _context;
	NSDecimalNumber* _currentAmount;
	NSDecimalNumber* _cardBalance;
	NSDecimalNumber* _minBalance;
	NSDecimalNumber* _maxBalance;
	NSDecimalNumber* _minLoadAmount;
	NSDecimalNumber* _maxLoadAmount;

}

@property (assign,nonatomic,__weak) id<PKPeerPaymentActionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccount * account;                                             //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentActionController * actionController;                         //@synthesize actionController=_actionController - In the implementation block
@property (assign,nonatomic) unsigned long long controllerAction; 
@property (nonatomic,readonly) PKPeerPaymentWebService * webService;                                     //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                                                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentAccountFeatureDescriptor * feature; 
@property (nonatomic,copy) NSDecimalNumber * currentAmount;                                              //@synthesize currentAmount=_currentAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * cardBalance;                                                //@synthesize cardBalance=_cardBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minBalance;                                                 //@synthesize minBalance=_minBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxBalance;                                                 //@synthesize maxBalance=_maxBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minLoadAmount;                                              //@synthesize minLoadAmount=_minLoadAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxLoadAmount;                                              //@synthesize maxLoadAmount=_maxLoadAmount - In the implementation block
@property (assign,nonatomic) BOOL showCancelButton;                                                      //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigationBarBackgroundColor;
+(id)peerPaymentActionViewControllerForAction:(unsigned long long)arg1 paymentPass:(id)arg2 webService:(id)arg3 context:(long long)arg4 ;
-(void)dealloc;
-(id<PKPeerPaymentActionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPeerPaymentActionViewControllerDelegate>)arg1 ;
-(long long)context;
-(PKPeerPaymentAccount *)account;
-(void)setAccount:(PKPeerPaymentAccount *)arg1 ;
-(PKPeerPaymentAccountFeatureDescriptor *)feature;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)showCancelButton;
-(void)_cancelButtonPressed:(id)arg1 ;
-(PKPaymentPass *)pass;
-(PKPeerPaymentWebService *)webService;
-(void)setMinBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxBalance:(NSDecimalNumber *)arg1 ;
-(void)setMinLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaxLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setCardBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)cardBalance;
-(NSDecimalNumber *)minBalance;
-(NSDecimalNumber *)maxBalance;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(PKPeerPaymentActionController *)actionController;
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(void)updateFirstResponder;
-(void)_performedAction;
-(void)_cancelledAction;
-(void)updateAccountValues;
-(void)willDismissViewController;
-(id)_cancelBarButton;
-(void)setControllerAction:(unsigned long long)arg1 ;
-(unsigned long long)controllerAction;
-(void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2 ;
-(void)peerPaymentActionController:(id)arg1 requestPresentViewController:(id)arg2 ;
-(void)peerPaymentActionController:(id)arg1 requestPresentViewController:(id)arg2 withTransition:(int)arg3 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(void)setCurrentAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)currentAmount;
@end

