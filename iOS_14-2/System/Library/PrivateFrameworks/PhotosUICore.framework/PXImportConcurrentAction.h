/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <Foundation/NSOperation.h>

@interface PXImportConcurrentAction : NSOperation {

	BOOL _executing;
	BOOL _finished;

}
-(void)finish;
-(void)start;
-(id)performAction;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
@end

