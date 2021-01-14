/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItem, HFStaticItemProvider, HMHome, HFUserNameFormatter;

@interface HUFaceRecognitionPersonEditorItemManager : HFItemManager {

	HFItem* _faceCropItem;
	HFItem* _nameItem;
	HFItem* _addNameItem;
	HFStaticItem* _hideNotificationsItem;
	HFItem* _deleteItem;
	HFStaticItemProvider* _staticItemProvider;
	HMHome* _personHome;
	HFUserNameFormatter* _userNameFormatter;

}

@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;              //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFItem * faceCropItem;                                  //@synthesize faceCropItem=_faceCropItem - In the implementation block
@property (nonatomic,retain) HFItem * nameItem;                                      //@synthesize nameItem=_nameItem - In the implementation block
@property (nonatomic,retain) HFItem * addNameItem;                                   //@synthesize addNameItem=_addNameItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * hideNotificationsItem;                   //@synthesize hideNotificationsItem=_hideNotificationsItem - In the implementation block
@property (nonatomic,retain) HFItem * deleteItem;                                    //@synthesize deleteItem=_deleteItem - In the implementation block
@property (nonatomic,retain) HMHome * personHome;                                    //@synthesize personHome=_personHome - In the implementation block
@property (nonatomic,retain) HFUserNameFormatter * userNameFormatter;                //@synthesize userNameFormatter=_userNameFormatter - In the implementation block
@property (nonatomic,readonly) HFItem*<HFPersonLikeItem> personItem; 
+(id)dateFormatter;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFUserNameFormatter *)userNameFormatter;
-(id)_homeFuture;
-(HFItem *)nameItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HMHome *)personHome;
-(HFItem*<HFPersonLikeItem>)personItem;
-(void)setFaceCropItem:(HFItem *)arg1 ;
-(void)setNameItem:(HFItem *)arg1 ;
-(void)setAddNameItem:(HFItem *)arg1 ;
-(void)setHideNotificationsItem:(HFStaticItem *)arg1 ;
-(void)setDeleteItem:(HFItem *)arg1 ;
-(HFItem *)faceCropItem;
-(HFItem *)addNameItem;
-(HFStaticItem *)hideNotificationsItem;
-(HFItem *)deleteItem;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(void)setPersonHome:(HMHome *)arg1 ;
-(void)setUserNameFormatter:(HFUserNameFormatter *)arg1 ;
@end

