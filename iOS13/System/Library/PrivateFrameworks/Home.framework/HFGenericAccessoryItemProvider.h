/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFGenericAccessoryItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _genericItems;

}

@property (nonatomic,retain) NSMutableSet * genericItems;              //@synthesize genericItems=_genericItems - In the implementation block
@property (nonatomic,copy) id filter;                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                          //@synthesize home=_home - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(BOOL)_isAccessorySupported:(id)arg1 ;
-(NSMutableSet *)genericItems;
-(void)setGenericItems:(NSMutableSet *)arg1 ;
@end

