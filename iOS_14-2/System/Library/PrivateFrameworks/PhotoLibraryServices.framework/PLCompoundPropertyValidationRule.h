/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLPropertyValidationRule.h>

@class NSArray;

@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule {

	long long _compoundType;
	NSArray* _rules;

}

@property (assign,nonatomic) long long compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
@property (nonatomic,retain) NSArray * rules;                     //@synthesize rules=_rules - In the implementation block
+(id)andCompoundPropertyValidationRuleWithRules:(id)arg1 ;
+(id)orCompoundPropertyValidationRuleWithRules:(id)arg1 ;
-(id)keyPaths;
-(id)predicate;
-(void)setRules:(NSArray *)arg1 ;
-(NSArray *)rules;
-(id)initWithType:(long long)arg1 rules:(id)arg2 ;
-(long long)compoundType;
-(id)currentValuesOfObject:(id)arg1 ;
-(void)setCompoundType:(long long)arg1 ;
@end

