/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTimeout:(double)arg1 ;
-(void)main;
-(NSArray *)executionBlocks;
@end

