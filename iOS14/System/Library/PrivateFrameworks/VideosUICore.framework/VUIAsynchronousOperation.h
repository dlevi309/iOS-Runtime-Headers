/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <Foundation/NSOperation.h>

@interface VUIAsynchronousOperation : NSOperation {

	int _state;

}
-(void)executionDidBegin;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finishExecutionIfPossible;
@end

