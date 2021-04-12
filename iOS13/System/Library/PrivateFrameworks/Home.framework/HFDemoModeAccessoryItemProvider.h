/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFDemoModeAccessoryItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSSet* _demoItems;

}

@property (nonatomic,retain) HMHome * home;                  //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSSet * demoItems;              //@synthesize demoItems=_demoItems - In the implementation block
@property (nonatomic,copy) id filter;                        //@synthesize filter=_filter - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(NSSet *)demoItems;
-(void)setDemoItems:(NSSet *)arg1 ;
@end

