/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampleThreadData.h>

@interface PASampleThreadDataKPerf : PASampleThreadData {

	BOOL isSentinel;
	BOOL filledDispatchQueue;
	BOOL filledThreadSnapshotInfo;
	BOOL hasEmptyKernelStack;
	PASampleThreadDataKPerf* previousSampleThread;

}

@property (assign) BOOL isSentinel; 
@property (__weak) PASampleThreadDataKPerf * previousSampleThread; 
@property (assign) BOOL filledDispatchQueue; 
@property (assign) BOOL filledThreadSnapshotInfo; 
@property (assign) BOOL hasEmptyKernelStack; 
-(BOOL)filledDispatchQueue;
-(void)setFilledDispatchQueue:(BOOL)arg1 ;
-(BOOL)hasAnyInfo;
-(PASampleThreadDataKPerf *)previousSampleThread;
-(void)setPreviousSampleThread:(PASampleThreadDataKPerf *)arg1 ;
-(BOOL)isSentinel;
-(void)setIsSentinel:(BOOL)arg1 ;
-(BOOL)filledThreadSnapshotInfo;
-(void)setFilledThreadSnapshotInfo:(BOOL)arg1 ;
-(BOOL)hasEmptyKernelStack;
-(void)setHasEmptyKernelStack:(BOOL)arg1 ;
@end

