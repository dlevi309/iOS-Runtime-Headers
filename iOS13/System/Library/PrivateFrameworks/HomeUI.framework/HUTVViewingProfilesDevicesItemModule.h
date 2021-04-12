/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMMediaContentProfileAccessControl *)accessControl;
-(HMHome *)home;
-(NSSet *)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFUserItem *)sourceItem;
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

