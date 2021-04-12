/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class AAStorableLoginContext;

@interface AALoginContextManager : NSObject {

	AAStorableLoginContext* _stashedContext;
	os_unfair_lock_s _stashedContextLock;

}

@property (nonatomic,retain) AAStorableLoginContext * stashedContext; 
+(id)sharedManager;
+(void)stashLoginResponseWithAuthenticationResults:(id)arg1 cloudKitToken:(id)arg2 ;
-(id)init;
-(void)setStashedContext:(AAStorableLoginContext *)arg1 ;
-(void)persistStashedContext;
-(AAStorableLoginContext *)stashedContext;
@end

