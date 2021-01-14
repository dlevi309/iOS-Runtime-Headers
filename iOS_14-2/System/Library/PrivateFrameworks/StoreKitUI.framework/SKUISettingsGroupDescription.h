/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSMutableSet, SKUISettingsHeaderFooterDescription, SKUISettingsObjectStore, SKUISettingsContext, SKUISettingsGroupController, SKUISettingsGroupsDescription, SKUIGroupViewElement, SKUIClientContext;

@interface SKUISettingsGroupDescription : NSObject {

	NSMutableSet* _editableSettings;
	SKUISettingsHeaderFooterDescription* _footerDescription;
	SKUISettingsHeaderFooterDescription* _headerDescription;
	SKUISettingsObjectStore* _settingDescriptions;
	SKUISettingsContext* _settingsContext;
	SKUISettingsGroupController* _controller;
	SKUISettingsGroupsDescription* _parent;
	SKUIGroupViewElement* _viewElement;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext; 
@property (assign,nonatomic,__weak) SKUISettingsGroupController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) SKUISettingsGroupsDescription * parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) SKUIGroupViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
-(unsigned long long)index;
-(SKUISettingsGroupsDescription *)parent;
-(SKUIClientContext *)clientContext;
-(void)recycle;
-(void)setParent:(SKUISettingsGroupsDescription *)arg1 ;
-(BOOL)hasHeader;
-(void)setController:(SKUISettingsGroupController *)arg1 ;
-(id)description;
-(void)reloadData;
-(BOOL)isEmpty;
-(SKUISettingsGroupController *)controller;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(SKUIGroupViewElement *)viewElement;
-(void)setViewElement:(SKUIGroupViewElement *)arg1 ;
-(id)indexPathForSettingDescription:(id)arg1 ;
-(void)deleteSettingDescription:(id)arg1 ;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dispatchUpdate:(id)arg1 ;
-(void)hideSettingDescription:(id)arg1 ;
-(BOOL)isSettingDescriptionHidden:(id)arg1 ;
-(void)reloadSettingDescription:(id)arg1 ;
-(void)revealSettingDescription:(id)arg1 ;
-(void)_updatedEditsValid;
-(void)addSettingDescription:(id)arg1 ;
-(void)deleteSettingsGroup;
-(void)hideSettingsGroup;
-(void)_dispatchUpdateForSettingDescription:(id)arg1 updateType:(long long)arg2 ;
-(BOOL)hasFooter;
-(void)revealSettingsGroup;
-(id)settingDescriptionAtIndex:(unsigned long long)arg1 ;
-(id)initWithParent:(id)arg1 settingsContext:(id)arg2 ;
-(void)addSettingViewElement:(id)arg1 ;
-(void)addSibling:(id)arg1 ;
-(id)editableSettingDescriptions;
-(id)footerDescription;
-(BOOL)hasEditableSettingDescriptions;
-(BOOL)hasNoVisibleSettings;
-(id)headerDescription;
-(id)newSiblingWithClass:(Class)arg1 ;
-(unsigned long long)numberOfSettings;
-(void)requestLayoutForWidth:(double)arg1 context:(id)arg2 ;
-(void)setFooterDescription:(id)arg1 ;
-(void)setFooterViewElement:(id)arg1 ;
-(void)setHeaderDescription:(id)arg1 ;
-(void)setHeaderViewElement:(id)arg1 ;
-(id)viewElementForSettingAtIndex:(unsigned long long)arg1 ;
@end

