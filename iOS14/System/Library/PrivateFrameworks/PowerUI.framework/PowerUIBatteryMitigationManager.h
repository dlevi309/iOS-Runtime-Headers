/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol OS_os_log;
@class NSObject, NSString, NSArray, NSDate;

@interface PowerUIBatteryMitigationManager : NSObject {

	unsigned long long _decisionSignalID;
	double _timeSinceLastDOD0Update;
	double _timeSinceLastQmaxUpdate;
	NSObject*<OS_os_log> _log;
	NSString* _defaultsDomain;
	NSArray* _lastDOD0Values;
	NSDate* _lastDOD0Update;
	NSArray* _lastQMaxArray;
	NSDate* _lastQMaxUpdate;
	unsigned long long _testDaysSinceQmaxUpdate;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                                //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSString * defaultsDomain;                               //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSArray * lastDOD0Values;                                //@synthesize lastDOD0Values=_lastDOD0Values - In the implementation block
@property (retain) NSDate * lastDOD0Update;                                           //@synthesize lastDOD0Update=_lastDOD0Update - In the implementation block
@property (nonatomic,retain) NSArray * lastQMaxArray;                                 //@synthesize lastQMaxArray=_lastQMaxArray - In the implementation block
@property (retain) NSDate * lastQMaxUpdate;                                           //@synthesize lastQMaxUpdate=_lastQMaxUpdate - In the implementation block
@property (assign) unsigned long long decisionSignalID;                               //@synthesize decisionSignalID=_decisionSignalID - In the implementation block
@property (assign,nonatomic) unsigned long long testDaysSinceQmaxUpdate;              //@synthesize testDaysSinceQmaxUpdate=_testDaysSinceQmaxUpdate - In the implementation block
@property (assign,nonatomic) double timeSinceLastDOD0Update;                          //@synthesize timeSinceLastDOD0Update=_timeSinceLastDOD0Update - In the implementation block
@property (assign,nonatomic) double timeSinceLastQmaxUpdate;                          //@synthesize timeSinceLastQmaxUpdate=_timeSinceLastQmaxUpdate - In the implementation block
-(double)additionalWaitTime;
-(unsigned long long)decisionSignalID;
-(void)setLastDOD0Update:(NSDate *)arg1 ;
-(id)readLastQMaxArray;
-(NSObject*<OS_os_log>)log;
-(id)dod0ArrayFromBatteryProperties:(id)arg1 ;
-(double)additionalWaitTimeForQMaxWithInterval:(double)arg1 ;
-(void)setTimeSinceLastQmaxUpdate:(double)arg1 ;
-(id)readLastDOD0Values;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setLastQMaxUpdate:(NSDate *)arg1 ;
-(id)readLastQMaxUpdate;
-(id)initWithDefaultsDomain:(id)arg1 ;
-(double)additionalWaitTimeWithProperties:(id)arg1 ;
-(double)additionalWaitTimeForDOD0WithInterval:(double)arg1 ;
-(NSString *)defaultsDomain;
-(void)setTestDaysSinceQmaxUpdate:(unsigned long long)arg1 ;
-(void)setLastDOD0Values:(NSArray *)arg1 ;
-(NSDate *)lastDOD0Update;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(void)updateLastQMaxArray:(id)arg1 atDate:(id)arg2 ;
-(id)qMaxFromBatteryProperties:(id)arg1 ;
-(NSArray *)lastDOD0Values;
-(NSArray *)lastQMaxArray;
-(NSDate *)lastQMaxUpdate;
-(double)timeSinceLastQmaxUpdate;
-(id)readLastDOD0Update;
-(void)setLastQMaxArray:(NSArray *)arg1 ;
-(double)timeSinceLastDOD0Update;
-(void)setDecisionSignalID:(unsigned long long)arg1 ;
-(void)setTimeSinceLastDOD0Update:(double)arg1 ;
-(void)updateLastDOD0Values:(id)arg1 atDate:(id)arg2 ;
-(unsigned long long)testDaysSinceQmaxUpdate;
@end

