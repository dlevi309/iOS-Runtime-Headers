/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance {

	NSArray* _validators;

}

@property (nonatomic,retain) NSArray * validators;              //@synthesize validators=_validators - In the implementation block
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setValidators:(NSArray *)arg1 ;
-(id)initWithValidators:(id)arg1 ;
-(NSArray *)validators;
@end

