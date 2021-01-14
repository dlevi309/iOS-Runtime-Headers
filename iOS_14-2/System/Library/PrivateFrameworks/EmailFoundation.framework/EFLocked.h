/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@interface EFLocked : NSObject {

	os_unfair_lock_s _lock;
	id _object;

}

@property (nonatomic,readonly) os_unfair_lock_s* unfairLockForTesting; 
-(id)initWithObject:(id)arg1 ;
-(id)debugDescription;
-(void)performWhileLocked:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)description;
-(os_unfair_lock_s*)unfairLockForTesting;
@end

