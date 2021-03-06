/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString;

@interface TISKMetricDefinition : NSObject {

	BOOL _isPointMetric;
	int _metricType;
	NSString* _metricName;
	unsigned long long _positionalSize;
	SCD_Struct_TI38* _metricDefinition;

}

@property (nonatomic,readonly) NSString * metricName;                          //@synthesize metricName=_metricName - In the implementation block
@property (nonatomic,readonly) int metricType;                                 //@synthesize metricType=_metricType - In the implementation block
@property (nonatomic,readonly) unsigned long long positionalSize;              //@synthesize positionalSize=_positionalSize - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TI38* metricDefinition;              //@synthesize metricDefinition=_metricDefinition - In the implementation block
@property (nonatomic,readonly) BOOL isPointMetric;                             //@synthesize isPointMetric=_isPointMetric - In the implementation block
+(double)pointsToMM:(double)arg1 ;
+(id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(SCD_Struct_TI38*)arg3 size:(unsigned long long)arg4 isPointMetric:(BOOL)arg5 ;
+(id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(SCD_Struct_TI38*)arg3 size:(unsigned long long)arg4 ;
+(id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(SCD_Struct_TI38*)arg3 ;
+(id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(SCD_Struct_TI38*)arg3 isPointMetric:(BOOL)arg4 ;
+(id)_makeMetric:(id)arg1 type:(int)arg2 ;
+(id)metricDefinitions;
-(int)metricType;
-(NSString *)metricName;
-(id)init:(id)arg1 type:(int)arg2 metricDef:(SCD_Struct_TI38*)arg3 size:(unsigned long long)arg4 isPointMetric:(BOOL)arg5 ;
-(unsigned long long)positionalSize;
-(SCD_Struct_TI38*)metricDefinition;
-(BOOL)isPointMetric;
@end

