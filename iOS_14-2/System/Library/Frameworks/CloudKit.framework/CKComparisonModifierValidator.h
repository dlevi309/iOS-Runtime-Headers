/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonModifierValidator : CKPredicateValidatorInstance {

	unsigned long long _modifier;

}

@property (assign,nonatomic) unsigned long long modifier;              //@synthesize modifier=_modifier - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(unsigned long long)modifier;
-(id)initWithModifier:(unsigned long long)arg1 ;
-(void)setModifier:(unsigned long long)arg1 ;
@end

