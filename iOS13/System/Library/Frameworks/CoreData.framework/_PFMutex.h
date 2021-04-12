/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _PFMutex : NSObject <NSLocking> {

	opaque_pthread_mutex_t _lock;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(BOOL)tryLock;
@end

