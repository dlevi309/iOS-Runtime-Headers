/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKSelectActionViewDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>

@protocol PKPaymentDataProvider, PKSelectActionViewControllerDelegate;
@class PKPerformActionPassView, PKPaymentPass, NSArray, PKSelectActionView, PKPaymentPassAction, PKPaymentWebService, NSDictionary, NSString;

@interface PKSelectActionViewController : UIViewController <PKSelectActionViewDelegate, PKPerformActionViewControllerDelegate> {

	PKPerformActionPassView* _passView;
	PKPaymentPass* _pass;
	NSArray* _actions;
	unsigned long long _actionType;
	PKSelectActionView* _actionView;
	PKPaymentPassAction* _selectedAction;
	id<PKPaymentDataProvider> _paymentDataProvider;
	PKPaymentWebService* _webService;
	NSDictionary* _balances;
	id<PKSelectActionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSelectActionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id<PKSelectActionViewControllerDelegate>)delegate;
-(void)_reloadActionView;
-(void)setRightBarButtonEnabled:(BOOL)arg1 ;
-(void)selectActionViewDidSelectAction:(id)arg1 ;
-(void)setDelegate:(id<PKSelectActionViewControllerDelegate>)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 balanceDictionary:(id)arg6 ;
-(void)viewDidLoad;
-(void)_cancelButtonPressed:(id)arg1 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(void)_rightBarButtonPressed:(id)arg1 ;
@end

