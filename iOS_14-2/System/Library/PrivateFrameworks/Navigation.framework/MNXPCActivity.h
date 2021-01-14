/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSString, NSDate;

@interface MNXPCActivity : NSObject {

	/*^block*/id _codeBlock;
	BOOL _repeat;
	BOOL _shouldWakeDevice;
	BOOL _useCoreDuetPowerBudgeting;
	BOOL _runOnBattery;
	NSString* _identifier;
	double _tolerance;
	unsigned long long _qualityOfService;
	unsigned long long _networkRequirements;
	NSDate* _scheduledDate;

}

@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL repeat;                                         //@synthesize repeat=_repeat - In the implementation block
@property (nonatomic,readonly) BOOL shouldWakeDevice;                               //@synthesize shouldWakeDevice=_shouldWakeDevice - In the implementation block
@property (nonatomic,readonly) BOOL useCoreDuetPowerBudgeting;                      //@synthesize useCoreDuetPowerBudgeting=_useCoreDuetPowerBudgeting - In the implementation block
@property (nonatomic,readonly) BOOL runOnBattery;                                   //@synthesize runOnBattery=_runOnBattery - In the implementation block
@property (nonatomic,readonly) double tolerance;                                    //@synthesize tolerance=_tolerance - In the implementation block
@property (nonatomic,readonly) unsigned long long qualityOfService;                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequirements;              //@synthesize networkRequirements=_networkRequirements - In the implementation block
@property (nonatomic,readonly) NSDate * scheduledDate;                              //@synthesize scheduledDate=_scheduledDate - In the implementation block
+(void)checkInActivity:(id)arg1 codeBlock:(/*^block*/id)arg2 ;
-(double)remainingTime;
-(double)tolerance;
-(id)init;
-(id)debugDescription;
-(BOOL)repeat;
-(id)description;
-(void)invalidate;
-(NSString *)identifier;
-(NSDate *)scheduledDate;
-(unsigned long long)qualityOfService;
-(void)scheduleForDate:(id)arg1 codeBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 repeat:(BOOL)arg2 shouldWakeDevice:(BOOL)arg3 useCoreDuetPowerBudgeting:(BOOL)arg4 runOnBattery:(BOOL)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8 ;
-(BOOL)_needsNetworkRequirement:(unsigned long long)arg1 ;
-(BOOL)shouldWakeDevice;
-(BOOL)useCoreDuetPowerBudgeting;
-(BOOL)runOnBattery;
-(unsigned long long)networkRequirements;
@end

