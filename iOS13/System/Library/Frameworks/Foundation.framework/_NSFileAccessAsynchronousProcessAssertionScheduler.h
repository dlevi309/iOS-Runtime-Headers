/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary;

@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject {

	NSMutableDictionary* _assertionsPerPID;
	os_unfair_lock_s _lock;

}
+(id)sharedInstance;
-(id)init;
-(void)removeAssertionWithToken:(id)arg1 ;
-(id)addAssertionWithName:(id)arg1 forPID:(int)arg2 ;
@end

