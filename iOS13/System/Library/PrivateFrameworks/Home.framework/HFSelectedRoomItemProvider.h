/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFServiceLikeBuilder;
@class HMHome, HFItemBuilder, HFRoomBuilderItem;

@interface HFSelectedRoomItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;
	HFRoomBuilderItem* _roomBuilderItem;

}

@property (nonatomic,retain) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;              //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
@property (nonatomic,retain) HFRoomBuilderItem * roomBuilderItem;                                  //@synthesize roomBuilderItem=_roomBuilderItem - In the implementation block
@property (nonatomic,copy) id filter;                                                              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithHome:(id)arg1 serviceLikeBuilder:(id)arg2 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(HFRoomBuilderItem *)roomBuilderItem;
-(void)setRoomBuilderItem:(HFRoomBuilderItem *)arg1 ;
-(void)setServiceLikeBuilder:(HFItemBuilder*<HFServiceLikeBuilder>)arg1 ;
@end

