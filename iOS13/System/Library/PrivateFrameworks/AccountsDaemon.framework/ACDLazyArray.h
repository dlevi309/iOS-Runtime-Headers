/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <AccountsDaemon/AccountsDaemon-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray;

@interface ACDLazyArray : NSArray {

	os_unfair_lock_s _initializationLock;
	/*^block*/id _initializationBlock;
	NSArray* _underlyingArray;

}
-(id)init;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInitializer:(/*^block*/id)arg1 ;
@end

