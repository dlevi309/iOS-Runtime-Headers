/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentActionControllerDelegate.h>

@protocol PKPeerPaymentActionViewControllerDelegate, PKPassLibraryDataProvider;
@class PKPeerPaymentAccount, PKPeerPaymentActionController, PKPeerPaymentWebService, PKPaymentPass, NSDecimalNumber, PKPeerPaymentAccountFeatureDescriptor, NSString;

@interface PKPeerPaymentActionViewController : UIViewController <PKPeerPaymentActionControllerDelegate> {

	BOOL _viewHasAppeared;
	BOOL _dismissingViewController;
	BOOL _showCancelButton;
	id<PKPeerPaymentActionViewControllerDelegate> _delegate;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
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
@property (assign,nonatomic,__weak) id<PKPassLibraryDataProvider> passLibraryDataProvider;               //@synthesize passLibraryDataProvider=_passLibraryDataProvider - In the implementation block
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
+(id)peerPaymentActionViewControllerForAction:(unsigned long long)arg1 paymentPass:(id)arg2 webService:(id)arg3 passLibraryDataProvider:(id)arg4 context:(long long)arg5 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PKPeerPaymentAccount *)account;
-(PKPeerPaymentAccountFeatureDescriptor *)feature;
-(void)setAccount:(PKPeerPaymentAccount *)arg1 ;
-(PKPeerPaymentWebService *)webService;
-(NSDecimalNumber *)minBalance;
-(id<PKPeerPaymentActionViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSDecimalNumber *)maxBalance;
-(void)setMinBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxBalance:(NSDecimalNumber *)arg1 ;
-(void)setMinLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaxLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setCardBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)cardBalance;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(void)setCurrentAmount:(NSDecimalNumber *)arg1 ;
-(long long)context;
-(void)setDelegate:(id<PKPeerPaymentActionViewControllerDelegate>)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(PKPaymentPass *)pass;
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(void)updateFirstResponder;
-(void)_performedAction;
-(void)_cancelledAction;
-(void)updateAccountValues;
-(void)willDismissViewController;
-(id)_cancelBarButton;
-(PKPeerPaymentActionController *)actionController;
-(void)setControllerAction:(unsigned long long)arg1 ;
-(unsigned long long)controllerAction;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2 ;
-(void)peerPaymentActionController:(id)arg1 requestPresentViewController:(id)arg2 ;
-(void)peerPaymentActionController:(id)arg1 requestPresentViewController:(id)arg2 withTransition:(int)arg3 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id<PKPassLibraryDataProvider>)passLibraryDataProvider;
-(void)setPassLibraryDataProvider:(id<PKPassLibraryDataProvider>)arg1 ;
-(void)loadView;
-(BOOL)showCancelButton;
-(NSDecimalNumber *)currentAmount;
-(void)dealloc;
@end

