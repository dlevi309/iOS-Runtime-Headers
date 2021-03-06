/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/

#import <SleepHealth/SleepHealth-Structs.h>
#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSHSleepDaySummaryQueryClientInterface.h>

@class NSMutableArray, NSString;

@interface HKSHSleepDaySummaryQuery : HKQuery <HKSHSleepDaySummaryQueryClientInterface> {

	/*^block*/id _resultsHandler;
	NSMutableArray* _summariesPendingDelivery;
	BOOL _ascending;
	BOOL _requireSleepAnalysis;
	BOOL _onlySleepAnalysis;
	long long _limit;
	SCD_Struct_HK0 _morningIndexRange;

}

@property (nonatomic,readonly) SCD_Struct_HK0 morningIndexRange;              //@synthesize morningIndexRange=_morningIndexRange - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                                //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) long long limit;                               //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL requireSleepAnalysis;                     //@synthesize requireSleepAnalysis=_requireSleepAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL onlySleepAnalysis;                        //@synthesize onlySleepAnalysis=_onlySleepAnalysis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(long long)limit;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(BOOL)ascending;
-(void)queue_validate;
-(id)initWithMorningIndexRange:(SCD_Struct_HK0)arg1 ascending:(BOOL)arg2 limit:(long long)arg3 requireSleepAnalysis:(BOOL)arg4 onlySleepAnalysis:(BOOL)arg5 resultsHandler:(/*^block*/id)arg6 ;
-(SCD_Struct_HK0)morningIndexRange;
-(id)initWithMorningIndexRange:(SCD_Struct_HK0)arg1 ascending:(BOOL)arg2 limit:(long long)arg3 requireSleepAnalysis:(BOOL)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)client_deliverDaySummaries:(id)arg1 clearPending:(BOOL)arg2 isFinalBatch:(BOOL)arg3 queryUUID:(id)arg4 ;
-(BOOL)requireSleepAnalysis;
-(BOOL)onlySleepAnalysis;
@end

