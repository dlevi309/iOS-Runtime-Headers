/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned char)flow;
-(unsigned char)ovulationTestResult;
-(void)setOvulationTestResult:(unsigned char)arg1 ;
-(void)setFlow:(unsigned char)arg1 ;
-(unsigned)julianDay;
-(BOOL)spotting;
-(void)setJulianDay:(unsigned)arg1 ;
-(void)setSpotting:(BOOL)arg1 ;
-(NSNumber *)flowUpdatedJulianDay;
-(void)setFlowUpdatedJulianDay:(NSNumber *)arg1 ;
@end

