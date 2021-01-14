/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <libobjc.A.dylib/AAUISpecifierProvider.h>

@protocol AAUISpecifierProviderDelegate;
@class NSArray, AIDAAccountManager, PSSpecifier, NSString;

@interface SKAccountPageSpecifierProvider : NSObject <AAUISpecifierProvider> {

	id<AAUISpecifierProviderDelegate> _delegate;
	NSArray* _specifiers;
	AIDAAccountManager* _accountManager;
	PSSpecifier* _activelyLoadingSpecifier;

}

@property (nonatomic,retain) AIDAAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) PSSpecifier * activelyLoadingSpecifier;                         //@synthesize activelyLoadingSpecifier=_activelyLoadingSpecifier - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                             //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AIDAAccountManager *)accountManager;
-(void)setAccountManager:(AIDAAccountManager *)arg1 ;
-(NSArray *)specifiers;
-(id<AAUISpecifierProviderDelegate>)delegate;
-(id)initWithAccountManager:(id)arg1 ;
-(void)setDelegate:(id<AAUISpecifierProviderDelegate>)arg1 ;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)_appleAccount;
-(id)_storeAccount;
-(BOOL)_isSingleIdentity;
-(PSSpecifier *)activelyLoadingSpecifier;
-(void)setActivelyLoadingSpecifier:(PSSpecifier *)arg1 ;
-(void)_accountPageSpecifierWasTapped:(id)arg1 ;
@end

