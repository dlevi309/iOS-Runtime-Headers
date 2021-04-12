/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASampleFrameIterator.h>

@class PASampleKernelFrame, PASampleUserFrame, NSString;

@interface PSampleFrameKCDataIterator : NSObject <PASampleFrameIterator> {

	PASampleKernelFrame* _kernel;
	PASampleUserFrame* _user;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;
	stack_snapshot_frame64* user64Frames;
	int numUser64Frames;
	unsigned long long* user64LRs;
	int numUser64LRs;
	stack_snapshot_frame32* user32Frames;
	int numUser32Frames;
	unsigned* user32LRs;
	int numUser32LRs;
	stack_snapshot_frame64* kernel64Frames;
	int numKernel64Frames;
	unsigned long long* kernel64LRs;
	int numKernel64LRs;
	stack_snapshot_frame32* kernel32Frames;
	int numKernel32Frames;
	unsigned* kernel32LRs;
	int numKernel32LRs;
	unsigned long long continuation;
	BOOL isUserStackTruncated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)clear;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(BOOL)hasStack;
-(BOOL)hasUserStack;
@end

