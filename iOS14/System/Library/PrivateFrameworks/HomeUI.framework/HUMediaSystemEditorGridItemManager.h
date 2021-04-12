/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceGridItemManager.h>

@class HFMediaSystemBuilder, NSSet;

@interface HUMediaSystemEditorGridItemManager : HUServiceGridItemManager {

	HFMediaSystemBuilder* _mediaSystemBuilder;
	NSSet* _prioritizedRooms;

}

@property (nonatomic,retain) NSSet * prioritizedRooms;                                 //@synthesize prioritizedRooms=_prioritizedRooms - In the implementation block
@property (nonatomic,readonly) HFMediaSystemBuilder * mediaSystemBuilder;              //@synthesize mediaSystemBuilder=_mediaSystemBuilder - In the implementation block
+(/*^block*/id)defaultItemProviderCreatorForMediaSystemBuilder:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(/*^block*/id)arg3 ;
-(/*^block*/id)_roomComparator;
-(HFMediaSystemBuilder *)mediaSystemBuilder;
-(id)initWithMediaSystemBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setPrioritizedRooms:(NSSet *)arg1 ;
-(NSSet *)prioritizedRooms;
@end

