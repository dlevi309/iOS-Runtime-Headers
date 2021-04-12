/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
-(id)initWithItems:(id)arg1 ;
-(id)universalEndDate;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(id)universalStartDate;
-(unsigned long long)numberOfItems;
-(id)localStartDateComponents;
-(id)approximateLocation;
-(id)localEndDateComponents;
@end

