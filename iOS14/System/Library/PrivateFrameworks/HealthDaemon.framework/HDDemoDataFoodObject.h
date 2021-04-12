/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding> {

	NSString* _brandName;
	NSString* _genericName;
	long long _foodType;
	NSDictionary* _nutritionFacts;
	double _recommendedNumServings;

}

@property (nonatomic,copy) NSString * brandName;                         //@synthesize brandName=_brandName - In the implementation block
@property (nonatomic,copy) NSString * genericName;                       //@synthesize genericName=_genericName - In the implementation block
@property (assign,nonatomic) long long foodType;                         //@synthesize foodType=_foodType - In the implementation block
@property (nonatomic,copy) NSDictionary * nutritionFacts;                //@synthesize nutritionFacts=_nutritionFacts - In the implementation block
@property (assign,nonatomic) double recommendedNumServings;              //@synthesize recommendedNumServings=_recommendedNumServings - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)brandName;
-(void)setBrandName:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)foodType;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)genericName;
-(NSDictionary *)nutritionFacts;
-(double)recommendedNumServings;
-(BOOL)isEqualToHDDemoDataFoodObject:(id)arg1 ;
-(id)initWithBrandName:(id)arg1 genericName:(id)arg2 foodType:(long long)arg3 nutritionFacts:(id)arg4 ;
-(void)setGenericName:(NSString *)arg1 ;
-(void)setFoodType:(long long)arg1 ;
-(void)setNutritionFacts:(NSDictionary *)arg1 ;
-(void)setRecommendedNumServings:(double)arg1 ;
@end

