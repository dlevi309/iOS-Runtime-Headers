/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setStackPoints:(NSArray *)arg1 ;
-(id)initWithStackPoints:(id)arg1 userInfo:(id)arg2 ;
@end

