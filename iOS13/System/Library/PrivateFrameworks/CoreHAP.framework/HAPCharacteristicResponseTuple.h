/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSNumber, NSDate, NSError;

@interface HAPCharacteristicResponseTuple : HMFObject {

	HAPCharacteristic* _characteristic;
	id _value;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;
	NSError* _error;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                          //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSDate * valueUpdatedTime;                       //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(NSDate *)valueUpdatedTime;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)stateNumber;
@end

