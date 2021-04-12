/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _HDMirroredProgress : NSProgress {

	NSProgress* _originalProgress;

}
+(id)_KVOKeyPaths;
-(void)dealloc;
-(void)_update;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_registerForKVO;
-(void)_unregisterForKVO;
-(id)initWithMirroredProgress:(id)arg1 ;
@end

