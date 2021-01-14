/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonOptionsValidator : CKPredicateValidatorInstance {

	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
@end

