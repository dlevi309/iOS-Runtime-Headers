/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSString;

@interface TIAnalyticsFieldSpec : NSObject {

	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)stringFieldSpecWithName:(id)arg1 allowedValues:(id)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 ;
+(id)booleanFieldSpecWithName:(id)arg1 ;
+(id)stringFieldSpecWithName:(id)arg1 ;
+(id)integerFieldSpecWithName:(id)arg1 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 ;
+(id)integerFieldSpecWithName:(id)arg1 maxValue:(long long)arg2 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 maxValue:(double)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)errorFromValue:(id)arg1 code:(long long)arg2 message:(id)arg3 ;
-(id)errorFromNil;
@end

