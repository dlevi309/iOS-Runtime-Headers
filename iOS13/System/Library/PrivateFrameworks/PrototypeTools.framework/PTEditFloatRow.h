/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(id)precision:(unsigned long long)arg1 ;
-(id)between:(double)arg1 and:(double)arg2 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(id)_validatedValue:(id)arg1 ;
@end

