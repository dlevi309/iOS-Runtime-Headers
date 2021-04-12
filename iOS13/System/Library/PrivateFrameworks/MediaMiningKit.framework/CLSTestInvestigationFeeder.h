/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)numberOfItems;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)approximateLocation;
-(id)allItems;
-(id)localStartDateComponents;
-(id)localEndDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

