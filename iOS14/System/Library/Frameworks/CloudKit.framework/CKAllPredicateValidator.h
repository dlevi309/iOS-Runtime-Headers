/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance {

	NSArray* _validators;

}

@property (nonatomic,retain) NSArray * validators;              //@synthesize validators=_validators - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithValidators:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setValidators:(NSArray *)arg1 ;
-(NSArray *)validators;
@end

