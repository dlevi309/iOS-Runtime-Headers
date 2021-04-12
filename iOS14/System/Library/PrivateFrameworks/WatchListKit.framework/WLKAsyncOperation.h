/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <Foundation/NSOperation.h>

@interface WLKAsyncOperation : NSOperation {

	int _state;

}
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
-(void)executionDidBegin;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finishExecutionIfPossible;
@end

