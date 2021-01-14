/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {

	NSString* _functionName;
	NSArray* _argumentValidators;

}

@property (nonatomic,retain) NSString * functionName;                   //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSArray * argumentValidators;              //@synthesize argumentValidators=_argumentValidators - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(NSString *)functionName;
-(NSArray *)argumentValidators;
-(id)initWithFunctionName:(id)arg1 validators:(id)arg2 ;
-(void)setArgumentValidators:(NSArray *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
@end

