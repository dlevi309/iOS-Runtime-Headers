/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristic;

@interface HMDCharacteristicRequest : HMFObject {

	HMDCharacteristic* _characteristic;
	id _previousValue;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id previousValue;                                //@synthesize previousValue=_previousValue - In the implementation block
+(id)requestWithCharacteristic:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)previousValue;
-(HMDCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 ;
@end

