/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNRecursiveLock : NSObject {

	opaque_pthread_mutex_t _mutex;

}
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
@end

