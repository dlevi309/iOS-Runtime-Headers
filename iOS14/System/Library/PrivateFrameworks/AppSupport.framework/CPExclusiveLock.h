/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {

	int _fd;
	NSString* _name;

}
-(void)unlock;
-(id)init;
-(BOOL)tryLock;
-(void)lock;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)dealloc;
@end

