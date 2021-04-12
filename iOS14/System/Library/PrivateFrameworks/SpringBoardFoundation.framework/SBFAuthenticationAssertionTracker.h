/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSString;

@interface SBFAuthenticationAssertionTracker : NSObject <BSDescriptionProviding> {

	MKBAssertionRef _mkbAssertion;
	NSHashTable* _assertions;

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
-(id)mkbAssertionOptions;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

