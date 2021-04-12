/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFOperation.h>

@class NSArray;

@interface HMFBlockOperation : HMFOperation {

	NSArray* _executionBlocks;

}

@property (copy,readonly) NSArray * executionBlocks;              //@synthesize executionBlocks=_executionBlocks - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(NSArray *)executionBlocks;
-(id)initWithTimeout:(double)arg1 ;
@end

