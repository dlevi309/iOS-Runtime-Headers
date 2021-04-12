/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {

	int _fd;
	NSString* _name;

}
-(id)init;
-(void)dealloc;
-(id)name;
-(void)lock;
-(void)unlock;
-(void)setName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)tryLock;
@end

