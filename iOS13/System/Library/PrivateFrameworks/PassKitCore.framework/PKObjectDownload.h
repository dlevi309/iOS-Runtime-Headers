/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableSet, NSURLSessionDataTask;

@interface PKObjectDownload : NSObject {

	NSMutableSet* _completionHandlers;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSMutableSet * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
-(id)init;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSMutableSet *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
@end

