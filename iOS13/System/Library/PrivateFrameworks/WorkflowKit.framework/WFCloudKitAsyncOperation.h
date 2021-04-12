/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <Foundation/NSOperation.h>

@interface WFCloudKitAsyncOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;

}

@property (assign) BOOL isExecuting;              //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)finishExecuting;
-(void)startExecuting;
@end

