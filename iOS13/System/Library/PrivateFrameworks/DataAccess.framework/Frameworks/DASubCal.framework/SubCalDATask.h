/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/

#import <DASubCal/DATask.h>

@class DATaskManager, DAStatusReport, NSString;

@interface SubCalDATask : NSObject <DATask> {

	BOOL _finished;
	DATaskManager* _taskManager;
	DAStatusReport* _statusReport;

}

@property (assign,nonatomic) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic,__weak) DATaskManager * taskManager;              //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                   //@synthesize statusReport=_statusReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(void)finishWithError:(id)arg1 ;
-(DATaskManager *)taskManager;
-(void)didFinish;
-(void)performTask;
-(DAStatusReport *)statusReport;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(void)setTaskManager:(DATaskManager *)arg1 ;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(BOOL)shouldHoldPowerAssertion;
-(void)willFinish;
-(id)consumerDictKey;
-(void)performDelegateCallbackWithError:(id)arg1 ;
@end

