/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance {

	NSArray* _subExpressionValidators;

}

@property (nonatomic,retain) NSArray * subExpressionValidators;              //@synthesize subExpressionValidators=_subExpressionValidators - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(NSArray *)subExpressionValidators;
-(id)initWithValidators:(id)arg1 ;
-(void)setSubExpressionValidators:(NSArray *)arg1 ;
-(id)CKPropertiesDescription;
@end

