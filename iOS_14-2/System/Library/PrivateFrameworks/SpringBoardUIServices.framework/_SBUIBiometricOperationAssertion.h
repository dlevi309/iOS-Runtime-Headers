/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <BaseBoard/BSSimpleAssertion.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, NSString;

@interface _SBUIBiometricOperationAssertion : BSSimpleAssertion <BSDescriptionProviding> {

	NSSet* _operations;

}

@property (nonatomic,copy) NSSet * operations;                      //@synthesize operations=_operations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperations:(NSSet *)arg1 ;
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(NSSet *)operations;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

