/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@interface PAStackshotFrameIterator : NSObject {

	const void* curFrame;
	const void* topFrame;
	thread_snapshot* snap;
	unsigned curIndex;
	BOOL currentFrameIsKernel;

}
-(BOOL)is64bit;
-(const void*)firstValidUserFrame;
-(id)initWithThreadSnapshot:(thread_snapshot*)arg1 frameStart:(const void*)arg2 ;
-(void)getCurrentFrame:(pa_stack_frame*)arg1 ;
-(BOOL)moveToNextFrame;
@end

