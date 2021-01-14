/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSString;

@interface TIAnalyticsFieldSpec : NSObject {

	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)booleanFieldSpecWithName:(id)arg1 ;
+(id)integerFieldSpecWithName:(id)arg1 ;
+(id)integerFieldSpecWithName:(id)arg1 maxValue:(long long)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 maxValue:(double)arg2 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3 ;
+(id)stringFieldSpecWithName:(id)arg1 allowedValues:(id)arg2 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 significantDigits:(id)arg4 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 significantDigits:(id)arg4 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 ;
+(id)stringFieldSpecWithName:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)errorFromNil;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)errorFromValue:(id)arg1 code:(long long)arg2 message:(id)arg3 ;
@end

