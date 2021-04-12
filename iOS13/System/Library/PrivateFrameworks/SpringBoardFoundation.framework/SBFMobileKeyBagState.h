/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSString;

@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSDictionary* _state;

}

@property (nonatomic,readonly) long long lockState; 
@property (nonatomic,readonly) double backOffTime; 
@property (nonatomic,readonly) unsigned long long failedAttemptCount; 
@property (nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) BOOL shouldWipe; 
@property (nonatomic,readonly) BOOL recoveryEnabled; 
@property (nonatomic,readonly) BOOL recoveryRequired; 
@property (nonatomic,readonly) BOOL recoveryPossible; 
@property (nonatomic,readonly) long long escrowCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)lockState;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)failedAttemptCount;
-(BOOL)isEffectivelyLocked;
-(id)publicDescription;
-(id)initWithMKBLockStateInfo:(id)arg1 ;
-(BOOL)permanentlyBlocked;
-(double)backOffTime;
-(BOOL)shouldWipe;
-(BOOL)recoveryRequired;
-(BOOL)recoveryPossible;
-(long long)escrowCount;
-(BOOL)recoveryEnabled;
@end

