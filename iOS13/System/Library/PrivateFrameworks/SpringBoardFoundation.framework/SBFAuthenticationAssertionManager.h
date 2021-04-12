/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(void)addAssertion:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)hasActiveAssertions;
-(BOOL)isAssertionValid:(id)arg1 ;
@end

