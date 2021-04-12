/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDelegate:(id)arg1 ;
-(void)setSelectedItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)selectedItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 settingItem:(id)arg2 ;
-(id)updateUseListeningHistorySetting:(BOOL)arg1 ;
-(HFAccessorySettingItem *)settingItem;
-(id)playbackInfluencesSetting;
-(BOOL)playbackInfluencesFollowUser;
-(void)setUseListeningHistoryItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)useListeningHistoryItem;
-(NSArray *)playbackInfluencesOptionItems;
@end

