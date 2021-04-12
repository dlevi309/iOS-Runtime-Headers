/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance {

	NSArray* _subExpressionValidators;

}

@property (nonatomic,retain) NSArray * subExpressionValidators;              //@synthesize subExpressionValidators=_subExpressionValidators - In the implementation block
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithValidators:(id)arg1 ;
-(void)setSubExpressionValidators:(NSArray *)arg1 ;
-(NSArray *)subExpressionValidators;
@end

