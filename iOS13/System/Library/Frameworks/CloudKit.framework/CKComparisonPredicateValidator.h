/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _modifierValidator;
	id<CKObjectValidating> _leftExpressionValidator;
	id<CKObjectValidating> _operatorValidator;
	id<CKObjectValidating> _optionsValidator;
	id<CKObjectValidating> _rightExpressionValidator;

}

@property (nonatomic,retain) id<CKObjectValidating> modifierValidator;                     //@synthesize modifierValidator=_modifierValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> leftExpressionValidator;               //@synthesize leftExpressionValidator=_leftExpressionValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> operatorValidator;                     //@synthesize operatorValidator=_operatorValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> optionsValidator;                      //@synthesize optionsValidator=_optionsValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> rightExpressionValidator;              //@synthesize rightExpressionValidator=_rightExpressionValidator - In the implementation block
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setModifierValidator:(id<CKObjectValidating>)arg1 ;
-(void)setLeftExpressionValidator:(id<CKObjectValidating>)arg1 ;
-(void)setOperatorValidator:(id<CKObjectValidating>)arg1 ;
-(void)setOptionsValidator:(id<CKObjectValidating>)arg1 ;
-(void)setRightExpressionValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)modifierValidator;
-(id<CKObjectValidating>)leftExpressionValidator;
-(id<CKObjectValidating>)operatorValidator;
-(id<CKObjectValidating>)optionsValidator;
-(id<CKObjectValidating>)rightExpressionValidator;
@end

