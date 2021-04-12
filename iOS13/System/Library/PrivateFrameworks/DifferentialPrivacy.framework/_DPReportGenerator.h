/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@protocol _DPMetricsCollector;
@interface _DPReportGenerator : NSObject <_DPMaintenance> {

	id<_DPMetricsCollector> _metricsCollector;

}

@property (nonatomic,readonly) id<_DPMetricsCollector> metricsCollector;              //@synthesize metricsCollector=_metricsCollector - In the implementation block
+(id)randomizeKeys:(id)arg1 andSortByPriority:(BOOL)arg2 ;
+(id)queryKeysForPattern:(id)arg1 storage:(id)arg2 ;
+(unsigned long long)queryRecordCountForKey:(id)arg1 withPredicate:(id)arg2 storage:(id)arg3 ;
+(id)queryRecordsForKey:(id)arg1 storage:(id)arg2 ;
+(id)filterNonConformingRecordsFrom:(id)arg1 ;
-(id)init;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(id)generateReportForKeys:(id)arg1 storage:(id)arg2 ;
-(id)initWithMetricsCollector:(id)arg1 ;
-(id<_DPMetricsCollector>)metricsCollector;
-(void)reportMetricsForKey:(id)arg1 toBeSubmitted:(id)arg2 currentDate:(id)arg3 storage:(id)arg4 ;
-(void)reportToPrivateCloudWithStrings:(id)arg1 forKey:(id)arg2 ;
-(BOOL)markSubmitted:(id)arg1 storage:(id)arg2 ;
-(id)generateReportUsing:(id)arg1 ;
@end

