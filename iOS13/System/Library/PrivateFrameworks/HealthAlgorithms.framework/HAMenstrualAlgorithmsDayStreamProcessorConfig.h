/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


@class NSNumber, NSDateComponents;

@interface HAMenstrualAlgorithmsDayStreamProcessorConfig : NSObject {

	float _menstruationStartCoefficient;
	float _menstruationEndCoefficient;
	float _fertilityStartCoefficient;
	float _fertilityEndCoefficient;
	float _projectionOffCoefficient;
	unsigned _todayAsJulianDay;
	NSNumber* _userReportedCycleLength;
	NSNumber* _julianDayOfUserReportedCycleLength;
	NSNumber* _userReportedMenstruationLength;
	NSNumber* _julianDayOfUserReportedMenstruationLength;
	NSDateComponents* _birthDateComponents;

}

@property (nonatomic,retain) NSNumber * userReportedCycleLength;                                //@synthesize userReportedCycleLength=_userReportedCycleLength - In the implementation block
@property (nonatomic,retain) NSNumber * julianDayOfUserReportedCycleLength;                     //@synthesize julianDayOfUserReportedCycleLength=_julianDayOfUserReportedCycleLength - In the implementation block
@property (nonatomic,retain) NSNumber * userReportedMenstruationLength;                         //@synthesize userReportedMenstruationLength=_userReportedMenstruationLength - In the implementation block
@property (nonatomic,retain) NSNumber * julianDayOfUserReportedMenstruationLength;              //@synthesize julianDayOfUserReportedMenstruationLength=_julianDayOfUserReportedMenstruationLength - In the implementation block
@property (nonatomic,retain) NSDateComponents * birthDateComponents;                            //@synthesize birthDateComponents=_birthDateComponents - In the implementation block
@property (assign,nonatomic) float menstruationStartCoefficient;                                //@synthesize menstruationStartCoefficient=_menstruationStartCoefficient - In the implementation block
@property (assign,nonatomic) float menstruationEndCoefficient;                                  //@synthesize menstruationEndCoefficient=_menstruationEndCoefficient - In the implementation block
@property (assign,nonatomic) float fertilityStartCoefficient;                                   //@synthesize fertilityStartCoefficient=_fertilityStartCoefficient - In the implementation block
@property (assign,nonatomic) float fertilityEndCoefficient;                                     //@synthesize fertilityEndCoefficient=_fertilityEndCoefficient - In the implementation block
@property (assign,nonatomic) float projectionOffCoefficient;                                    //@synthesize projectionOffCoefficient=_projectionOffCoefficient - In the implementation block
@property (assign,nonatomic) unsigned todayAsJulianDay;                                         //@synthesize todayAsJulianDay=_todayAsJulianDay - In the implementation block
-(NSNumber *)userReportedCycleLength;
-(void)setUserReportedCycleLength:(NSNumber *)arg1 ;
-(NSNumber *)julianDayOfUserReportedCycleLength;
-(void)setJulianDayOfUserReportedCycleLength:(NSNumber *)arg1 ;
-(NSNumber *)userReportedMenstruationLength;
-(void)setUserReportedMenstruationLength:(NSNumber *)arg1 ;
-(NSNumber *)julianDayOfUserReportedMenstruationLength;
-(void)setJulianDayOfUserReportedMenstruationLength:(NSNumber *)arg1 ;
-(NSDateComponents *)birthDateComponents;
-(void)setBirthDateComponents:(NSDateComponents *)arg1 ;
-(float)menstruationStartCoefficient;
-(void)setMenstruationStartCoefficient:(float)arg1 ;
-(float)menstruationEndCoefficient;
-(void)setMenstruationEndCoefficient:(float)arg1 ;
-(float)fertilityStartCoefficient;
-(void)setFertilityStartCoefficient:(float)arg1 ;
-(float)fertilityEndCoefficient;
-(void)setFertilityEndCoefficient:(float)arg1 ;
-(float)projectionOffCoefficient;
-(void)setProjectionOffCoefficient:(float)arg1 ;
-(unsigned)todayAsJulianDay;
-(void)setTodayAsJulianDay:(unsigned)arg1 ;
@end

