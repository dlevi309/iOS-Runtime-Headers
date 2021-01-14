/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <Foundation/NSPredicate.h>

@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (nonatomic,readonly) unsigned long long predicateType; 
+(id)predicateForAnyAssertion;
+(id)predicateForAssertionClientIdentifiers:(id)arg1 ;
+(id)predicateForAssertionsTakenBeforeDate:(id)arg1 ;
+(id)predicateForAssertionUUIDs:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(unsigned long long)predicateType;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

