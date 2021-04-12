/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/AIDAAccountManagerDelegate.h>

@class ACAccountStore, AIDAAccountManager, NSString;

@interface VUIFamilyInviteManager : NSObject <AIDAAccountManagerDelegate> {

	ACAccountStore* _store;
	AIDAAccountManager* _accountManager;

}

@property (nonatomic,readonly) ACAccountStore * store;                           //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) AIDAAccountManager * accountManager;              //@synthesize accountManager=_accountManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AIDAAccountManager *)accountManager;
-(id)init;
-(ACAccountStore *)store;
-(id)accountsForAccountManager:(id)arg1 ;
-(void)presentFamilySetupScreenIfEligible:(id)arg1 checkEligibility:(BOOL)arg2 ;
-(void)presentFamilySetupScreenWithBuyParams:(id)arg1 ;
@end

