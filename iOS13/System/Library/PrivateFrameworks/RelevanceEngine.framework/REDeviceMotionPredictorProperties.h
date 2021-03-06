/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class CMMotionActivityManager;


@protocol REDeviceMotionPredictorProperties <REExportedInterface>
@property (nonatomic,readonly) CMMotionActivityManager * activityManager; 
@property (getter=isStationary,readonly) BOOL stationary; 
@property (readonly) unsigned long long motionType; 
@required
-(unsigned long long)motionType;
-(CMMotionActivityManager *)activityManager;
-(BOOL)isStationary;

@end

