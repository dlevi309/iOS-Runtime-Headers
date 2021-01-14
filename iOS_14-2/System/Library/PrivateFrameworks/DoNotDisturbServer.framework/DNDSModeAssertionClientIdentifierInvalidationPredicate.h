/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSModeAssertionInvalidationPredicate.h>

@class NSArray;

@interface DNDSModeAssertionClientIdentifierInvalidationPredicate : DNDSModeAssertionInvalidationPredicate {

	NSArray* _clientIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * clientIdentifiers;              //@synthesize clientIdentifiers=_clientIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)description;
-(NSArray *)clientIdentifiers;
-(unsigned long long)predicateType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithClientIdentifiers:(id)arg1 ;
@end

