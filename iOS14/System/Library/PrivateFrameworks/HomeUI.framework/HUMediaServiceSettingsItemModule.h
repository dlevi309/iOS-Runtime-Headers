/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUMediaServiceItemProviderDelegate.h>

@class NSSet, HMHome, HFStaticItem, HUMediaServiceItemProvider, NSString;

@interface HUMediaServiceSettingsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate> {

	NSSet* _itemProviders;
	HMHome* _home;
	HFStaticItem* _defaultAccountsItem;
	HUMediaServiceItemProvider* _mediaServiceItemProvider;

}

@property (nonatomic,readonly) NSSet * itemProviders;                                            //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HFStaticItem * defaultAccountsItem;                                 //@synthesize defaultAccountsItem=_defaultAccountsItem - In the implementation block
@property (nonatomic,retain) HUMediaServiceItemProvider * mediaServiceItemProvider;              //@synthesize mediaServiceItemProvider=_mediaServiceItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)itemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(HMHome *)home;
-(void)_createItemProviders;
-(HUMediaServiceItemProvider *)mediaServiceItemProvider;
-(void)mediaServiceItemProviderDidUpdateServices:(id)arg1 ;
-(HFStaticItem *)defaultAccountsItem;
-(void)setDefaultAccountsItem:(HFStaticItem *)arg1 ;
-(void)setMediaServiceItemProvider:(HUMediaServiceItemProvider *)arg1 ;
@end

