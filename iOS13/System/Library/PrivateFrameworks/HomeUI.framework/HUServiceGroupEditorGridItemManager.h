/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceGridItemManager.h>

@class HFServiceGroupBuilder, NSSet;

@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager {

	HFServiceGroupBuilder* _serviceGroupBuilder;
	NSSet* _prioritizedRooms;

}

@property (nonatomic,retain) NSSet * prioritizedRooms;                                   //@synthesize prioritizedRooms=_prioritizedRooms - In the implementation block
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;              //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
-(id)_itemsToHideInSet:(id)arg1 ;
-(BOOL)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(/*^block*/id)arg3 ;
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(/*^block*/id)_roomComparator;
-(id)initWithServiceGroupBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setPrioritizedRooms:(NSSet *)arg1 ;
-(NSSet *)prioritizedRooms;
@end

