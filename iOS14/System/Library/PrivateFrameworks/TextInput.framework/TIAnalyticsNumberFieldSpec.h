/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSNumber;

@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec {

	BOOL _isInteger;
	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _significantDigits;

}

@property (nonatomic,readonly) BOOL isInteger;                            //@synthesize isInteger=_isInteger - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue;                       //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxValue;                       //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) NSNumber * significantDigits;              //@synthesize significantDigits=_significantDigits - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 isInteger:(BOOL)arg2 minValue:(id)arg3 maxValue:(id)arg4 significantDigits:(id)arg5 ;
-(NSNumber *)significantDigits;
-(BOOL)isInteger;
-(NSNumber *)maxValue;
-(NSNumber *)minValue;
@end

