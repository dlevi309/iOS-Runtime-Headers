/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/_SBUIBiometricOperationAssertion.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface _SBUIBiometricMatchingAssertion : _SBUIBiometricOperationAssertion <BSDescriptionProviding> {

	unsigned long long _matchMode;
	long long _restartCount;

}

@property (nonatomic,readonly) unsigned long long matchMode;              //@synthesize matchMode=_matchMode - In the implementation block
@property (assign,nonatomic) long long restartCount;                      //@synthesize restartCount=_restartCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)matchMode;
-(id)initWithMatchMode:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setRestartCount:(long long)arg1 ;
-(long long)restartCount;
@end

