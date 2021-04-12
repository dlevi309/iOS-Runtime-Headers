/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/HMCharacteristicEventProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMNumberRange, HMCharacteristic, NSString;

@interface HMCharacteristicThresholdRangeEvent : HMEvent <HMCharacteristicEventProtocol, NSSecureCoding, NSCopying, NSMutableCopying> {

	HMNumberRange* _thresholdRange;
	HMCharacteristic* _characteristic;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;                //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy,readonly) HMNumberRange * thresholdRange;              //@synthesize thresholdRange=_thresholdRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)isSupportedForHome:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMCharacteristic *)characteristic;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(HMNumberRange *)thresholdRange;
-(id)initWithDict:(id)arg1 characteristic:(id)arg2 thresholdRange:(id)arg3 ;
-(void)setThresholdRange:(HMNumberRange *)arg1 ;
-(void)_updateThresholdRange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2 ;
-(void)updateThresholdRange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

