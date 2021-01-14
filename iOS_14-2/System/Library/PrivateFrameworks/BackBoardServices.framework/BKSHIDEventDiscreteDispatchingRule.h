/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BKSHIDEventDiscreteDispatchingPredicate, BKSHIDEventDispatchingTarget, NSString;

@interface BKSHIDEventDiscreteDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {

	BKSHIDEventDiscreteDispatchingPredicate* _predicate;
	BKSHIDEventDispatchingTarget* _target;

}

@property (nonatomic,copy,readonly) BKSHIDEventDiscreteDispatchingPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDispatchingTarget * target;                            //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)ruleForDispatchingDiscreteEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 ;
-(id)succinctDescription;
-(BKSHIDEventDiscreteDispatchingPredicate *)predicate;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BKSHIDEventDispatchingTarget *)target;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_initWithPredicate:(id)arg1 target:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

