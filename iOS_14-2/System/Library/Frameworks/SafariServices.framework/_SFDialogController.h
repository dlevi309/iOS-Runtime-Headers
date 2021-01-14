/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/_SFDialogViewDelegate.h>

@protocol _SFDialogControllerDelegate, _SFDialogViewPresenting, _SFDialogViewControllerPresenting;
@class WBSTabDialogManager, _SFDialogView, UIViewController, _SFDialog, NSString;

@interface _SFDialogController : NSObject <_SFDialogViewDelegate> {

	WBSTabDialogManager* _dialogManager;
	_SFDialogView* _dialogView;
	UIViewController* _dialogViewController;
	int _webProcessID;
	id<_SFDialogControllerDelegate> _delegate;
	id<_SFDialogViewPresenting> _dialogPresenter;
	id<_SFDialogViewControllerPresenting> _viewControllerPresenter;
	_SFDialog* _presentedDialog;

}

@property (assign,nonatomic,__weak) id<_SFDialogControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDialogViewPresenting> dialogPresenter;                                //@synthesize dialogPresenter=_dialogPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDialogViewControllerPresenting> viewControllerPresenter;              //@synthesize viewControllerPresenter=_viewControllerPresenter - In the implementation block
@property (nonatomic,readonly) _SFDialog * presentedDialog;                                                     //@synthesize presentedDialog=_presentedDialog - In the implementation block
@property (nonatomic,readonly) _SFDialog*<_SFAuthenticatorDialog> presentedAuthenticatorDialog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applicationDidEnterBackground;
-(void)presentDialog:(id)arg1 ;
-(_SFDialog *)presentedDialog;
-(id)init;
-(id<_SFDialogControllerDelegate>)delegate;
-(unsigned long long)_tabID;
-(void)_dismissDialogWithAdditionalAnimations:(/*^block*/id)arg1 ;
-(void)presentNextDialogIfNeeded;
-(void)setDialogPresenter:(id<_SFDialogViewPresenting>)arg1 ;
-(BOOL)_isPresentingDialog;
-(_SFDialog*<_SFAuthenticatorDialog>)presentedAuthenticatorDialog;
-(void)_dismissCurrentDialogWithResponse:(id)arg1 ;
-(int)_currentWebProcessID;
-(void)setDelegate:(id<_SFDialogControllerDelegate>)arg1 ;
-(id<_SFDialogViewPresenting>)dialogPresenter;
-(void)owningWebViewDidCommitNavigationWithURL:(id)arg1 ;
-(void)owningWebViewWillNavigate;
-(void)dialogView:(id)arg1 didSelectActionAtIndex:(unsigned long long)arg2 withInputText:(id)arg3 passwordText:(id)arg4 ;
-(void)owningWebViewDidChangeProcessID;
-(long long)_presentDialog:(id)arg1 forWebProcessID:(int)arg2 withAdditionalAnimations:(/*^block*/id)arg3 ;
-(void)owningWebViewWillBecomeActive;
-(void)owningTabWillClose;
-(void)setViewControllerPresenter:(id<_SFDialogViewControllerPresenting>)arg1 ;
-(id)_initWithDialogManager:(id)arg1 ;
-(SCD_Struct_SF20)_currentSlot;
-(id<_SFDialogViewControllerPresenting>)viewControllerPresenter;
-(void)cancelPresentedDialogIfNeeded;
-(void)presentDialog:(id)arg1 animateAlongsidePresentation:(/*^block*/id)arg2 dismissal:(/*^block*/id)arg3 ;
@end

