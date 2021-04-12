/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUQuickControlCollectionItemManaging.h>

@protocol HFServiceLikeItem;
@class HFItemProvider, HFAccessoryControlItem, HFItem, NSSet, HFServiceItemProvider, NSMapTable, NSString;

@interface HUQuickControlGridCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging> {

	HFItemProvider* _supplementaryItemProvider;
	HFItemProvider* _overflowItemProvider;
	HFAccessoryControlItem* _accessoryControlItem;
	HFItem*<HFServiceLikeItem> _sourceServiceLikeItem;
	NSSet* _controlItems;
	HFServiceItemProvider* _serviceItemProvider;
	HFItemProvider* _controlItemProvider;
	NSMapTable* _controlItemToViewControllerTable;

}

@property (nonatomic,copy) HFAccessoryControlItem * accessoryControlItem;                   //@synthesize accessoryControlItem=_accessoryControlItem - In the implementation block
@property (nonatomic,retain) HFItem*<HFServiceLikeItem> sourceServiceLikeItem;              //@synthesize sourceServiceLikeItem=_sourceServiceLikeItem - In the implementation block
@property (nonatomic,retain) NSSet * controlItems;                                          //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,retain) HFServiceItemProvider * serviceItemProvider;                   //@synthesize serviceItemProvider=_serviceItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * controlItemProvider;                          //@synthesize controlItemProvider=_controlItemProvider - In the implementation block
@property (nonatomic,retain) NSMapTable * controlItemToViewControllerTable;                 //@synthesize controlItemToViewControllerTable=_controlItemToViewControllerTable - In the implementation block
@property (nonatomic,readonly) HFItemProvider * supplementaryItemProvider;                  //@synthesize supplementaryItemProvider=_supplementaryItemProvider - In the implementation block
@property (nonatomic,readonly) HFItemProvider * overflowItemProvider;                       //@synthesize overflowItemProvider=_overflowItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)serviceItemComparator;
+(unsigned long long)specialCaseSectionSortingForControlItem:(id)arg1 viewController:(id)arg2 fromControlItems:(id)arg3 primaryServiceType:(id)arg4 ;
+(unsigned long long)preferredControlForControlItem:(id)arg1 allControlItems:(id)arg2 isSupplementary:(BOOL)arg3 ;
+(BOOL)isPrimaryOrBinaryStateControlItem:(id)arg1 ;
-(id)configuration;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(NSSet *)controlItems;
-(id)sourceItem;
-(void)setControlItems:(NSSet *)arg1 ;
-(id)viewControllerForItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 controlItems:(id)arg2 ;
-(HFAccessoryControlItem *)accessoryControlItem;
-(void)setControlItemProvider:(HFItemProvider *)arg1 ;
-(void)setServiceItemProvider:(HFServiceItemProvider *)arg1 ;
-(HFServiceItemProvider *)serviceItemProvider;
-(HFItemProvider *)controlItemProvider;
-(NSMapTable *)controlItemToViewControllerTable;
-(id)_generateViewControllersForControlItems:(id)arg1 ;
-(BOOL)_catchAllLayoutForGridViewProfiles:(id)arg1 supplementaryViewProfiles:(id)arg2 ;
-(id)_composeIdentifierForService:(id)arg1 section:(unsigned long long)arg2 ;
-(id)titleForItem:(id)arg1 ;
-(id)gridItemProvider;
-(HFItemProvider *)supplementaryItemProvider;
-(HFItemProvider *)overflowItemProvider;
-(void)setAccessoryControlItem:(HFAccessoryControlItem *)arg1 ;
-(HFItem*<HFServiceLikeItem>)sourceServiceLikeItem;
-(void)setSourceServiceLikeItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(void)setControlItemToViewControllerTable:(NSMapTable *)arg1 ;
@end

