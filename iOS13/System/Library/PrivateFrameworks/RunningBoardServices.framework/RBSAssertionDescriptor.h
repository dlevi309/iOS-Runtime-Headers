/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSAssertionIdentifier, RBSTarget, NSString, NSArray;

@interface RBSAssertionDescriptor : NSObject <BSXPCSecureCoding, NSCopying, BSDescriptionProviding> {

	RBSAssertionIdentifier* _identifier;
	RBSTarget* _target;
	NSString* _explanation;
	NSArray* _attributes;

}

@property (nonatomic,copy,readonly) RBSAssertionIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) RBSTarget * target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanation;                           //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)descriptorWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(RBSTarget *)arg1 ;
-(RBSTarget *)target;
-(RBSAssertionIdentifier *)identifier;
-(NSArray *)attributes;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)explanation;
-(id)copyWithIdentifier:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 ;
@end

