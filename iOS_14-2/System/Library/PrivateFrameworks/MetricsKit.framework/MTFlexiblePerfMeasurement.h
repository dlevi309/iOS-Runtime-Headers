/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTPerfBaseMeasurement.h>
#import <libobjc.A.dylib/MTFlexiblePerfMeasurementData.h>

@class NSString, NSArray;

@interface MTFlexiblePerfMeasurement : MTPerfBaseMeasurement <MTFlexiblePerfMeasurementData> {

	NSString* _eventType;

}

@property (nonatomic,copy,readonly) NSString * eventType; 
@property (nonatomic,copy,readonly) NSArray * eventData; 
@property (nonatomic,copy,readonly) NSArray * additionalFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * eventType;                             //@synthesize eventType=_eventType - In the implementation block
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(void)setXpSamplingForced:(BOOL)arg1 ;
-(void)mark:(id)arg1 ;
-(id)initWithMeasurementTransformer:(id)arg1 eventType:(id)arg2 eventData:(id)arg3 ;
-(void)mark:(id)arg1 time:(long long)arg2 ;
-(void)setXpSamplingPercentage:(double)arg1 ;
-(void)mark:(id)arg1 date:(id)arg2 ;
@end

