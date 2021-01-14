/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>

@class RBSProcessPredicateImpl, NSString, RBSProcessIdentity;

@interface RBSProcessPredicate : NSObject <RBSXPCSecureCoding, RBSProcessMatching> {

	RBSProcessPredicateImpl* _predicate;

}

@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * extensionPoint; 
@property (nonatomic,copy,readonly) NSString * beforeTranslocationBundlePath; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity; 
@property (nonatomic,readonly) RBSProcessPredicateImpl * predicate;                        //@synthesize predicate=_predicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateMatchingIdentifier:(id)arg1 ;
+(id)predicateMatchingJobLabel:(id)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)predicateMatchingPlatform:(int)arg1 ;
+(id)predicate;
+(id)predicateMatchingBeforeTranslocationBundlePath:(id)arg1 ;
+(id)predicateMatchingHandle:(id)arg1 ;
+(id)predicateMatchingEuid:(unsigned)arg1 ;
+(id)predicateMatchingIdentity:(id)arg1 ;
+(id)predicateMatchingLaunchServicesProcesses;
+(id)predicateMatchingExtensionPoint:(id)arg1 ;
+(id)predicatePowerLogProcesses;
+(id)predicateMatchingServiceName:(id)arg1 ;
+(id)predicateMatching:(id)arg1 ;
+(id)predicateMatchingBundleIdentifier:(id)arg1 ;
+(id)predicateMatchingPredicates:(id)arg1 ;
+(id)predicateMatchingSuspendableProcesses;
+(id)predicateMatchingTarget:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessPredicateImpl *)predicate;
-(NSString *)jobLabel;
-(id)processIdentifier;
-(id)processPredicate;
-(NSString *)bundleIdentifier;
-(unsigned)euid;
-(RBSProcessIdentity *)processIdentity;
-(NSString *)description;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(NSString *)extensionPoint;
-(NSString *)beforeTranslocationBundlePath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

