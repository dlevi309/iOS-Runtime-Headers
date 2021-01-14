/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@interface _MNDistanceFormatOptions : NSObject {

	BOOL _metric;
	BOOL _yards;
	BOOL _abbreviateUnits;
	BOOL _spoken;
	unsigned long long _minimumFractionDigits;
	unsigned long long _maximumFractionDigits;
	long long _rounding;

}

@property (assign,nonatomic) unsigned long long minimumFractionDigits;              //@synthesize minimumFractionDigits=_minimumFractionDigits - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits;              //@synthesize maximumFractionDigits=_maximumFractionDigits - In the implementation block
@property (assign,nonatomic) BOOL metric;                                           //@synthesize metric=_metric - In the implementation block
@property (assign,nonatomic) BOOL yards;                                            //@synthesize yards=_yards - In the implementation block
@property (assign,nonatomic) BOOL abbreviateUnits;                                  //@synthesize abbreviateUnits=_abbreviateUnits - In the implementation block
@property (assign,nonatomic) BOOL spoken;                                           //@synthesize spoken=_spoken - In the implementation block
@property (assign,nonatomic) long long rounding;                                    //@synthesize rounding=_rounding - In the implementation block
-(unsigned long long)maximumFractionDigits;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(long long)rounding;
-(BOOL)metric;
-(void)setRounding:(long long)arg1 ;
-(BOOL)yards;
-(void)setSpoken:(BOOL)arg1 ;
-(void)setAbbreviateUnits:(BOOL)arg1 ;
-(void)setMetric:(BOOL)arg1 ;
-(BOOL)spoken;
-(BOOL)abbreviateUnits;
-(void)setYards:(BOOL)arg1 ;
@end

