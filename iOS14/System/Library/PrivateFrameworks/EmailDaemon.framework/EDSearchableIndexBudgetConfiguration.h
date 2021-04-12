/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString;

@interface EDSearchableIndexBudgetConfiguration : NSObject <EFPubliclyDescribable> {

	BOOL _enableActivityBasedScheduling;
	BOOL _autoStartMaintenanceIndexing;
	BOOL _allowBacklogIndexingOnPower;
	double _time;
	double _periodDuration;
	long long _numberOfItemsToIndexOnResume;

}

@property (assign,nonatomic) BOOL enableActivityBasedScheduling;                    //@synthesize enableActivityBasedScheduling=_enableActivityBasedScheduling - In the implementation block
@property (assign,nonatomic) BOOL autoStartMaintenanceIndexing;                     //@synthesize autoStartMaintenanceIndexing=_autoStartMaintenanceIndexing - In the implementation block
@property (assign,nonatomic) BOOL allowBacklogIndexingOnPower;                      //@synthesize allowBacklogIndexingOnPower=_allowBacklogIndexingOnPower - In the implementation block
@property (nonatomic,readonly) double time;                                         //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double periodDuration;                               //@synthesize periodDuration=_periodDuration - In the implementation block
@property (nonatomic,readonly) long long numberOfItemsToIndexOnResume;              //@synthesize numberOfItemsToIndexOnResume=_numberOfItemsToIndexOnResume - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
+(id)nonSchedulingBudgetConfiguration;
-(double)time;
-(id)init;
-(NSString *)ef_publicDescription;
-(NSString *)description;
-(double)periodDuration;
-(id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 enableActivityBasedScheduling:(BOOL)arg4 autoStartMaintenanceIndexing:(BOOL)arg5 allowBacklogIndexingOnPower:(BOOL)arg6 ;
-(id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 ;
-(long long)numberOfItemsToIndexOnResume;
-(BOOL)enableActivityBasedScheduling;
-(void)setEnableActivityBasedScheduling:(BOOL)arg1 ;
-(BOOL)autoStartMaintenanceIndexing;
-(void)setAutoStartMaintenanceIndexing:(BOOL)arg1 ;
-(BOOL)allowBacklogIndexingOnPower;
-(void)setAllowBacklogIndexingOnPower:(BOOL)arg1 ;
@end

