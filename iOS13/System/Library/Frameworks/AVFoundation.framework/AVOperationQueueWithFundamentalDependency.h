/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <Foundation/NSOperationQueue.h>

@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue {

	NSOperation* _fundamentalOperation;

}
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)initWithFundamentalOperation:(id)arg1 ;
@end

