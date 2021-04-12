/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _HDMirroredProgress : NSProgress {

	NSProgress* _originalProgress;
	os_unfair_lock_s _lock;

}
+(id)_KVOKeyPaths;
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_unregisterForKVO;
-(void)_registerForKVO;
-(void)_update;
-(void)dealloc;
@end

