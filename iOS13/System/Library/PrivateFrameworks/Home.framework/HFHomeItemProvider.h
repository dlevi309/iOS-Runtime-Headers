/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHomeManager* _homeManager;
	NSMutableSet* _homeItems;

}

@property (nonatomic,retain) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * homeItems;                 //@synthesize homeItems=_homeItems - In the implementation block
@property (nonatomic,copy) id filter;                                  //@synthesize filter=_filter - In the implementation block
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(id)invalidationReasons;
-(NSMutableSet *)homeItems;
-(void)setHomeItems:(NSMutableSet *)arg1 ;
@end

