/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>

@class RBSProcessPredicateImpl, NSString, RBSProcessIdentity;

@interface RBSProcessPredicate : NSObject <BSXPCSecureCoding, RBSProcessMatching> {

	RBSProcessPredicateImpl* _predicate;

}

@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * extensionPoint; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity; 
@property (nonatomic,readonly) RBSProcessPredicateImpl * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicate;
+(BOOL)supportsBSXPCSecureCoding;
+(id)predicateMatching:(id)arg1 ;
+(id)predicatePowerLogProcesses;
+(id)predicateMatchingIdentifier:(id)arg1 ;
+(id)predicateMatchingIdentity:(id)arg1 ;
+(id)predicateMatchingPredicates:(id)arg1 ;
+(id)predicateMatchingEuid:(unsigned)arg1 ;
+(id)predicateMatchingBundleIdentifier:(id)arg1 ;
+(id)predicateMatchingExtensionPoint:(id)arg1 ;
+(id)predicateMatchingHandle:(id)arg1 ;
+(id)predicateMatchingJobLabel:(id)arg1 ;
+(id)predicateMatchingServiceName:(id)arg1 ;
+(id)predicateMatchingTarget:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)euid;
-(id)processIdentifier;
-(RBSProcessPredicateImpl *)predicate;
-(NSString *)bundleIdentifier;
-(NSString *)serviceName;
-(NSString *)extensionPoint;
-(id)succinctDescription;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)processPredicate;
-(NSString *)jobLabel;
-(id)initWithPredicate:(id)arg1 ;
-(RBSProcessIdentity *)processIdentity;
@end

