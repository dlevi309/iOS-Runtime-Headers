/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

