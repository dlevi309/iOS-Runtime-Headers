/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance {

	NSString* _value;

}

@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(id)initWithValue:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

