/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFServiceLikeItem, HFCharacteristicValueSource;
@class HMHome, HMRoom, HFItem, NSMutableSet;

@interface HFActionSetItemProvider : HFItemProvider {

	BOOL _onlyShowsFavorites;
	HMHome* _home;
	HMRoom* _room;
	/*^block*/id _filter;
	unsigned long long _actionSetItemStyle;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	NSMutableSet* _actionSetItems;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * actionSetItems;                                    //@synthesize actionSetItems=_actionSetItems - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMRoom * room;                                                    //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;                                          //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSetItemStyle;                          //@synthesize actionSetItemStyle=_actionSetItemStyle - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource; 
@property (nonatomic,copy) HFItem*<HFServiceLikeItem> serviceLikeItem;                         //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(HMRoom *)room;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(void)setRoom:(HMRoom *)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 ;
-(unsigned long long)actionSetItemStyle;
-(NSMutableSet *)actionSetItems;
-(void)setServiceLikeItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(/*^block*/id)_roomFilter;
-(/*^block*/id)_favoriteFilter;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(void)setActionSetItems:(NSMutableSet *)arg1 ;
@end

