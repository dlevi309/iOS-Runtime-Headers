/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKKindOfClassValidator : CKPredicateValidatorInstance {

	Class _parentClass;

}

@property (nonatomic,retain) Class parentClass;              //@synthesize parentClass=_parentClass - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(id)initWithClass:(Class)arg1 ;
-(Class)parentClass;
-(void)setParentClass:(Class)arg1 ;
@end

