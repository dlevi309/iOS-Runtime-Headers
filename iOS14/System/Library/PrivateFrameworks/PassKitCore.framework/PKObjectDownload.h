/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableSet, NSURLSessionDataTask;

@interface PKObjectDownload : NSObject {

	NSMutableSet* _completionHandlers;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSMutableSet * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
-(NSURLSessionDataTask *)task;
-(id)init;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSMutableSet *)completionHandlers;
@end

