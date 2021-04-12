/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDTrackerManipulator
@optional
-(void)operationWillEnd;
-(void)willTakeControl;
-(void)didRelinquishControl;
-(void)trackerManipulatorDidTakeControl:(id)arg1;

@required
-(id)tracker;
-(BOOL)allowTrackerManipulatorToTakeControl:(id)arg1;
-(BOOL)readyToEndOperation;
-(void)operationDidEnd;

@end

