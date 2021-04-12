/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IDSTransactionLogTask *)task;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)setTask:(IDSTransactionLogTask *)arg1 ;
-(void)perform;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

