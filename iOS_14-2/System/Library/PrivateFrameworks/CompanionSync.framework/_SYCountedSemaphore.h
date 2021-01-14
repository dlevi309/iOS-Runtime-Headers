/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@interface _SYCountedSemaphore : NSObject {

	AI _sem_port;
	Ai _count;
	Ai _signals;
	AB _invalidated;

}
-(id)init;
-(BOOL)waitWithTimeout:(double)arg1 ;
-(id)initWithCount:(long long)arg1 ;
-(void)invalidate;
-(void)signal;
-(BOOL)_waitSemaphoreWithTimeout:(double)arg1 ;
-(void)_signalSemaphore;
-(void)_ensureSemaphore;
@end

