/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance {

	unsigned long long _operatorType;

}

@property (assign,nonatomic) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)operatorType;
-(id)CKPropertiesDescription;
-(void)setOperatorType:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
@end

