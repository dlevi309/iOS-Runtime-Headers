/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@interface _SYCountedSemaphore : NSObject {

	AI _sem_port;
	Ai _count;
	Ai _signals;
	AB _invalidated;

}
-(id)init;
-(void)invalidate;
-(void)signal;
-(id)initWithCount:(long long)arg1 ;
-(BOOL)waitWithTimeout:(double)arg1 ;
-(BOOL)_waitSemaphoreWithTimeout:(double)arg1 ;
-(void)_signalSemaphore;
-(void)_ensureSemaphore;
@end

