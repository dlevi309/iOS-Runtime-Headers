/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


@class NSNumber;

@interface HAMenstrualAlgorithmsDayInput : NSObject {

	unsigned char _flow;
	BOOL _spotting;
	unsigned char _ovulationTestResult;
	unsigned _julianDay;
	NSNumber* _flowUpdatedJulianDay;

}

@property (assign,nonatomic) unsigned julianDay;                             //@synthesize julianDay=_julianDay - In the implementation block
@property (assign,nonatomic) unsigned char flow;                             //@synthesize flow=_flow - In the implementation block
@property (assign,nonatomic) BOOL spotting;                                  //@synthesize spotting=_spotting - In the implementation block
@property (nonatomic,retain) NSNumber * flowUpdatedJulianDay;                //@synthesize flowUpdatedJulianDay=_flowUpdatedJulianDay - In the implementation block
@property (assign,nonatomic) unsigned char ovulationTestResult;              //@synthesize ovulationTestResult=_ovulationTestResult - In the implementation block
-(unsigned)julianDay;
-(unsigned char)flow;
-(void)setFlow:(unsigned char)arg1 ;
-(void)setJulianDay:(unsigned)arg1 ;
-(BOOL)spotting;
-(void)setSpotting:(BOOL)arg1 ;
-(NSNumber *)flowUpdatedJulianDay;
-(void)setFlowUpdatedJulianDay:(NSNumber *)arg1 ;
-(unsigned char)ovulationTestResult;
-(void)setOvulationTestResult:(unsigned char)arg1 ;
@end

