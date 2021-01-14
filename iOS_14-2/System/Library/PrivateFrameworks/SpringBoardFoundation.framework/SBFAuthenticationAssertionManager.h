/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBFAuthenticationAssertionTracker, NSString;

@interface SBFAuthenticationAssertionManager : NSObject <BSDescriptionProviding> {

	SBFAuthenticationAssertionTracker* _preventLockTracker;
	SBFAuthenticationAssertionTracker* _transientTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)isAssertionValid:(id)arg1 ;
-(BOOL)hasActiveAssertions;
-(NSString *)description;
-(void)addAssertion:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

