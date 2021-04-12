/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)startExecuting;
-(void)finishExecuting;
@end

