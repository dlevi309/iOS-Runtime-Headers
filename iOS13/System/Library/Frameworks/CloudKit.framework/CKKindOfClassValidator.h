/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKKindOfClassValidator : CKPredicateValidatorInstance {

	Class _parentClass;

}

@property (nonatomic,retain) Class parentClass;              //@synthesize parentClass=_parentClass - In the implementation block
-(id)initWithClass:(Class)arg1 ;
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setParentClass:(Class)arg1 ;
-(Class)parentClass;
@end

