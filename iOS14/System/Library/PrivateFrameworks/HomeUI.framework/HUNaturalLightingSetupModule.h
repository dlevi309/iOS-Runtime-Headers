/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HUNaturalLightingSetupModuleDelegate;
@class NSSet, NSNumber, HMHome, HFAccessoryItemProvider, HFServiceItemProvider, HFServiceGroupItemProvider;

@interface HUNaturalLightingSetupModule : HFItemModule {

	NSSet* _itemProviders;
	id<HUNaturalLightingSetupModuleDelegate> _delegate;
	/*^block*/id _filter;
	NSNumber* _defaultSelectedValue;
	HMHome* _home;
	HFAccessoryItemProvider* _accessoryItemProvider;
	HFServiceItemProvider* _serviceItemProvider;
	HFServiceGroupItemProvider* _serviceGroupItemProvider;

}

@property (nonatomic,retain) HMHome * home;                                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HFAccessoryItemProvider * accessoryItemProvider;                       //@synthesize accessoryItemProvider=_accessoryItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceItemProvider * serviceItemProvider;                           //@synthesize serviceItemProvider=_serviceItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceGroupItemProvider * serviceGroupItemProvider;                 //@synthesize serviceGroupItemProvider=_serviceGroupItemProvider - In the implementation block
@property (assign,nonatomic,__weak) id<HUNaturalLightingSetupModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id filter;                                                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSNumber * defaultSelectedValue;                                       //@synthesize defaultSelectedValue=_defaultSelectedValue - In the implementation block
+(BOOL)showNaturalLightingContainingHomeKitObject:(id)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id<HUNaturalLightingSetupModuleDelegate>)delegate;
-(id)commitSelectedItems;
-(id)selectedItems;
-(void)setDelegate:(id<HUNaturalLightingSetupModuleDelegate>)arg1 ;
-(id)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)_buildItemProviders;
-(void)setServiceItemProvider:(HFServiceItemProvider *)arg1 ;
-(HFServiceItemProvider *)serviceItemProvider;
-(void)setAccessoryItemProvider:(HFAccessoryItemProvider *)arg1 ;
-(void)setServiceGroupItemProvider:(HFServiceGroupItemProvider *)arg1 ;
-(HFAccessoryItemProvider *)accessoryItemProvider;
-(HFServiceGroupItemProvider *)serviceGroupItemProvider;
-(NSNumber *)defaultSelectedValue;
-(void)setDefaultSelectedValue:(NSNumber *)arg1 ;
-(id)initWithHome:(id)arg1 itemUpdater:(id)arg2 ;
-(void)toggleSelectedForItem:(id)arg1 ;
@end

