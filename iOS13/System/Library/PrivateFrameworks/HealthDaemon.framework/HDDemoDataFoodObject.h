/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)brandName;
-(void)setBrandName:(NSString *)arg1 ;
-(NSString *)genericName;
-(long long)foodType;
-(NSDictionary *)nutritionFacts;
-(double)recommendedNumServings;
-(BOOL)isEqualToHDDemoDataFoodObject:(id)arg1 ;
-(id)initWithBrandName:(id)arg1 genericName:(id)arg2 foodType:(long long)arg3 nutritionFacts:(id)arg4 ;
-(void)setGenericName:(NSString *)arg1 ;
-(void)setFoodType:(long long)arg1 ;
-(void)setNutritionFacts:(NSDictionary *)arg1 ;
-(void)setRecommendedNumServings:(double)arg1 ;
@end

