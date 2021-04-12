/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCharacteristicRequest.h>

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest {

	id _value;

}

@property (nonatomic,readonly) id value;              //@synthesize value=_value - In the implementation block
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

