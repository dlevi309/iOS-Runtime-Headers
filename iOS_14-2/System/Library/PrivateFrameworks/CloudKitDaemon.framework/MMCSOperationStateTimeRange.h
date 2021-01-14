/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

@class NSDate;


@protocol MMCSOperationStateTimeRange <NSObject>
@property (readonly) unsigned long long operationState; 
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (readonly) double absoluteStart; 
@property (readonly) double absoluteStop; 
@required
-(NSDate *)startDate;
-(long long)compareStopTime:(id)arg1;
-(long long)compareStartTime:(id)arg1;
-(double)absoluteStop;
-(double)absoluteStart;
-(double)duration;
-(unsigned long long)operationState;

@end

