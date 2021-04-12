/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
+(void)initialize;
-(id)initWithItems:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(unsigned long long)numberOfItems;
-(id)localStartDateComponents;
-(id)approximateLocation;
-(id)localEndDateComponents;
@end

