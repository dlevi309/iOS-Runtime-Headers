/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <BaseBoard/BSSimpleAssertion.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface _SBUISimulatedLockoutAssertion : BSSimpleAssertion <BSDescriptionProviding> {

	unsigned long long _lockoutState;

}

@property (nonatomic,readonly) unsigned long long lockoutState;              //@synthesize lockoutState=_lockoutState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(unsigned long long)lockoutState;
-(id)initWithLockoutState:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
@end

