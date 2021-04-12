/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)dump;
-(NSNumber *)minLength;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(NSNumber *)maxLength;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(void)setMinLength:(NSNumber *)arg1 ;
-(NSNumber *)maxValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(NSNumber *)minValue;
-(void)setMinValue:(NSNumber *)arg1 ;
-(NSArray *)validValues;
-(id)generateDictionary;
-(id)initWithMinLength:(id)arg1 maxLength:(id)arg2 ;
-(id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 validValues:(id)arg4 ;
@end

