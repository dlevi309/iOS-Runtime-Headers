/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class NSArray;

@interface HURoomActionSetListItemManager : HFItemManager {

	NSArray* _cachedSortedRooms;

}

@property (nonatomic,retain) NSArray * cachedSortedRooms;              //@synthesize cachedSortedRooms=_cachedSortedRooms - In the implementation block
-(unsigned long long)_numberOfSections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)_willUpdateSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_currentSectionIdentifiers;
-(void)setCachedSortedRooms:(NSArray *)arg1 ;
-(id)_sortedRooms;
-(NSArray *)cachedSortedRooms;
-(/*^block*/id)_roomComparator;
-(long long)sectionIndexForRoomIdentifier:(id)arg1 ;
@end

