/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface CNUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _os_unfair_lock;

}
-(void)unlock;
-(void)assertCurrentThreadIsNotOwner;
-(id)init;
-(BOOL)tryLock;
-(void)lock;
-(id)description;
-(void)assertCurrentThreadIsOwner;
@end

