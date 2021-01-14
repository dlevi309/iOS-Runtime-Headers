/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUUserItemManager.h>

@class NSArray, HMHome, HFItem, HFUserItem, HMUser, NSString;

@interface HUUserCamerasAccessLevelItemManager : HFItemManager <HUUserItemManager> {

	NSArray* _accessLevelItems;
	HMHome* _homeForUser;
	HFItem* _removeItem;

}

@property (nonatomic,retain) HMHome * homeForUser;                    //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,retain) HFUserItem * sourceItem; 
@property (nonatomic,retain) HFItem * removeItem;                     //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) NSArray * accessLevelItems;              //@synthesize accessLevelItems=_accessLevelItems - In the implementation block
@property (nonatomic,readonly) HMUser * user; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(HMUser *)user;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setHomeForUser:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3 ;
-(HMHome *)homeForUser;
-(BOOL)_isUserOwner:(id)arg1 ;
-(BOOL)_isEditingAllowedForUser:(id)arg1 ;
-(BOOL)_isUserBeingEditedTheDeviceUser;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(HFItem *)removeItem;
-(BOOL)_isAllowedToEditTargetUser;
-(id)_cameraAccessLevels;
-(unsigned long long)_accessLevelForUser:(id)arg1 ;
-(void)setAccessLevelItems:(NSArray *)arg1 ;
-(NSArray *)accessLevelItems;
@end

