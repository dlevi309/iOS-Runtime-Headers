/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNCanceller : NSObject {

	/*^block*/id _signallingBlock;
	os_unfair_lock_s _lock;
	BOOL _signalled;

}
-(id)init;
-(void)_releaseSignallingBlock;
-(BOOL)tryToPerformBlock:(/*^block*/id)arg1 usingSignallingBlock:(/*^block*/id)arg2 ;
-(void)signalCancellation;
-(BOOL)wasSignalled;
-(void)reset;
@end

