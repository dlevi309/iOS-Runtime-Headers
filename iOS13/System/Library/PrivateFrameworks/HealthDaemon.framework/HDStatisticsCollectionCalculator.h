/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDStatisticsSourceOrderProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;
@class NSArray, HKQuantityType, _HKDateIntervalCollection, NSDateInterval, NSString;

@interface HDStatisticsCollectionCalculator : NSObject <HDStatisticsSourceOrderProvider, NSSecureCoding> {

	unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::__1::default_delete<_HDStatisticsCollectionCalculatorImplementation> >* _implementation;
	/*^block*/id _statisticsHandler;
	long long _computationMethod;
	NSArray* _maskedIntervals;
	id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;

}

@property (nonatomic,copy,readonly) HKQuantityType * quantityType; 
@property (nonatomic,copy,readonly) _HKDateIntervalCollection * intervalCollection; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned long long mergeStrategy; 
@property (nonatomic,readonly) long long computationMethod;                                                                   //@synthesize computationMethod=_computationMethod - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double mergeGranularity; 
@property (nonatomic,copy,readonly) NSArray * maskedIntervals;                                                                //@synthesize maskedIntervals=_maskedIntervals - In the implementation block
@property (nonatomic,copy) id statisticsHandler;                                                                              //@synthesize statisticsHandler=_statisticsHandler - In the implementation block
@property (assign,nonatomic,__weak) id<HDStatisticsCollectionCalculatorDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<HDStatisticsCollectionCalculatorSourceOrderProvider> sourceOrderProvider;              //@synthesize sourceOrderProvider=_sourceOrderProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 ;
+(id)calculatorForArchivedRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(HKQuantityType *)quantityType;
-(NSDateInterval *)dateInterval;
-(id<HDStatisticsCollectionCalculatorDataSource>)dataSource;
-(void)setDataSource:(id<HDStatisticsCollectionCalculatorDataSource>)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(unsigned long long)mergeStrategy;
-(void)setStatisticsHandler:(id)arg1 ;
-(BOOL)queryForInitialStatisticsWithError:(id*)arg1 ;
-(void)setSourceOrderProvider:(id<HDStatisticsCollectionCalculatorSourceOrderProvider>)arg1 ;
-(id)currentStatistics;
-(BOOL)setMaskedIntervals:(id)arg1 error:(id*)arg2 ;
-(BOOL)invalidateInterval:(id)arg1 error:(id*)arg2 ;
-(id)archivedRepresentationWithError:(id*)arg1 ;
-(BOOL)addSampleValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 error:(id*)arg5 ;
-(BOOL)performAddSampleTransaction:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)sourceForSourceID:(long long)arg1 ;
-(id)initForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5 ;
-(void)setMergeGranularity:(double)arg1 ;
-(void)orderSourceIDs:(vector<long long, std::__1::allocator<long long> >*)arg1 ;
-(id)bundleIdentifierForSourceID:(long long)arg1 ;
-(_HKDateIntervalCollection *)intervalCollection;
-(double)mergeGranularity;
-(void)configureMergeAnchor:(id)arg1 ;
-(long long)computationMethod;
-(NSArray *)maskedIntervals;
-(id)statisticsHandler;
-(id<HDStatisticsCollectionCalculatorSourceOrderProvider>)sourceOrderProvider;
@end

