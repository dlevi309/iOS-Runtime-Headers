/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMCharacteristic;

@interface HMCharacteristicRequest : NSObject {

	HMCharacteristic* _characteristic;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
-(HMCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 ;
@end

