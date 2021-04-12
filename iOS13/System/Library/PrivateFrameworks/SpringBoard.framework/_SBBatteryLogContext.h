/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)capacity;
-(void)setCapacity:(int)arg1 ;
-(BOOL)hasChargedPartially;
-(void)setHasChargedPartially:(BOOL)arg1 ;
-(NSArray *)foregroundApplications;
-(void)setForegroundApplications:(NSArray *)arg1 ;
-(int)voltage;
-(void)setVoltage:(int)arg1 ;
-(double)usageTimeInSeconds;
-(void)setUsageTimeInSeconds:(double)arg1 ;
-(double)standbyTimeInSeconds;
-(void)setStandbyTimeInSeconds:(double)arg1 ;
@end

