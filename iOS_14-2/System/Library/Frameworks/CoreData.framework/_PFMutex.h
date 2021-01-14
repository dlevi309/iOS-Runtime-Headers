/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _PFMutex : NSObject <NSLocking> {

	opaque_pthread_mutex_t _lock;

}
+(void)initialize;
-(void)unlock;
-(id)init;
-(BOOL)tryLock;
-(void)lock;
-(void)dealloc;
@end

