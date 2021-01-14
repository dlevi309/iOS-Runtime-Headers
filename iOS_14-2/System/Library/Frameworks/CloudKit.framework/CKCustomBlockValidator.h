/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKCustomBlockValidator : CKPredicateValidatorInstance {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(id)block;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

