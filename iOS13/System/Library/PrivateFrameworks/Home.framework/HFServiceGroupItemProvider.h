/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMHome, NSMutableSet;

@interface HFServiceGroupItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _serviceGroupItems;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * serviceGroupItems;                                 //@synthesize serviceGroupItems=_serviceGroupItems - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource; 
@property (nonatomic,readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(NSMutableSet *)serviceGroupItems;
-(void)setServiceGroupItems:(NSMutableSet *)arg1 ;
@end

