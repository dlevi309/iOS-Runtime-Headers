/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNRecursiveLock : NSObject {

	opaque_pthread_mutex_t _mutex;

}
-(void)unlock;
-(id)init;
-(void)lock;
-(void)dealloc;
@end

