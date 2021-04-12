/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRITask.h>

@class NSArray, NSDate, TRIClient, TRIExperimentDatabase, NSString;

@interface TRIBaseTask : NSObject <TRITask> {

	TRIClient* _client;
	TRIExperimentDatabase* _database;

}

@property (nonatomic,retain) TRIExperimentDatabase * database;              //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * tags; 
@property (readonly) NSDate * startTime; 
@property (readonly) NSArray * dependencies; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(int)run;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)dependencies;
-(NSArray *)tags;
-(void)setDatabase:(TRIExperimentDatabase *)arg1 ;
-(TRIExperimentDatabase *)database;
-(NSDate *)startTime;
-(void)setup;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(void)logMetrics:(id)arg1 ;
-(void)logMetrics:(id)arg1 usingClient:(id)arg2 ;
-(void)logMetrics:(id)arg1 withDimensions:(id)arg2 usingClient:(id)arg3 ;
@end

