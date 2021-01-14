/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandler.h>
#import <libobjc.A.dylib/MTPerfBaseMeasurementTransformation.h>

@class NSString;

@interface MTFlexiblePerfEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MTFlexiblePerfEventHandlerDelegate> delegate; 
-(id)knownFields;
-(id)metricsDataWithEventType:(id)arg1 eventData:(id)arg2 ;
-(BOOL)mtIncludeBaseFields;
-(id)metricsDataWithPerfMeasurement:(id)arg1 ;
-(id)xpSamplingPercentage:(id)arg1 ;
@end

