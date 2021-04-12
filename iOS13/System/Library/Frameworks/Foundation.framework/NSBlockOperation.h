/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSArray;

@interface NSBlockOperation : NSOperation {

	NSMutableArray* _executionBlocks;
	/*^block*/id _block;

}

@property (copy,readonly) NSArray * executionBlocks; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
@end

