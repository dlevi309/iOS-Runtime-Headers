/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {

	NSString* _path;
	int _fd;

}
-(void)unlock;
-(BOOL)tryLock;
-(id)initWithPath:(id)arg1 ;
-(void)lock;
-(id)initWithName:(id)arg1 ;
-(void)dealloc;
-(BOOL)_lockBlocking:(BOOL)arg1 ;
@end

