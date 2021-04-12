/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKMCDaySummaryQueryClientInterface.h>

@class NSMutableArray, NSString;

@interface HKMCDaySummaryQuery : HKQuery <HKMCDaySummaryQueryClientInterface> {

	/*^block*/id _resultsHandler;
	NSMutableArray* _summariesPendingDelivery;
	BOOL _ascending;
	long long _limit;
	SCD_Struct_HK0 _dayIndexRange;

}

@property (nonatomic,readonly) SCD_Struct_HK0 dayIndexRange;              //@synthesize dayIndexRange=_dayIndexRange - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) long long limit;                           //@synthesize limit=_limit - In the implementation block
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
-(id)initWithDayIndexRange:(SCD_Struct_HK0)arg1 ascending:(BOOL)arg2 limit:(long long)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(SCD_Struct_HK0)dayIndexRange;
-(void)client_deliverDaySummaries:(id)arg1 clearPending:(BOOL)arg2 isFinalBatch:(BOOL)arg3 analysisAnchor:(id)arg4 queryUUID:(id)arg5 ;
@end

