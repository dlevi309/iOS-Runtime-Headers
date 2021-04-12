/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMHome, NSMutableSet, NSArray;

@interface HFServiceItemProvider : HFItemProvider {

	HMHome* _home;
	/*^block*/id _filter;
	/*^block*/id _sourceServiceGenerator;
	NSMutableSet* _serviceItems;
	NSArray* _serviceTypes;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * serviceItems;                                      //@synthesize serviceItems=_serviceItems - In the implementation block
@property (nonatomic,retain) NSArray * serviceTypes;                                           //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id sourceServiceGenerator;                                          //@synthesize sourceServiceGenerator=_sourceServiceGenerator - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource; 
+(id)standardServices;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(NSArray *)serviceTypes;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(void)setServiceTypes:(NSArray *)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(void)setServiceItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)serviceItems;
-(id)initWithHome:(id)arg1 serviceTypes:(id)arg2 ;
-(id)sourceServiceGenerator;
-(void)setSourceServiceGenerator:(id)arg1 ;
@end

