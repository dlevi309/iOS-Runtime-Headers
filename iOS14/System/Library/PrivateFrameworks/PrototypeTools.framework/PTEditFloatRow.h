/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@interface PTEditFloatRow : PTSRow {

	unsigned long long _precision;
	double _minValue;
	double _maxValue;

}

@property (assign,nonatomic) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) double minValue;                           //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                           //@synthesize maxValue=_maxValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)tableViewCellClass;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(id)precision:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)between:(double)arg1 and:(double)arg2 ;
-(double)maxValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minValue;
-(BOOL)isEqual:(id)arg1 ;
-(id)_validatedValue:(id)arg1 ;
@end

