/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setValue:(id)arg1 ;
-(NSDate *)valueUpdatedTime;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(id)value;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
@end

