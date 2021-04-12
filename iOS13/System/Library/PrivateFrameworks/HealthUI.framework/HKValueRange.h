/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface HKValueRange : NSObject <NSCopying> {

	id _minValue;
	id _maxValue;

}

@property (nonatomic,copy) id minValue;                         //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id maxValue;                         //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)containsValue:(id)arg1 ;
-(id)maxValue;
-(void)setMaxValue:(id)arg1 ;
-(id)minValue;
-(void)setMinValue:(id)arg1 ;
-(void)unionRange:(id)arg1 ;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
-(void)unionMinValueWithRange:(id)arg1 ;
-(void)unionMaxValueWithRange:(id)arg1 ;
@end

