/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HAPMetadataConstraints : HMFObject <NSCopying, NSSecureCoding> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _minLength;
	NSNumber* _maxLength;
	NSArray* _validValues;

}

@property (nonatomic,retain) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * minLength;                 //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSArray * validValues;                  //@synthesize validValues=_validValues - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)stepValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(void)setMinLength:(NSNumber *)arg1 ;
-(NSNumber *)maxLength;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)validValues;
-(NSNumber *)minLength;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)minimumValue;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(void)setValidValues:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(BOOL)isEqualToMetadataConstraints:(id)arg1 ;
@end

