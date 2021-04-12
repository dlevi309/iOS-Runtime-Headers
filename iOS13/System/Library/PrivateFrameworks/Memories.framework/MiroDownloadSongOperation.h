/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Foundation/NSOperation.h>

@class MiroMemory;

@interface MiroDownloadSongOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	MiroMemory* _memory;

}

@property (retain) MiroMemory * memory;              //@synthesize memory=_memory - In the implementation block
-(void)start;
-(void)finished;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)markSongAsUsed;
-(void)downloadSong;
@end

