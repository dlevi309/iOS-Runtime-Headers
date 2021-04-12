/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUI-Structs.h>
#import <PowerUI/PowerUIPredictor.h>

@protocol OS_os_log, _DKKnowledgeQuerying, _CDLocalContext;
@class MLModel, NSDate, NSString, NSObject, PowerUITrialManager;

@interface PowerUIDesktopModePredictor : NSObject <PowerUIPredictor> {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _loadModelLock;
	MLModel* _model;
	NSDate* _pluginDate;
	double _pluginBatteryLevel;
	double _desktopEntryThreshold;
	NSString* _defaultsDomain;
	NSObject*<OS_os_log> _log;
	double _threshold;
	id<_DKKnowledgeQuerying> _store;
	id<_CDLocalContext> _context;
	PowerUITrialManager* _trialManager;

}

@property (nonatomic,retain) NSString * defaultsDomain;                       //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;                  //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                           //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s loadModelLock;                  //@synthesize loadModelLock=_loadModelLock - In the implementation block
@property (nonatomic,retain) PowerUITrialManager * trialManager;              //@synthesize trialManager=_trialManager - In the implementation block
@property (nonatomic,retain,readonly) MLModel * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                             //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double pluginBatteryLevel;                       //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (assign,nonatomic) double desktopEntryThreshold;                    //@synthesize desktopEntryThreshold=_desktopEntryThreshold - In the implementation block
-(double)threshold;
-(MLModel *)model;
-(unsigned long long)modelVersion;
-(os_unfair_lock_s)loadModelLock;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(id<_DKKnowledgeQuerying>)store;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(double)pluginBatteryLevel;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(os_unfair_lock_s)lock;
-(id<_CDLocalContext>)context;
-(NSString *)defaultsDomain;
-(void)setTrialManager:(PowerUITrialManager *)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(void)setPluginDate:(NSDate *)arg1 ;
-(PowerUITrialManager *)trialManager;
-(void)setLoadModelLock:(os_unfair_lock_s)arg1 ;
-(NSDate *)pluginDate;
-(void)setPluginBatteryLevel:(double)arg1 ;
-(id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4 ;
-(void)setThreshold:(double)arg1 ;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(double)desktopEntryThreshold;
-(void)setDesktopEntryThreshold:(double)arg1 ;
@end

