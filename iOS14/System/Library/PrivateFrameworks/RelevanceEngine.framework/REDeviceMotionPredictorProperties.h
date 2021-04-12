/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class CMMotionActivityManager;


@protocol REDeviceMotionPredictorProperties <REExportedInterface>
@property (nonatomic,readonly) CMMotionActivityManager * activityManager; 
@property (getter=isStationary,readonly) BOOL stationary; 
@property (readonly) unsigned long long motionType; 
@required
-(CMMotionActivityManager *)activityManager;
-(BOOL)isStationary;
-(unsigned long long)motionType;

@end

