/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSTransactionLogTaskHandler.h>

@protocol OS_dispatch_queue;
@class IDSTransactionLogTask, NSObject;

@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler {

	IDSTransactionLogTask* _task;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSTransactionLogTask * task;                    //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSTransactionLogTask *)task;
-(void)setTask:(IDSTransactionLogTask *)arg1 ;
-(void)perform;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
@end

