/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setStashedContext:(AAStorableLoginContext *)arg1 ;
-(void)persistStashedContext;
-(AAStorableLoginContext *)stashedContext;
@end

