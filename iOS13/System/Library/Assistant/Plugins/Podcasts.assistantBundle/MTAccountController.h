/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/

#import <PodcastsKit/MTSingleton.h>

@class ACAccount;

@interface MTAccountController : MTSingleton {

	BOOL _hasFetchedInitialAccount;
	ACAccount* _activeAccount;

}

@property (retain) ACAccount * activeAccount;                  //@synthesize activeAccount=_activeAccount - In the implementation block
@property (assign) BOOL hasFetchedInitialAccount;              //@synthesize hasFetchedInitialAccount=_hasFetchedInitialAccount - In the implementation block
+(BOOL)iTunesAccountDidChangeForACAccountNotification:(id)arg1 ;
-(id)init;
-(ACAccount *)activeAccount;
-(void)setActiveAccount:(ACAccount *)arg1 ;
-(id)activeDsid;
-(id)activeStorefront;
-(id)activeEmail;
-(id)activeFullName;
-(BOOL)isUserLoggedIn;
-(BOOL)activeAccountIsManagedAppleID;
-(void)_updateActiveAccount;
-(id)_activeAccountBlocking;
-(void)didChangeStoreAccount:(id)arg1 ;
-(void)setHasFetchedInitialAccount:(BOOL)arg1 ;
-(BOOL)hasFetchedInitialAccount;
@end

