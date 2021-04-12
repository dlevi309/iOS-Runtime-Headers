/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
*/


@class NSString, NSDictionary, NSNumber, PDContainer;

@interface PDMeasurement : NSObject {

	BOOL _largerBetter;
	BOOL _summary;
	BOOL _context;
	NSString* _metric;
	NSString* _unitString;
	NSDictionary* _variables;
	NSDictionary* _labels;
	unsigned long long _group;
	NSNumber* _value;
	NSNumber* _sampleCount;
	NSNumber* _mean;
	NSNumber* _standardDeviation;
	NSNumber* _minimum;
	NSNumber* _maximum;
	NSDictionary* _measurement;
	PDContainer* _container;
	NSString* _cachedMetricFilter;

}

@property (nonatomic,retain) NSDictionary * measurement;                             //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,retain) NSString * metric;                                      //@synthesize metric=_metric - In the implementation block
@property (nonatomic,retain) NSString * unitString;                                  //@synthesize unitString=_unitString - In the implementation block
@property (assign,nonatomic,__weak) PDContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSDictionary * variables;                               //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSDictionary * labels;                                  //@synthesize labels=_labels - In the implementation block
@property (assign,nonatomic) BOOL largerBetter;                                      //@synthesize largerBetter=_largerBetter - In the implementation block
@property (assign,nonatomic) unsigned long long group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumber * sampleCount;                                 //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,retain) NSNumber * mean;                                        //@synthesize mean=_mean - In the implementation block
@property (nonatomic,retain) NSNumber * standardDeviation;                           //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (nonatomic,retain) NSNumber * minimum;                                     //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,retain) NSNumber * maximum;                                     //@synthesize maximum=_maximum - In the implementation block
@property (assign,getter=isSummary,nonatomic) BOOL summary;                          //@synthesize summary=_summary - In the implementation block
@property (assign,getter=isContext,nonatomic) BOOL context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * cachedMetricFilter;                          //@synthesize cachedMetricFilter=_cachedMetricFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long histogramBucketCount; 
@property (nonatomic,readonly) unsigned long long percentileCount; 
-(void)setGroup:(unsigned long long)arg1 ;
-(unsigned long long)group;
-(NSNumber *)maximum;
-(NSNumber *)minimum;
-(NSNumber *)mean;
-(NSString *)unitString;
-(void)setLabels:(NSDictionary *)arg1 ;
-(void)setSampleCount:(NSNumber *)arg1 ;
-(void)setUnitString:(NSString *)arg1 ;
-(NSDictionary *)labels;
-(NSString *)metric;
-(NSDictionary *)measurement;
-(void)setMeasurement:(NSDictionary *)arg1 ;
-(void)setMinimum:(NSNumber *)arg1 ;
-(void)setMaximum:(NSNumber *)arg1 ;
-(void)setContainer:(PDContainer *)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(void)setStandardDeviation:(NSNumber *)arg1 ;
-(void)setMean:(NSNumber *)arg1 ;
-(id)description;
-(NSNumber *)sampleCount;
-(NSDictionary *)variables;
-(void)setSummary:(BOOL)arg1 ;
-(void)setMetric:(NSString *)arg1 ;
-(PDContainer *)container;
-(NSNumber *)value;
-(void)setContext:(BOOL)arg1 ;
-(NSNumber *)standardDeviation;
-(void)setVariables:(NSDictionary *)arg1 ;
-(void)setLargerBetter:(BOOL)arg1 ;
-(id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)isComparableTo:(id)arg1 ;
-(BOOL)matchesVariables:(id)arg1 ignoringMissing:(BOOL)arg2 ;
-(id)metricFilter;
-(id)metricFilterIgnoringVariables:(id)arg1 ;
-(BOOL)isLike:(id)arg1 ;
-(BOOL)largerBetter;
-(NSString *)cachedMetricFilter;
-(id)metricFilterIgnoringNullableVariables:(id)arg1 ;
-(void)setCachedMetricFilter:(NSString *)arg1 ;
-(BOOL)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2 ;
-(BOOL)matchesMetricFilter:(id)arg1 ;
-(BOOL)isComparableTo:(id)arg1 ignoringVariables:(id)arg2 ;
-(unsigned long long)histogramBucketCount;
-(BOOL)enumerateHistogramBucketsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)percentileCount;
-(BOOL)enumeratePercentilesWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isSummary;
-(BOOL)isContext;
@end

