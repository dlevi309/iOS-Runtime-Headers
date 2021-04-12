/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory;

@interface HFAccessoryBatteryLevelItem : HFItem <NSCopying> {

	HMAccessory* _accessory;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMAccessory *)accessory;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)initWithAccessory:(id)arg1 valueSource:(id)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

