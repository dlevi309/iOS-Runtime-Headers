/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(void)setMaxValue:(id)arg1 ;
-(void)unionRange:(id)arg1 ;
-(NSDate *)startDate;
-(id)description;
-(void)setMinValue:(id)arg1 ;
-(unsigned long long)hash;
-(id)maxValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)unionMinValueWithRange:(id)arg1 ;
-(void)unionMaxValueWithRange:(id)arg1 ;
-(BOOL)containsValue:(id)arg1 exclusiveStart:(BOOL)arg2 exclusiveEnd:(BOOL)arg3 ;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
@end

