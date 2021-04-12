/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUMediaServiceItemProviderDelegate.h>

@class NSSet, HMHome, HUMediaServiceItemProvider, NSString;

@interface HUMediaServiceDefaultAccountsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate> {

	NSSet* _itemProviders;
	HMHome* _home;
	HUMediaServiceItemProvider* _mediaServiceItemProvider;

}

@property (nonatomic,readonly) NSSet * itemProviders;                                              //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HUMediaServiceItemProvider * mediaServiceItemProvider;              //@synthesize mediaServiceItemProvider=_mediaServiceItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)itemProviders;
-(BOOL)containsItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(HMHome *)home;
-(id)updateDefaultAccount:(id)arg1 ;
-(HUMediaServiceItemProvider *)mediaServiceItemProvider;
-(void)mediaServiceItemProviderDidUpdateServices:(id)arg1 ;
@end

