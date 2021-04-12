/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <Foundation/NSOperation.h>

@class NSLock;

@interface PXAsyncOperation : NSOperation {

	NSLock* _stateLock;
	int _operationState;

}
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)px_start;
-(BOOL)isExecuting;
-(void)px_finishIfPossible;
@end

