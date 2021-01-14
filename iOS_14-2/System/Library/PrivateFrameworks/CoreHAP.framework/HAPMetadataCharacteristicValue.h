/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSArray;

@interface HAPMetadataCharacteristicValue : HMFObject {

	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _stepValue;
	NSNumber* _minLength;
	NSNumber* _maxLength;
	NSArray* _validValues;

}

@property (nonatomic,retain) NSNumber * minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * minLength;                 //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) NSArray * validValues;              //@synthesize validValues=_validValues - In the implementation block
+(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)stepValue;
-(id)generateDictionary;
-(void)setStepValue:(NSNumber *)arg1 ;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(void)dump;
-(void)setMinLength:(NSNumber *)arg1 ;
-(NSNumber *)maxLength;
-(NSArray *)validValues;
-(NSNumber *)minLength;
-(id)description;
-(id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 validValues:(id)arg4 ;
-(void)setMinValue:(NSNumber *)arg1 ;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSNumber *)maxValue;
-(NSNumber *)minValue;
-(id)initWithMinLength:(id)arg1 maxLength:(id)arg2 ;
@end

