/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCharacteristicRequest.h>

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest {

	id _value;

}

@property (nonatomic,readonly) id value;              //@synthesize value=_value - In the implementation block
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)value;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 ;
@end

