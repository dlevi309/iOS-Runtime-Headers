/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebDelegate.h>
#import <libobjc.A.dylib/AAUISpecifierProvider.h>

@protocol AAUISpecifierProviderDelegate;
@class NSArray, AIDAAccountManager, PSSpecifier, NSString;

@interface AMSUIManageSubsriptionSpecifierProvider : NSObject <AMSUIWebDelegate, AAUISpecifierProvider> {

	id<AAUISpecifierProviderDelegate> _delegate;
	NSArray* _specifiers;
	AIDAAccountManager* _accountManager;
	PSSpecifier* _activelyLoadingSpecifier;

}

@property (nonatomic,retain) AIDAAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) PSSpecifier * activelyLoadingSpecifier;                         //@synthesize activelyLoadingSpecifier=_activelyLoadingSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                             //@synthesize specifiers=_specifiers - In the implementation block
-(id<AAUISpecifierProviderDelegate>)delegate;
-(void)setDelegate:(id<AAUISpecifierProviderDelegate>)arg1 ;
-(id)_appleAccount;
-(id)initWithAccountManager:(id)arg1 ;
-(NSArray *)specifiers;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(AIDAAccountManager *)accountManager;
-(id)_storeAccount;
-(void)setAccountManager:(AIDAAccountManager *)arg1 ;
-(void)_subscriptionsSpecifierWasTapped:(id)arg1 ;
-(BOOL)_isSingleIdentity;
-(id)_findViewController;
-(void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PSSpecifier *)activelyLoadingSpecifier;
-(void)setActivelyLoadingSpecifier:(PSSpecifier *)arg1 ;
@end

