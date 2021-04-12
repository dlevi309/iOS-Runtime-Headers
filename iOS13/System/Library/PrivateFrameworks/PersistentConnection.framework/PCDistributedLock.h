/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {

	NSString* _path;
	int _fd;

}
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)initWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)tryLock;
-(BOOL)_lockBlocking:(BOOL)arg1 ;
@end

