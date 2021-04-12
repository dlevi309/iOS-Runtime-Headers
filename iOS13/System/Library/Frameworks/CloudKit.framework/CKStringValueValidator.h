/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance {

	NSString* _value;

}

@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
@end

