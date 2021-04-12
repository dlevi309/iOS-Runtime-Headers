/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5 ;
+(id)calculatorForArchivedRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)bundleIdentifierForSourceID:(long long)arg1 ;
-(id)sourceForSourceID:(long long)arg1 ;
-(unsigned long long)mergeStrategy;
-(BOOL)addSampleValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 error:(id*)arg5 ;
-(HKQuantityType *)quantityType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)orderSourceIDs:(vector<long long, std::__1::allocator<long long> >*)arg1 ;
-(unsigned long long)options;
-(id<HDStatisticsCollectionCalculatorDataSource>)dataSource;
-(id<HDStatisticsCollectionCalculatorSourceOrderProvider>)sourceOrderProvider;
-(void)configureMergeAnchor:(id)arg1 ;
-(void)setMergeGranularity:(double)arg1 ;
-(_HKDateIntervalCollection *)intervalCollection;
-(BOOL)performAddSampleTransaction:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setDataSource:(id<HDStatisticsCollectionCalculatorDataSource>)arg1 ;
-(NSArray *)maskedIntervals;
-(void)setSourceOrderProvider:(id<HDStatisticsCollectionCalculatorSourceOrderProvider>)arg1 ;
-(double)mergeGranularity;
-(id)statisticsHandler;
-(long long)computationMethod;
-(id)currentStatistics;
-(void)setStatisticsHandler:(id)arg1 ;
-(id)archivedRepresentationWithError:(id*)arg1 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(id)initForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5 ;
-(BOOL)invalidateInterval:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMaskedIntervals:(id)arg1 error:(id*)arg2 ;
-(BOOL)queryForInitialStatisticsWithError:(id*)arg1 ;
@end

