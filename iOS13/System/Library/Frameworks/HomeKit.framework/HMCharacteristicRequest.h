/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

