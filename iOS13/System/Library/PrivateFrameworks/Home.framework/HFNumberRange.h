/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSNumber, NSString;

@interface HFNumberRange : NSObject <NAIdentifiable> {

	unsigned long long _type;
	NSNumber* _maxValue;
	NSNumber* _midValue;
	NSNumber* _minValue;

}

@property (nonatomic,copy) NSNumber * maxValue;                             //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy) NSNumber * midValue;                             //@synthesize midValue=_midValue - In the implementation block
@property (nonatomic,copy) NSNumber * minValue;                             //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * spanValue; 
@property (nonatomic,readonly) SCD_Struct_HF1 floatRangeValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)valueWithValue:(id)arg1 ;
+(id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2 ;
+(id)rangeWithFloatRange:(SCD_Struct_HF1)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSNumber *)maxValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(NSNumber *)minValue;
-(void)setMinValue:(NSNumber *)arg1 ;
-(id)unionRange:(id)arg1 ;
-(void)setMidValue:(NSNumber *)arg1 ;
-(NSNumber *)midValue;
-(id)percentageValueForValue:(id)arg1 ;
-(NSNumber *)spanValue;
-(SCD_Struct_HF1)floatRangeValue;
-(id)mapValue:(id)arg1 fromRange:(id)arg2 ;
-(id)intersectRange:(id)arg1 ;
@end

