/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSOrderedSet, NSSet, NSString;

@interface FBSDisplayLayoutTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSOrderedSet* _transitionReasons;

}

@property (nonatomic,copy,readonly) NSSet * transitionReasons; 
@property (nonatomic,copy,readonly) NSString * transitionReason; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(NSString *)transitionReason;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSSet *)transitionReasons;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setTransitionReasons:(NSSet *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

