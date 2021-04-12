/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/NSLocking.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _name;

}

@property (copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
@end

