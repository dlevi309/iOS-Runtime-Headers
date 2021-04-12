/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKDOMConditional.h>

@interface IKDOMMutationRule : IKDOMConditional {

	BOOL _mutable;

}

@property (getter=isMutable,nonatomic,readonly) BOOL mutable;              //@synthesize mutable=_mutable - In the implementation block
+(id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)mutationRuleWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isMutable;
-(id)initWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(void)applyOnDOMElement:(id)arg1 ;
@end

