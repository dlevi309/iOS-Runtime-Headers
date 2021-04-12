/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <Foundation/NSOperation.h>

@interface VSAsyncOperation : NSOperation {

	int _state;

}
-(void)executionDidBegin;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)cancel;
-(void)finishExecutionIfPossible;
@end

