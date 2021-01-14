/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSString, NSDictionary;

@interface CRPerformanceStatistics : NSObject {

	BOOL _measureRecentPeak;
	NSString* _name;
	NSDictionary* _metrics;

}

@property (retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) BOOL measureRecentPeak;              //@synthesize measureRecentPeak=_measureRecentPeak - In the implementation block
@property (retain) NSDictionary * metrics;                //@synthesize metrics=_metrics - In the implementation block
+(BOOL)_canEnableRecentPeakReset;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)metrics;
-(void)addStatistics:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)dictionary;
-(void)setName:(NSString *)arg1 ;
-(void)measureBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 measureRecentPeak:(BOOL)arg2 ;
-(void)_addMetricWithKey:(id)arg1 name:(id)arg2 unit:(id)arg3 denominator:(double)arg4 pcMetricID:(unsigned long long)arg5 ;
-(BOOL)measureRecentPeak;
-(void)_evaluateEndedSession:(pc_sessionRef)arg1 duration:(double)arg2 ;
-(id)initWithStatistics:(id)arg1 ;
@end

