/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)main;
-(NSArray *)executionBlocks;
-(void)dealloc;
@end

