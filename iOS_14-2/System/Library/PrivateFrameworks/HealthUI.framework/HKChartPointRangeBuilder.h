/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@interface HKChartPointRangeBuilder : NSObject {

	double _uMax;
	double _uMin;
	double _vMax;
	double _vMin;
	double _maximumMax;
	double _minimumMin;
	long long _numChartPoints;

}

@property (assign,nonatomic) double uMax;                           //@synthesize uMax=_uMax - In the implementation block
@property (assign,nonatomic) double uMin;                           //@synthesize uMin=_uMin - In the implementation block
@property (assign,nonatomic) double vMax;                           //@synthesize vMax=_vMax - In the implementation block
@property (assign,nonatomic) double vMin;                           //@synthesize vMin=_vMin - In the implementation block
@property (assign,nonatomic) double maximumMax;                     //@synthesize maximumMax=_maximumMax - In the implementation block
@property (assign,nonatomic) double minimumMin;                     //@synthesize minimumMin=_minimumMin - In the implementation block
@property (assign,nonatomic) long long numChartPoints;              //@synthesize numChartPoints=_numChartPoints - In the implementation block
-(double)uMax;
-(double)uMin;
-(double)vMax;
-(double)vMin;
-(id)init;
-(void)setUMax:(double)arg1 ;
-(void)setUMin:(double)arg1 ;
-(void)setVMax:(double)arg1 ;
-(void)setVMin:(double)arg1 ;
-(id)suggestedValueRangeWithRounding:(BOOL)arg1 ;
-(void)visitChartPoint:(id)arg1 ;
-(double)maximumMax;
-(void)setMaximumMax:(double)arg1 ;
-(double)minimumMin;
-(void)setMinimumMin:(double)arg1 ;
-(long long)numChartPoints;
-(void)setNumChartPoints:(long long)arg1 ;
@end

