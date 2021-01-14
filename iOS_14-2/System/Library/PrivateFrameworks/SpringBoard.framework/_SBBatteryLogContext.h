/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSArray;

@interface _SBBatteryLogContext : NSObject {

	BOOL _hasChargedPartially;
	int _capacity;
	int _voltage;
	NSArray* _foregroundApplications;
	double _usageTimeInSeconds;
	double _standbyTimeInSeconds;

}

@property (nonatomic,retain) NSArray * foregroundApplications;              //@synthesize foregroundApplications=_foregroundApplications - In the implementation block
@property (assign,nonatomic) int capacity;                                  //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) int voltage;                                   //@synthesize voltage=_voltage - In the implementation block
@property (assign,nonatomic) double usageTimeInSeconds;                     //@synthesize usageTimeInSeconds=_usageTimeInSeconds - In the implementation block
@property (assign,nonatomic) double standbyTimeInSeconds;                   //@synthesize standbyTimeInSeconds=_standbyTimeInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasChargedPartially;                      //@synthesize hasChargedPartially=_hasChargedPartially - In the implementation block
-(void)setCapacity:(int)arg1 ;
-(int)capacity;
-(int)voltage;
-(BOOL)hasChargedPartially;
-(void)setHasChargedPartially:(BOOL)arg1 ;
-(NSArray *)foregroundApplications;
-(void)setForegroundApplications:(NSArray *)arg1 ;
-(void)setVoltage:(int)arg1 ;
-(double)usageTimeInSeconds;
-(void)setUsageTimeInSeconds:(double)arg1 ;
-(double)standbyTimeInSeconds;
-(void)setStandbyTimeInSeconds:(double)arg1 ;
@end

