/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol OS_os_log;
@class NSObject, NSString, NSDate;

@interface PowerUIBatteryMitigationManager : NSObject {

	int _lastDOD0Value;
	unsigned long long _decisionSignalID;
	NSObject*<OS_os_log> _log;
	NSString* _defaultsDomain;
	NSDate* _lastDOD0Update;
	unsigned long long _lastQMaxCounter;
	NSDate* _lastQMaxUpdate;
	unsigned long long _testDaysSinceQmaxUpdate;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                                //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSString * defaultsDomain;                               //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (assign,nonatomic) int lastDOD0Value;                                       //@synthesize lastDOD0Value=_lastDOD0Value - In the implementation block
@property (retain) NSDate * lastDOD0Update;                                           //@synthesize lastDOD0Update=_lastDOD0Update - In the implementation block
@property (assign,nonatomic) unsigned long long lastQMaxCounter;                      //@synthesize lastQMaxCounter=_lastQMaxCounter - In the implementation block
@property (retain) NSDate * lastQMaxUpdate;                                           //@synthesize lastQMaxUpdate=_lastQMaxUpdate - In the implementation block
@property (assign) unsigned long long decisionSignalID;                               //@synthesize decisionSignalID=_decisionSignalID - In the implementation block
@property (assign,nonatomic) unsigned long long testDaysSinceQmaxUpdate;              //@synthesize testDaysSinceQmaxUpdate=_testDaysSinceQmaxUpdate - In the implementation block
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(int)lastDOD0Value;
-(id)dod0ValueChangedDate;
-(int)lastQMaxCounterValue;
-(id)lastQMaxCounterChangedDate;
-(NSDate *)lastDOD0Update;
-(void)setLastDOD0Update:(NSDate *)arg1 ;
-(void)setLastQMaxUpdate:(NSDate *)arg1 ;
-(void)updateLastQMaxValue:(unsigned long long)arg1 atDate:(id)arg2 ;
-(NSDate *)lastQMaxUpdate;
-(double)additionalWaitTimeForQMaxWithInterval:(double)arg1 ;
-(void)updateLastDOD0Value:(int)arg1 atDate:(id)arg2 ;
-(double)additionalWaitTimeForDOD0WithInterval:(double)arg1 ;
-(id)initWithDefaultsDomain:(id)arg1 ;
-(double)additionalWaitTime;
-(unsigned long long)decisionSignalID;
-(void)setDecisionSignalID:(unsigned long long)arg1 ;
-(NSString *)defaultsDomain;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(void)setLastDOD0Value:(int)arg1 ;
-(unsigned long long)lastQMaxCounter;
-(void)setLastQMaxCounter:(unsigned long long)arg1 ;
-(unsigned long long)testDaysSinceQmaxUpdate;
-(void)setTestDaysSinceQmaxUpdate:(unsigned long long)arg1 ;
@end

