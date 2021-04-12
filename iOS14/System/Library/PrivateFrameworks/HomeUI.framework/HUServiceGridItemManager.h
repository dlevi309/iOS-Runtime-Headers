/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class NSArray;

@interface HUServiceGridItemManager : HFItemManager {

	BOOL _shouldGroupByRoom;
	BOOL _shouldShowSectionHeaders;
	/*^block*/id _itemProvidersCreator;
	NSArray* _cachedSortedRoomIdentifiers;
	NSArray* _cachedSortedRooms;

}

@property (nonatomic,copy) id itemProvidersCreator;                              //@synthesize itemProvidersCreator=_itemProvidersCreator - In the implementation block
@property (nonatomic,retain) NSArray * cachedSortedRoomIdentifiers;              //@synthesize cachedSortedRoomIdentifiers=_cachedSortedRoomIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * cachedSortedRooms;                        //@synthesize cachedSortedRooms=_cachedSortedRooms - In the implementation block
@property (assign,nonatomic) BOOL shouldGroupByRoom;                             //@synthesize shouldGroupByRoom=_shouldGroupByRoom - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSectionHeaders;                      //@synthesize shouldShowSectionHeaders=_shouldShowSectionHeaders - In the implementation block
@property (nonatomic,readonly) long long actionSetSectionIndex; 
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(BOOL)shouldShowSectionHeaders;
-(id)_itemsToHideInSet:(id)arg1 ;
-(unsigned long long)_numberOfSections;
-(void)_willUpdateSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(/*^block*/id)arg3 ;
-(void)setCachedSortedRooms:(NSArray *)arg1 ;
-(id)_sortedRooms;
-(NSArray *)cachedSortedRooms;
-(/*^block*/id)_roomComparator;
-(id)currentSectionIdentifiers;
-(id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 shouldShowSectionHeaders:(BOOL)arg3 itemProvidersCreator:(/*^block*/id)arg4 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(BOOL)arg3 shouldShowSectionHeaders:(BOOL)arg4 itemProvidersCreator:(/*^block*/id)arg5 ;
-(void)setItemProvidersCreator:(id)arg1 ;
-(id)itemProvidersCreator;
-(BOOL)shouldGroupByRoom;
-(id)_roomIdentifierForItem:(id)arg1 ;
-(void)setCachedSortedRoomIdentifiers:(NSArray *)arg1 ;
-(NSArray *)cachedSortedRoomIdentifiers;
-(long long)actionSetSectionIndex;
-(id)_sortedRoomIdentifiers;
-(void)setShouldGroupByRoom:(BOOL)arg1 ;
-(void)setShouldShowSectionHeaders:(BOOL)arg1 ;
@end

