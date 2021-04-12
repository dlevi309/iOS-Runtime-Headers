/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKStatisticsCollectionQueryClientInterface.h>

@class NSDate, NSDateComponents, NSMutableArray, NSNumber, HKStatisticsCollection, NSString;

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface> {

	NSDate* _anchorDate;
	unsigned long long _options;
	NSDateComponents* _intervalComponents;
	NSMutableArray* _results;
	BOOL _hasReceivedInitialResults;
	BOOL _requireQuantityType;
	/*^block*/id _initialResultsHandler;
	/*^block*/id _statisticsUpdateHandler;
	NSNumber* _lastAnchor;
	HKStatisticsCollection* _statisticsCollection;
	unsigned long long _mergeStrategy;

}

@property (retain) NSNumber * lastAnchor;                                      //@synthesize lastAnchor=_lastAnchor - In the implementation block
@property (retain) HKStatisticsCollection * statisticsCollection;              //@synthesize statisticsCollection=_statisticsCollection - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                 //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (readonly) NSDate * anchorDate;                                      //@synthesize anchorDate=_anchorDate - In the implementation block
@property (readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
@property (copy,readonly) NSDateComponents * intervalComponents;               //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (nonatomic,copy) id initialResultsHandler;                           //@synthesize initialResultsHandler=_initialResultsHandler - In the implementation block
@property (nonatomic,copy) id statisticsUpdateHandler;                         //@synthesize statisticsUpdateHandler=_statisticsUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(unsigned long long)options;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(unsigned long long)mergeStrategy;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
-(id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 ;
-(void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(BOOL)arg2 isFinal:(BOOL)arg3 anchor:(id)arg4 query:(id)arg5 ;
-(void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3 ;
-(void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3 ;
-(void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(void)setLastAnchor:(NSNumber *)arg1 ;
-(HKStatisticsCollection *)statisticsCollection;
-(void)setStatisticsCollection:(HKStatisticsCollection *)arg1 ;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 ;
-(void)setInitialResultsHandler:(id)arg1 ;
-(void)setStatisticsUpdateHandler:(id)arg1 ;
-(id)initialResultsHandler;
-(id)statisticsUpdateHandler;
-(NSNumber *)lastAnchor;
@end

