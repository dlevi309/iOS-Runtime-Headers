/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithFunctionName:(id)arg1 validators:(id)arg2 ;
-(void)setArgumentValidators:(NSArray *)arg1 ;
-(NSArray *)argumentValidators;
@end

