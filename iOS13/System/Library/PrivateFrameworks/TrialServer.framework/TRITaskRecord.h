/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITask;
@class NSNumber, NSDate, NSArray;

@interface TRITaskRecord : NSObject {

	NSNumber* _taskId;
	id<TRITask> _task;
	NSDate* _startTime;
	NSArray* _dependencies;
	NSArray* _tags;

}

@property (nonatomic,retain) NSNumber * taskId;                   //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,retain) id<TRITask> task;                    //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSArray * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) NSArray * tags;                      //@synthesize tags=_tags - In the implementation block
-(id)description;
-(NSArray *)dependencies;
-(NSArray *)tags;
-(id<TRITask>)task;
-(void)setTask:(id<TRITask>)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSNumber *)taskId;
-(void)setTaskId:(NSNumber *)arg1 ;
-(void)setDependencies:(NSArray *)arg1 ;
@end

