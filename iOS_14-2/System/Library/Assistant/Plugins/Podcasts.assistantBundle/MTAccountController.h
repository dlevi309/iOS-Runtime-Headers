/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/

#import <Podcasts/MTSingleton.h>

@class ACAccount;

@interface MTAccountController : MTSingleton {

	BOOL _hasFetchedInitialAccount;
	ACAccount* _accountOverride;
	ACAccount* __activeAccount;

}

@property (retain) ACAccount * _activeAccount;                         //@synthesize _activeAccount=__activeAccount - In the implementation block
@property (assign) BOOL hasFetchedInitialAccount;                      //@synthesize hasFetchedInitialAccount=_hasFetchedInitialAccount - In the implementation block
@property (nonatomic,retain) ACAccount * accountOverride;              //@synthesize accountOverride=_accountOverride - In the implementation block
+(BOOL)iTunesAccountDidChangeForACAccountNotification:(id)arg1 ;
-(id)activeAccount;
-(id)init;
-(void)setActiveAccount:(id)arg1 ;
-(void)dealloc;
-(ACAccount *)_activeAccount;
-(void)_updateActiveAccount;
-(id)activeDsid;
-(void)didChangeStoreAccount:(id)arg1 ;
-(id)_activeAccountBlocking;
-(void)setHasFetchedInitialAccount:(BOOL)arg1 ;
-(id)activeStorefront;
-(id)activeEmail;
-(id)activeFullName;
-(BOOL)isUserLoggedIn;
-(BOOL)activeAccountIsManagedAppleID;
-(BOOL)hasFetchedInitialAccount;
-(ACAccount *)accountOverride;
-(void)setAccountOverride:(ACAccount *)arg1 ;
-(void)set_activeAccount:(ACAccount *)arg1 ;
@end

