/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class NSSet, HMHome, HFUserItem, HFItemProvider, HMMediaContentProfileAccessControl, NSArray;

@interface HUTVViewingProfilesDevicesItemModule : HFItemModule {

	NSSet* _itemProviders;
	HMHome* _home;
	HFUserItem* _sourceItem;
	HFItemProvider* _viewingProfileItemProvider;

}

@property (nonatomic,readonly) NSSet * itemProviders;                                           //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserItem * sourceItem;                                         //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,readonly) HMMediaContentProfileAccessControl * accessControl; 
@property (nonatomic,retain) HFItemProvider * viewingProfileItemProvider;                       //@synthesize viewingProfileItemProvider=_viewingProfileItemProvider - In the implementation block
@property (nonatomic,copy) NSArray * viewingProfilesDevices; 
-(NSSet *)itemProviders;
-(HFUserItem *)sourceItem;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMMediaContentProfileAccessControl *)accessControl;
-(HMHome *)home;
-(void)_createItemProviders;
-(id)_commitUpdateToAccessControl:(id)arg1 ;
-(HFItemProvider *)viewingProfileItemProvider;
-(void)setViewingProfileItemProvider:(HFItemProvider *)arg1 ;
-(void)setViewingProfilesDevices:(NSArray *)arg1 ;
-(id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 ;
-(BOOL)isTVViewingProfileDevice:(id)arg1 ;
-(NSArray *)viewingProfilesDevices;
-(void)turnOnTVViewingProfilesForAllDevices;
@end

