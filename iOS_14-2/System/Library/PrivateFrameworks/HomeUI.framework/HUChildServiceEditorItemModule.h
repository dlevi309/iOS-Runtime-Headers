/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HFServiceLikeItem;
@class NSSet, HFItem, HFServiceItemProvider, HMHome, HMAccessory;

@interface HUChildServiceEditorItemModule : HFItemModule {

	NSSet* _itemProviders;
	HFItem*<HFServiceLikeItem> _sourceItem;
	HFServiceItemProvider* _childServiceItemProvider;
	unsigned long long _editingMode;
	HMHome* _home;

}

@property (nonatomic,readonly) HMAccessory * accessory; 
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> sourceItem;                       //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,retain) HFServiceItemProvider * childServiceItemProvider;              //@synthesize childServiceItemProvider=_childServiceItemProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long editingMode;                              //@synthesize editingMode=_editingMode - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                               //@synthesize home=_home - In the implementation block
+(id)supportedServiceTypes;
+(/*^block*/id)childItemComparator;
-(HMAccessory *)accessory;
-(unsigned long long)editingMode;
-(id)itemProviders;
-(HFItem*<HFServiceLikeItem>)sourceItem;
-(HMHome *)home;
-(id)_createItemProviders;
-(HFServiceItemProvider *)childServiceItemProvider;
-(BOOL)canToggleConfigurationStateForItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 mode:(unsigned long long)arg4 ;
-(void)setChildServiceItemProvider:(HFServiceItemProvider *)arg1 ;
-(id)_isConfiguredControlItemForItem:(id)arg1 ;
-(long long)configurationStateForItem:(id)arg1 ;
-(id)toggleConfigurationStateForItem:(id)arg1 ;
@end

