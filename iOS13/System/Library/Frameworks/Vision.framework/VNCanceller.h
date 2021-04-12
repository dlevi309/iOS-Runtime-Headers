/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNCanceller : NSObject {

	/*^block*/id _signallingBlock;
	os_unfair_lock_s _lock;
	BOOL _signalled;

}
-(id)init;
-(void)reset;
-(void)_releaseSignallingBlock;
-(BOOL)tryToPerformBlock:(/*^block*/id)arg1 usingSignallingBlock:(/*^block*/id)arg2 ;
-(void)signalCancellation;
-(BOOL)wasSignalled;
@end

