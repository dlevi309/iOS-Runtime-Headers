/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@interface PTSliderRow : PTSRow {

	double _minValue;
	double _maxValue;

}

@property (assign,nonatomic) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;              //@synthesize maxValue=_maxValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)tableViewCellClass;
-(void)setMaxValue:(double)arg1 ;
-(id)init;
-(id)minValue:(double)arg1 maxValue:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)maxValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minValue;
-(BOOL)isEqual:(id)arg1 ;
@end

