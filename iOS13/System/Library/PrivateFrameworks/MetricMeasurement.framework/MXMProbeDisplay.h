/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MXMProbe.h>
#import <libobjc.A.dylib/MXMDisplayProbePlatformDelegate.h>

@protocol MXMDisplayProbePlatform;
@class NSString;

@interface MXMProbeDisplay : MXMProbe <MXMDisplayProbePlatformDelegate> {

	id<MXMDisplayProbePlatform> _impl;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptors;
+(id)probe;
+(id)mainDescriptor;
+(id)probeWithDescriptor:(id)arg1 ;
-(id)init;
-(void)_beginUpdates;
-(id)initWithDescriptor:(id)arg1 ;
-(void)_stopUpdates;
-(void)_didRecieveData:(id)arg1 ;
@end

