/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Foundation/NSOperation.h>

@class MiroMemory;

@interface MiroPickListOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	MiroMemory* _memory;

}

@property (retain) MiroMemory * memory;              //@synthesize memory=_memory - In the implementation block
-(MiroMemory *)memory;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)setMemory:(MiroMemory *)arg1 ;
-(BOOL)isExecuting;
@end

