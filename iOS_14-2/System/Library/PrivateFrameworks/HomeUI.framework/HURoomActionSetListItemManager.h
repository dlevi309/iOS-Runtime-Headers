/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class NSArray;

@interface HURoomActionSetListItemManager : HFItemManager {

	NSArray* _cachedSortedRooms;

}

@property (nonatomic,retain) NSArray * cachedSortedRooms;              //@synthesize cachedSortedRooms=_cachedSortedRooms - In the implementation block
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfSections;
-(void)_willUpdateSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_currentSectionIdentifiers;
-(void)setCachedSortedRooms:(NSArray *)arg1 ;
-(id)_sortedRooms;
-(NSArray *)cachedSortedRooms;
-(/*^block*/id)_roomComparator;
-(long long)sectionIndexForRoomIdentifier:(id)arg1 ;
@end

