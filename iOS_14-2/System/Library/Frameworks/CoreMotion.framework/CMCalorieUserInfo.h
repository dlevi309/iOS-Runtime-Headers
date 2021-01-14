/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL fBetaBlockerUse;

}

@property (nonatomic,readonly) long long gender; 
@property (nonatomic,readonly) double age; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) long long condition; 
@property (nonatomic,readonly) BOOL betaBlockerUse; 
+(BOOL)supportsSecureCoding;
+(id)genderString:(long long)arg1 ;
-(BOOL)betaBlockerUse;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5 betaBlockerUse:(BOOL)arg6 ;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 ;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)height;
-(double)weight;
-(id)description;
-(long long)condition;
-(id)initWithCoder:(id)arg1 ;
-(long long)gender;
-(double)age;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

