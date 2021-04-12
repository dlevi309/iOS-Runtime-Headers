/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRITask.h>

@class NSMutableArray, NSArray, NSString, NSDate;

@interface TRISequenceTask : NSObject <TRITask> {

	NSMutableArray* _tasks;
	unsigned long long _currentTaskIndex;
	NSArray* _tags;
	BOOL success;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * tags; 
@property (readonly) NSDate * startTime; 
@property (readonly) NSArray * dependencies; 
+(BOOL)supportsSecureCoding;
-(int)run;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)dependencies;
-(id)initWithTags:(id)arg1 ;
-(NSArray *)tags;
-(void)addTask:(id)arg1 ;
-(NSDate *)startTime;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(id)initWithTasks:(id)arg1 index:(unsigned long long)arg2 tags:(id)arg3 ;
@end

