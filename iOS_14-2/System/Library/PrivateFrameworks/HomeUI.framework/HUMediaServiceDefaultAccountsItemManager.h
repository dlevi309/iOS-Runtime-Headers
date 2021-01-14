/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUUserItemManager.h>

@class HUMediaServiceDefaultAccountsItemModule, HFItem, HMHome, HFUserItem, NSString;

@interface HUMediaServiceDefaultAccountsItemManager : HFItemManager <HUUserItemManager> {

	HUMediaServiceDefaultAccountsItemModule* _defaultAccountsItemModule;
	HFItem* _defaultAccountsTitleItem;
	HMHome* _homeForUser;
	HFItem* _removeItem;

}

@property (nonatomic,retain) HMHome * homeForUser;                                                             //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,retain) HFUserItem * sourceItem; 
@property (nonatomic,retain) HUMediaServiceDefaultAccountsItemModule * defaultAccountsItemModule;              //@synthesize defaultAccountsItemModule=_defaultAccountsItemModule - In the implementation block
@property (nonatomic,retain) HFItem * removeItem;                                                              //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFItem * defaultAccountsTitleItem;                                                //@synthesize defaultAccountsTitleItem=_defaultAccountsTitleItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setHomeForUser:(HMHome *)arg1 ;
-(HMHome *)homeForUser;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(HFItem *)removeItem;
-(id)initWithHome:(id)arg1 sourceItem:(id)arg2 delegate:(id)arg3 ;
-(HFItem *)defaultAccountsTitleItem;
-(HUMediaServiceDefaultAccountsItemModule *)defaultAccountsItemModule;
-(void)setDefaultAccountsItemModule:(HUMediaServiceDefaultAccountsItemModule *)arg1 ;
-(void)setDefaultAccountsTitleItem:(HFItem *)arg1 ;
@end

