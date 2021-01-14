/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class NSArray, HFStaticItem, HFAccessorySettingItem;

@interface HUPlaybackInfluencesItemManager : HFItemManager {

	NSArray* _playbackInfluencesOptionItems;
	HFStaticItem* _selectedItem;
	HFStaticItem* _useListeningHistoryItem;

}

@property (nonatomic,retain) HFStaticItem * useListeningHistoryItem;                 //@synthesize useListeningHistoryItem=_useListeningHistoryItem - In the implementation block
@property (nonatomic,readonly) NSArray * playbackInfluencesOptionItems;              //@synthesize playbackInfluencesOptionItems=_playbackInfluencesOptionItems - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingItem * settingItem; 
@property (nonatomic,retain) HFStaticItem * selectedItem;                            //@synthesize selectedItem=_selectedItem - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(HFStaticItem *)selectedItem;
-(void)setSelectedItem:(HFStaticItem *)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 settingItem:(id)arg2 ;
-(id)updateUseListeningHistorySetting:(BOOL)arg1 ;
-(HFAccessorySettingItem *)settingItem;
-(id)playbackInfluencesSetting;
-(BOOL)playbackInfluencesFollowUser;
-(void)setUseListeningHistoryItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)useListeningHistoryItem;
-(NSArray *)playbackInfluencesOptionItems;
@end

