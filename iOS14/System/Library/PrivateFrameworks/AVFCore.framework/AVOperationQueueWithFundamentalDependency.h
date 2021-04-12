/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <Foundation/NSOperationQueue.h>

@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue {

	NSOperation* _fundamentalOperation;

}
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)addOperation:(id)arg1 ;
-(id)initWithFundamentalOperation:(id)arg1 ;
-(void)dealloc;
@end

