/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BKSHIDEventKeyCommandsDispatchingPredicate, NSArray, NSString;

@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {

	BKSHIDEventKeyCommandsDispatchingPredicate* _predicate;
	NSArray* _targets;

}

@property (nonatomic,copy,readonly) BKSHIDEventKeyCommandsDispatchingPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * targets;                                                   //@synthesize targets=_targets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)ruleForDispatchingKeyCommandsMatchingPredicate:(id)arg1 toTargets:(id)arg2 ;
-(id)succinctDescription;
-(BKSHIDEventKeyCommandsDispatchingPredicate *)predicate;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)_initWithPredicate:(id)arg1 targets:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)targets;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

