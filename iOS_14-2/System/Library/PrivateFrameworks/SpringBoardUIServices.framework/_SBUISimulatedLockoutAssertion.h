/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithLockoutState:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(unsigned long long)lockoutState;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

