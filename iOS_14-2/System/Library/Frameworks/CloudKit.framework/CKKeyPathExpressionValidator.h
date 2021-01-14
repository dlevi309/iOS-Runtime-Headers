/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKKeyPathExpressionValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _validator;

}

@property (nonatomic,retain) id<CKObjectValidating> validator;              //@synthesize validator=_validator - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(id<CKObjectValidating>)validator;
-(id)initWithValidator:(id)arg1 ;
-(void)setValidator:(id<CKObjectValidating>)arg1 ;
@end

