/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
@class LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject {

	os_unfair_lock_s _lock;
	LAContext* _LAContext;
	BOOL _assumeUserIntentAvailable;

}

@property (assign,nonatomic) BOOL assumeUserIntentAvailable;              //@synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)externalizedContext;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)setAssumeUserIntentAvailable:(BOOL)arg1 ;
-(BOOL)assumeUserIntentAvailable;
-(BOOL)_initialUserIntentAvailabilityAssumption;
@end

