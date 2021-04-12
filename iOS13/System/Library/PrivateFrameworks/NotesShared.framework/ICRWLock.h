/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@interface ICRWLock : NSObject {

	opaque_pthread_rwlock_t _rwLock;

}
-(id)init;
-(void)dealloc;
-(void)unlock;
-(void)writeLock;
-(int)tryReadLock;
-(void)readLock;
@end

