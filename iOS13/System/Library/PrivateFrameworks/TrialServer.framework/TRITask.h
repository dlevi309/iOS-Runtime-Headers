/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

@class NSArray, NSDate;


@protocol TRITask <NSObject,NSSecureCoding>
@property (readonly) NSArray * tags; 
@property (readonly) NSDate * startTime; 
@property (readonly) NSArray * dependencies; 
@required
-(int)run;
-(NSArray *)dependencies;
-(NSArray *)tags;
-(NSDate *)startTime;
-(id)nextTasksForRunStatus:(int)arg1;

@end

