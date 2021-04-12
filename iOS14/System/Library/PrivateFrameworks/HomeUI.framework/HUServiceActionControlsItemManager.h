/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFServiceActionItem, HFControlPanelItemProvider;

@interface HUServiceActionControlsItemManager : HFItemManager {

	HFServiceActionItem* _serviceActionItem;
	unsigned long long _mode;
	HFControlPanelItemProvider* _controlPanelItemProvider;

}

@property (nonatomic,retain) HFServiceActionItem * serviceActionItem;                            //@synthesize serviceActionItem=_serviceActionItem - In the implementation block
@property (nonatomic,retain) HFControlPanelItemProvider * controlPanelItemProvider;              //@synthesize controlPanelItemProvider=_controlPanelItemProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                          //@synthesize mode=_mode - In the implementation block
-(unsigned long long)mode;
-(id)_sectionIdentifiers;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(unsigned long long)_numberOfSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setServiceActionItem:(HFServiceActionItem *)arg1 ;
-(HFServiceActionItem *)serviceActionItem;
-(void)setControlPanelItemProvider:(HFControlPanelItemProvider *)arg1 ;
-(id)_actionControlsDelegate;
-(HFControlPanelItemProvider *)controlPanelItemProvider;
-(id)_sectionIdentifierForControlPanelItem:(id)arg1 ;
-(id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
@end

