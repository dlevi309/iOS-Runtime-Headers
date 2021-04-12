/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)duration;
-(unsigned long long)operationState;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1;
-(long long)compareStopTime:(id)arg1;

@end

