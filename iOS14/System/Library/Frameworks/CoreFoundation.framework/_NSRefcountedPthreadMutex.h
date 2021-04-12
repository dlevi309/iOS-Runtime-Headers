/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface _NSRefcountedPthreadMutex : NSObject {

	opaque_pthread_mutex_t lock;

}
-(void)unlock;
-(id)init;
-(void)lock;
-(void)dealloc;
@end

