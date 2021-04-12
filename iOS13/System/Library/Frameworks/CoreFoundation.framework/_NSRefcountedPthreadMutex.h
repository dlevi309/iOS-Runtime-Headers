/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface _NSRefcountedPthreadMutex : NSObject {

	opaque_pthread_mutex_t lock;

}
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
@end

