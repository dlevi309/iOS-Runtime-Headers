/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemProvider.h>

@class HFAccessoryBrowsingManager, NSMutableSet;

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider {

	HFAccessoryBrowsingManager* _accessoryBrowsingManager;
	/*^block*/id _filter;
	NSMutableSet* _discoveredAccessoryItems;

}

@property (nonatomic,retain) NSMutableSet * discoveredAccessoryItems;                              //@synthesize discoveredAccessoryItems=_discoveredAccessoryItems - In the implementation block
@property (nonatomic,readonly) HFAccessoryBrowsingManager * accessoryBrowsingManager;              //@synthesize accessoryBrowsingManager=_accessoryBrowsingManager - In the implementation block
@property (nonatomic,copy) id filter;                                                              //@synthesize filter=_filter - In the implementation block
-(id)init;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithAccessoryBrowsingManager:(id)arg1 ;
-(HFAccessoryBrowsingManager *)accessoryBrowsingManager;
-(NSMutableSet *)discoveredAccessoryItems;
-(void)setDiscoveredAccessoryItems:(NSMutableSet *)arg1 ;
@end

