/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HFAppleMusicAccountObserver.h>

@protocol HFMediaProfileContainer;
@class HUAppleMusicAccountItemProvider, HUAppleMusicItem, HFStaticItemProvider, NSString;

@interface HUAppleMusicAccountModule : HFItemModule <HFAppleMusicAccountObserver> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HUAppleMusicAccountItemProvider* _appleMusicAccountItemProvider;
	HUAppleMusicItem* _loggedInUsernameItem;
	HUAppleMusicItem* _logoutItem;
	HUAppleMusicItem* _loginItem;
	unsigned long long _state;
	/*^block*/id _stateChangeObserver;
	HFStaticItemProvider* _appleMusicAccountActionItemProvider;

}

@property (nonatomic,readonly) HFStaticItemProvider * appleMusicAccountActionItemProvider;                   //@synthesize appleMusicAccountActionItemProvider=_appleMusicAccountActionItemProvider - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                            //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HUAppleMusicAccountItemProvider * appleMusicAccountItemProvider;              //@synthesize appleMusicAccountItemProvider=_appleMusicAccountItemProvider - In the implementation block
@property (nonatomic,readonly) HUAppleMusicItem * loggedInUsernameItem;                                      //@synthesize loggedInUsernameItem=_loggedInUsernameItem - In the implementation block
@property (nonatomic,readonly) HUAppleMusicItem * logoutItem;                                                //@synthesize logoutItem=_logoutItem - In the implementation block
@property (nonatomic,readonly) HUAppleMusicItem * loginItem;                                                 //@synthesize loginItem=_loginItem - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfKnownAccounts; 
@property (assign,nonatomic) unsigned long long state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangeObserver;                                                           //@synthesize stateChangeObserver=_stateChangeObserver - In the implementation block
@property (nonatomic,readonly) NSString * explicitAccountSignedInMessage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dispatcher:(id)arg1 appleMusicAccountsDidUpdate:(id)arg2 ;
-(id)stateChangeObserver;
-(void)setStateChangeObserver:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)itemProviders;
-(unsigned long long)state;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HUAppleMusicItem *)logoutItem;
-(HUAppleMusicItem *)loginItem;
-(HUAppleMusicItem *)loggedInUsernameItem;
-(HUAppleMusicAccountItemProvider *)appleMusicAccountItemProvider;
-(HFStaticItemProvider *)appleMusicAccountActionItemProvider;
-(unsigned long long)numberOfKnownAccounts;
-(id)initWithMediaProfileContainer:(id)arg1 itemUpdater:(id)arg2 ;
-(id)signInMessage:(BOOL)arg1 ;
-(NSString *)explicitAccountSignedInMessage;
@end

