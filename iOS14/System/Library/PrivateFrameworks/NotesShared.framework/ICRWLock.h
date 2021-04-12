/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@interface ICRWLock : NSObject {

	opaque_pthread_rwlock_t _rwLock;

}
-(void)unlock;
-(id)init;
-(void)writeLock;
-(void)readLock;
-(int)tryReadLock;
-(void)dealloc;
@end

