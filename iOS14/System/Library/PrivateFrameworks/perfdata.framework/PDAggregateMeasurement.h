/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)samples;
-(NSString *)unitString;
-(void)setLabels:(NSMutableDictionary *)arg1 ;
-(void)setSamples:(unsigned long long)arg1 ;
-(void)setMin:(double)arg1 ;
-(void)setUnitString:(NSString *)arg1 ;
-(NSMutableDictionary *)labels;
-(NSString *)metric;
-(PDMeasurement *)measurement;
-(double)min;
-(void)setContainer:(PDContainer *)arg1 ;
-(double)max;
-(NSMutableDictionary *)variables;
-(void)setMax:(double)arg1 ;
-(void)setMetric:(NSString *)arg1 ;
-(PDContainer *)container;
-(void)dealloc;
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

