/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITaskPersisting;
@class TRIExperimentDatabase;

@interface TRIDatabase : NSObject {

	TRIExperimentDatabase* _experiments;
	id<TRITaskPersisting> _tasks;

}

@property (readonly) TRIExperimentDatabase * experiments; 
@property (readonly) id<TRITaskPersisting> tasks; 
+(id)sharedDatabase;
-(id)init;
-(id<TRITaskPersisting>)tasks;
-(TRIExperimentDatabase *)experiments;
@end

