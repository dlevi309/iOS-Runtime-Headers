/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>

@protocol HFCharacteristicValueSource;
@class HMRoom, HMHome;

@interface HFStatusItem : HFItem {

	HMRoom* _room;
	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) HMRoom * room;                                            //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
-(id)init;
-(HMHome *)home;
-(HMRoom *)room;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)filteredServicesOfTypes:(id)arg1 ;
-(id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
-(id)filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3 ;
-(id)filteredServices;
-(id)_filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2 ;
@end

