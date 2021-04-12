/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
*/


#import <perfdata/perfdata-Structs.h>
@class NSMutableDictionary, PDContainer, NSString, PDMeasurement;

@interface PDAggregateMeasurement : NSObject {

	BOOL _validMin;
	BOOL _validMax;
	NSMutableDictionary* _labels;
	PDContainer* _container;
	NSString* _metric;
	NSString* _unitString;
	NSMutableDictionary* _variables;
	running_mean* _values_mean;
	pooled_mean* _stats_mean;
	double _min;
	double _max;
	unsigned long long _samples;

}

@property (nonatomic,retain) PDContainer * container;                      //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSString * metric;                            //@synthesize metric=_metric - In the implementation block
@property (nonatomic,retain) NSString * unitString;                        //@synthesize unitString=_unitString - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * variables;              //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * labels;                 //@synthesize labels=_labels - In the implementation block
@property (assign,nonatomic) running_mean* values_mean;                    //@synthesize values_mean=_values_mean - In the implementation block
@property (assign,nonatomic) pooled_mean* stats_mean;                      //@synthesize stats_mean=_stats_mean - In the implementation block
@property (assign,nonatomic) BOOL validMin;                                //@synthesize validMin=_validMin - In the implementation block
@property (assign,nonatomic) double min;                                   //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL validMax;                                //@synthesize validMax=_validMax - In the implementation block
@property (assign,nonatomic) double max;                                   //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) unsigned long long samples;                   //@synthesize samples=_samples - In the implementation block
@property (nonatomic,readonly) PDMeasurement * measurement; 
-(void)dealloc;
-(PDContainer *)container;
-(void)setContainer:(PDContainer *)arg1 ;
-(void)setMax:(double)arg1 ;
-(double)max;
-(PDMeasurement *)measurement;
-(unsigned long long)samples;
-(NSString *)metric;
-(void)setMetric:(NSString *)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)min;
-(NSMutableDictionary *)labels;
-(void)setLabels:(NSMutableDictionary *)arg1 ;
-(void)setSamples:(unsigned long long)arg1 ;
-(NSString *)unitString;
-(NSMutableDictionary *)variables;
-(void)setUnitString:(NSString *)arg1 ;
-(void)setVariables:(NSMutableDictionary *)arg1 ;
-(void)setValues_mean:(running_mean*)arg1 ;
-(void)setStats_mean:(pooled_mean*)arg1 ;
-(void)setValidMin:(BOOL)arg1 ;
-(void)setValidMax:(BOOL)arg1 ;
-(running_mean*)values_mean;
-(pooled_mean*)stats_mean;
-(BOOL)validMin;
-(BOOL)validMax;
-(id)initWithContainer:(id)arg1 metric:(id)arg2 unitString:(id)arg3 ;
-(void)updateWithMeasurement:(id)arg1 ;
@end

