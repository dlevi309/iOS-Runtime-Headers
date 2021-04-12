/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampleTaskData.h>

@interface PASampleTaskDataKPerf : PASampleTaskData {

	BOOL isSentinel;
	BOOL filledState;
	BOOL filledMem;
	BOOL filledLatencyQoS;
	PASampleTaskDataKPerf* previousSampleTask;

}

@property (assign) BOOL isSentinel; 
@property (__weak) PASampleTaskDataKPerf * previousSampleTask; 
@property (assign) BOOL filledState; 
@property (assign) BOOL filledMem; 
@property (assign) BOOL filledLatencyQoS; 
-(BOOL)filledMem;
-(void)setFilledMem:(BOOL)arg1 ;
-(BOOL)filledLatencyQoS;
-(void)setFilledLatencyQoS:(BOOL)arg1 ;
-(BOOL)isSentinel;
-(void)setIsSentinel:(BOOL)arg1 ;
-(void)setPrivateData:(id)arg1 ;
-(id)privateData;
-(PASampleTaskDataKPerf *)previousSampleTask;
-(void)setPreviousSampleTask:(PASampleTaskDataKPerf *)arg1 ;
-(BOOL)filledState;
-(void)setFilledState:(BOOL)arg1 ;
@end

