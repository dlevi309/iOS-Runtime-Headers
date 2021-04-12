/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray;

@interface HKStackedBarCoordinate : HKMinMaxCoordinate {

	NSArray* _stackPoints;

}

@property (nonatomic,copy) NSArray * stackPoints;              //@synthesize stackPoints=_stackPoints - In the implementation block
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(NSArray *)stackPoints;
-(id)initWithStackPoints:(id)arg1 userInfo:(id)arg2 ;
-(void)setStackPoints:(NSArray *)arg1 ;
@end

