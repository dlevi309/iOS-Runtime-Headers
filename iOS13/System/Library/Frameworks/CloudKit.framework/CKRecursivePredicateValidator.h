/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKRecursivePredicateValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _validator;

}

@property (nonatomic,retain) id<CKObjectValidating> validator;              //@synthesize validator=_validator - In the implementation block
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithValidator:(id)arg1 ;
-(void)setValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)validator;
@end

