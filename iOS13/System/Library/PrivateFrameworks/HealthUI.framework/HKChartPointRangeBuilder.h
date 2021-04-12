/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)suggestedValueRangeWithRounding:(BOOL)arg1 ;
-(void)visitChartPoint:(id)arg1 ;
-(double)uMax;
-(void)setUMax:(double)arg1 ;
-(double)uMin;
-(void)setUMin:(double)arg1 ;
-(double)vMax;
-(void)setVMax:(double)arg1 ;
-(double)vMin;
-(void)setVMin:(double)arg1 ;
-(double)maximumMax;
-(void)setMaximumMax:(double)arg1 ;
-(double)minimumMin;
-(void)setMinimumMin:(double)arg1 ;
-(long long)numChartPoints;
-(void)setNumChartPoints:(long long)arg1 ;
@end

