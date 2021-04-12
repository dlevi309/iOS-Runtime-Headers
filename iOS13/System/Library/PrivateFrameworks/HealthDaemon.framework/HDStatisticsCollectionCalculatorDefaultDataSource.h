/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDStatisticsCollectionCalculatorDataSource.h>

@class HDSQLitePredicate, HDProfile, HKQuantityType, NSSet, _HKFilter, NSNumber, NSString;

@interface HDStatisticsCollectionCalculatorDefaultDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource> {

	HDSQLitePredicate* _fullPredicate;
	BOOL _isRealQuantityType;
	BOOL _includeUnfrozenSeries;
	HDProfile* _profile;
	HKQuantityType* _quantityType;
	HDSQLitePredicate* _predicate;
	NSSet* _restrictedSourceEntities;
	_HKFilter* _filter;
	NSNumber* _anchor;
	long long _shouldContinueFrequency;
	/*^block*/id _shouldContinueHandler;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * predicate;                       //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSSet * restrictedSourceEntities;                    //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy) _HKFilter * filter;                                  //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL includeUnfrozenSeries;                        //@synthesize includeUnfrozenSeries=_includeUnfrozenSeries - In the implementation block
@property (nonatomic,copy) NSNumber * anchor;                                   //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) long long shouldContinueFrequency;                 //@synthesize shouldContinueFrequency=_shouldContinueFrequency - In the implementation block
@property (nonatomic,copy) id shouldContinueHandler;                            //@synthesize shouldContinueHandler=_shouldContinueHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_enumerateWithProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 filter:(id)arg4 isQuantityType:(BOOL)arg5 includeUnfrozenSeries:(BOOL)arg6 error:(id*)arg7 block:(/*^block*/id)arg8 ;
+(BOOL)_enumerateSampleTypeWithProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
+(BOOL)_addValueForQuantitySeriesSample:(id)arg1 calculator:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)_addValueForQuantitySample:(id)arg1 calculator:(id)arg2 error:(id*)arg3 ;
-(void)setPredicate:(HDSQLitePredicate *)arg1 ;
-(HDSQLitePredicate *)predicate;
-(HKQuantityType *)quantityType;
-(void)setFilter:(_HKFilter *)arg1 ;
-(_HKFilter *)filter;
-(HDProfile *)profile;
-(NSNumber *)anchor;
-(void)setAnchor:(NSNumber *)arg1 ;
-(id)initForProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 restrictedSourceEntities:(id)arg4 ;
-(NSSet *)restrictedSourceEntities;
-(void)setRestrictedSourceEntities:(NSSet *)arg1 ;
-(void)setIncludeUnfrozenSeries:(BOOL)arg1 ;
-(BOOL)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id*)arg3 sampleHandler:(/*^block*/id)arg4 ;
-(void)setShouldContinueFrequency:(long long)arg1 ;
-(void)setShouldContinueHandler:(id)arg1 ;
-(BOOL)_addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 requiresSeriesValues:(BOOL)arg3 transaction:(id)arg4 error:(id*)arg5 ;
-(BOOL)addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 includeSeries:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)includeUnfrozenSeries;
-(long long)shouldContinueFrequency;
-(id)shouldContinueHandler;
@end

