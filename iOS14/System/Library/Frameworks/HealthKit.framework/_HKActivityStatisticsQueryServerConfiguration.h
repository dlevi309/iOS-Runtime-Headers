/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration {

	NSDate* _startDate;
	NSDate* _endDate;
	NSDateComponents* _moveIntervalComponents;
	NSDateComponents* _exerciseIntervalComponents;
	double _updateInterval;

}

@property (nonatomic,copy) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * moveIntervalComponents;                  //@synthesize moveIntervalComponents=_moveIntervalComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * exerciseIntervalComponents;              //@synthesize exerciseIntervalComponents=_exerciseIntervalComponents - In the implementation block
@property (assign,nonatomic) double updateInterval;                                    //@synthesize updateInterval=_updateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)updateInterval;
-(NSDate *)endDate;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMoveIntervalComponents:(NSDateComponents *)arg1 ;
-(void)setExerciseIntervalComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)moveIntervalComponents;
-(NSDateComponents *)exerciseIntervalComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

