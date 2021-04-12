/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class SATask, NSArray;

@interface SATaskThreadCallTrees : NSObject {

	SATask* _task;
	NSArray* _threadCallTrees;

}

@property (readonly) SATask * task;                          //@synthesize task=_task - In the implementation block
@property (readonly) NSArray * threadCallTrees;              //@synthesize threadCallTrees=_threadCallTrees - In the implementation block
-(SATask *)task;
-(NSArray *)threadCallTrees;
@end

