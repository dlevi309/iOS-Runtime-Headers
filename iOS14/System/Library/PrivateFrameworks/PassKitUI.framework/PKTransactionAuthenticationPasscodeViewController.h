/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate.h>

@protocol PKTransactionAuthenticationPasscodeViewControllerDelegate;
@class _UIAsyncInvocation, PKRemoteTransactionAuthenticationPasscodeViewController, NSString, NSData;

@interface PKTransactionAuthenticationPasscodeViewController : UIViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> {

	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteTransactionAuthenticationPasscodeViewController* _remoteVC;
	id<PKTransactionAuthenticationPasscodeViewControllerDelegate> _delegate;
	os_unfair_lock_s _delegateLock;
	NSString* _passUniqueIdentifier;
	NSString* _transactionIdentifier;
	NSData* _archivedAnalyticsSessionToken;

}

@property (nonatomic,readonly) NSString * passUniqueIdentifier;                                                          //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * transactionIdentifier;                                                         //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PKTransactionAuthenticationPasscodeViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)viewWillLayoutSubviews;
-(id)init;
-(id<PKTransactionAuthenticationPasscodeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setDelegate:(id<PKTransactionAuthenticationPasscodeViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(NSString *)passUniqueIdentifier;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(NSString *)transactionIdentifier;
-(void)passcodeViewControllerDidCancel;
-(void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg1 ;
-(void)resetWithTransactionAuthenticationFailure:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setRemoteVC:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPassUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 archivedAnalyticsSessionToken:(id)arg3 ;
-(void)dealloc;
@end

