/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUUserItemManager.h>

@class HFItem, HMHome, HFUserItem, HMUser, NSString;

@interface HURemoteAccessItemManager : HFItemManager <HUUserItemManager> {

	HFItem* _allowRemoteAccessItem;
	HFItem* _allowRemoteAccessFooterItem;
	HMHome* _homeForUser;
	HFItem* _removeItem;

}

@property (nonatomic,retain) HMHome * homeForUser;                              //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,retain) HFItem * allowRemoteAccessItem;                    //@synthesize allowRemoteAccessItem=_allowRemoteAccessItem - In the implementation block
@property (nonatomic,retain) HFItem * allowRemoteAccessFooterItem;              //@synthesize allowRemoteAccessFooterItem=_allowRemoteAccessFooterItem - In the implementation block
@property (nonatomic,retain) HFItem * removeItem;                               //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFUserItem * sourceItem; 
@property (nonatomic,readonly) HMUser * user; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMUser *)user;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(HFItem *)removeItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(void)setHomeForUser:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3 ;
-(BOOL)_hasResidentDevice;
-(HMHome *)homeForUser;
-(BOOL)_isUserOwner:(id)arg1 ;
-(BOOL)_isEditingAllowedForUser:(id)arg1 ;
-(BOOL)_isRemoteAccessAllowedForUser:(id)arg1 ;
-(BOOL)_isUserBeingEditedTheDeviceUser;
-(BOOL)_isAllowedToEditTargetUser;
-(void)setAllowRemoteAccessItem:(HFItem *)arg1 ;
-(void)setAllowRemoteAccessFooterItem:(HFItem *)arg1 ;
-(HFItem *)allowRemoteAccessItem;
-(HFItem *)allowRemoteAccessFooterItem;
@end

