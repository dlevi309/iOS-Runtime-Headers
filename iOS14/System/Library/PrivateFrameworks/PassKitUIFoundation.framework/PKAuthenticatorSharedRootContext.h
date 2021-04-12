/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
@class LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject {

	os_unfair_lock_s _lock;
	LAContext* _LAContext;
	long long _userIntentAvailabilityState;

}

@property (assign,nonatomic) long long userIntentAvailabilityState;              //@synthesize userIntentAvailabilityState=_userIntentAvailabilityState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)externalizedContext;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(long long)_initialUserIntentAvailabilityState;
-(long long)userIntentAvailabilityState;
-(void)setUserIntentAvailabilityState:(long long)arg1 ;
@end

