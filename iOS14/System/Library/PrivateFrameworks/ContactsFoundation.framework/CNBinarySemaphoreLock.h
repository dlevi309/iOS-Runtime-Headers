/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(id)init;
-(void)lock;
-(NSString *)name;
-(id)description;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end

