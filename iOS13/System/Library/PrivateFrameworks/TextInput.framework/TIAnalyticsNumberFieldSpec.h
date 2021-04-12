/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSNumber;

@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec {

	BOOL _isInteger;
	NSNumber* _minValue;
	NSNumber* _maxValue;

}

@property (nonatomic,readonly) BOOL isInteger;                   //@synthesize isInteger=_isInteger - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxValue;              //@synthesize maxValue=_maxValue - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)maxValue;
-(id)initWithName:(id)arg1 isInteger:(BOOL)arg2 minValue:(id)arg3 maxValue:(id)arg4 ;
-(BOOL)isInteger;
-(NSNumber *)minValue;
@end

