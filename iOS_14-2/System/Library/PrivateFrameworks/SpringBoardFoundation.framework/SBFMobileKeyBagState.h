/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldWipe;
-(id)succinctDescription;
-(BOOL)isEffectivelyLocked;
-(unsigned long long)failedAttemptCount;
-(long long)lockState;
-(id)publicDescription;
-(BOOL)permanentlyBlocked;
-(long long)escrowCount;
-(BOOL)recoveryRequired;
-(id)init;
-(BOOL)recoveryEnabled;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)backOffTime;
-(NSString *)description;
-(id)initWithMKBLockStateInfo:(id)arg1 ;
-(BOOL)recoveryPossible;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

