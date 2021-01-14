/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLightProfileDataSource.h>
@class NSDate, NSTimeZone, NSDictionary;


@protocol HMDLightProfileDataSource <NSObject>
@property (copy,readonly) NSDate * date; 
@property (copy,readonly) NSTimeZone * localTimeZone; 
@property (readonly) NSDictionary * naturalLightingCurveResourceFileContent; 
@property (readonly) double naturalLightingCurveUpdateInterval; 
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold; 
@property (readonly) long long naturalLightingEnabledMaxRetryCount; 
@property (readonly) double naturalLightingEnabledRetryInterval; 
@required
-(NSTimeZone *)localTimeZone;
-(NSDate *)date;
-(unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(id)arg1 timeZone:(id)arg2;
-(void)dispatchAfterTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3;
-(NSDictionary *)naturalLightingCurveResourceFileContent;
-(double)naturalLightingCurveUpdateInterval;
-(double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
-(long long)naturalLightingEnabledMaxRetryCount;
-(double)naturalLightingEnabledRetryInterval;

@end


@class NSDate, NSTimeZone, NSDictionary, NSString;

@interface HMDLightProfileDataSource : HMFObject <HMDLightProfileDataSource>

@property (copy,readonly) NSDate * date; 
@property (copy,readonly) NSTimeZone * localTimeZone; 
@property (readonly) NSDictionary * naturalLightingCurveResourceFileContent; 
@property (readonly) double naturalLightingCurveUpdateInterval; 
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold; 
@property (readonly) long long naturalLightingEnabledMaxRetryCount; 
@property (readonly) double naturalLightingEnabledRetryInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimeZone *)localTimeZone;
-(NSDate *)date;
-(unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)dispatchAfterTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSDictionary *)naturalLightingCurveResourceFileContent;
-(double)naturalLightingCurveUpdateInterval;
-(double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
-(long long)naturalLightingEnabledMaxRetryCount;
-(double)naturalLightingEnabledRetryInterval;
@end

