/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray, NSNumber;

@interface HKSleepDurationCoordinate : HKMinMaxCoordinate {

	BOOL _highlighted;
	NSArray* _stackPoints;
	NSNumber* _goalLineYValue;

}

@property (nonatomic,copy) NSArray * stackPoints;                  //@synthesize stackPoints=_stackPoints - In the implementation block
@property (nonatomic,copy) NSNumber * goalLineYValue;              //@synthesize goalLineYValue=_goalLineYValue - In the implementation block
@property (nonatomic,readonly) BOOL highlighted;                   //@synthesize highlighted=_highlighted - In the implementation block
-(BOOL)highlighted;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(NSArray *)stackPoints;
-(id)initWithStackPoints:(id)arg1 goalLineYValue:(id)arg2 highlighted:(BOOL)arg3 userInfo:(id)arg4 ;
-(void)setStackPoints:(NSArray *)arg1 ;
-(NSNumber *)goalLineYValue;
-(void)setGoalLineYValue:(NSNumber *)arg1 ;
@end

