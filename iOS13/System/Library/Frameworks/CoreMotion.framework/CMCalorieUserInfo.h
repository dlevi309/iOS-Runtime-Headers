/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMCalorieUserInfo : CMLogItem {

	double fAge;
	long long fGender;
	double fHeight;
	double fWeight;
	long long fCondition;

}

@property (nonatomic,readonly) long long gender; 
@property (nonatomic,readonly) double age; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) long long condition; 
+(BOOL)supportsSecureCoding;
+(id)genderString:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)condition;
-(double)height;
-(double)weight;
-(double)age;
-(long long)gender;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5 ;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 ;
@end

