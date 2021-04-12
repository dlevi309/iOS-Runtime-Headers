/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKStatisticsQueryClientInterface.h>

@class NSDateInterval, NSString;

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClientInterface> {

	BOOL _requireQuantityType;
	/*^block*/id _completionHandler;
	unsigned long long _options;
	unsigned long long _mergeStrategy;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) id completionHandler;                                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                                                         //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (setter=_setDateInterval:,getter=_dateInterval,nonatomic,retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(unsigned long long)options;
-(id)_filter;
-(id)completionHandler;
-(id)_dateInterval;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_filterForDateInterval:(id)arg1 ;
-(void)client_deliverStatistics:(id)arg1 forQuery:(id)arg2 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(void)_setDateInterval:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)mergeStrategy;
@end

