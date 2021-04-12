/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@interface EFLocked : NSObject {

	os_unfair_lock_s _lock;
	id _object;

}

@property (nonatomic,readonly) os_unfair_lock_s* unfairLockForTesting; 
-(id)description;
-(id)debugDescription;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)performWhileLocked:(/*^block*/id)arg1 ;
-(os_unfair_lock_s*)unfairLockForTesting;
@end

