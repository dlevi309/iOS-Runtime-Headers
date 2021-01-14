/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HUTriggerListHeadlineItem, HUTriggerListSubheadlineItem, HUAddTriggerItem, HFStaticItemProvider, HUTriggerItemProvider;

@interface HUTriggerListItemManager : HFItemManager {

	HUTriggerListHeadlineItem* _headlineItem;
	HUTriggerListSubheadlineItem* _subheadlineItem;
	HUAddTriggerItem* _addTriggerItem;
	HFStaticItemProvider* _staticItemProvider;
	HUTriggerItemProvider* _triggerItemProvider;

}

@property (nonatomic,retain) HUTriggerListHeadlineItem * headlineItem;                    //@synthesize headlineItem=_headlineItem - In the implementation block
@property (nonatomic,retain) HUTriggerListSubheadlineItem * subheadlineItem;              //@synthesize subheadlineItem=_subheadlineItem - In the implementation block
@property (nonatomic,retain) HUAddTriggerItem * addTriggerItem;                           //@synthesize addTriggerItem=_addTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                   //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HUTriggerItemProvider * triggerItemProvider;                 //@synthesize triggerItemProvider=_triggerItemProvider - In the implementation block
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfSections;
-(HUTriggerListHeadlineItem *)headlineItem;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_currentSectionIdentifiers;
-(void)setHeadlineItem:(HUTriggerListHeadlineItem *)arg1 ;
-(void)setSubheadlineItem:(HUTriggerListSubheadlineItem *)arg1 ;
-(HUTriggerListSubheadlineItem *)subheadlineItem;
-(void)setAddTriggerItem:(HUAddTriggerItem *)arg1 ;
-(HUAddTriggerItem *)addTriggerItem;
-(HUTriggerItemProvider *)triggerItemProvider;
-(void)setTriggerItemProvider:(HUTriggerItemProvider *)arg1 ;
@end

