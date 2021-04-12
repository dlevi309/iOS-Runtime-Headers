/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class TSKernelClock;

@interface __TSKernelClockNotification : NSObject {

	TSKernelClock* _clock;

}

@property (assign,nonatomic,__weak) TSKernelClock * clock;              //@synthesize clock=_clock - In the implementation block
-(TSKernelClock *)clock;
-(void)setClock:(TSKernelClock *)arg1 ;
@end

