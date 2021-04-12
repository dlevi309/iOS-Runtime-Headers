/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)predicate;
-(id)initWithType:(long long)arg1 rules:(id)arg2 ;
-(id)keyPaths;
-(id)currentValuesOfObject:(id)arg1 ;
-(long long)compoundType;
-(void)setCompoundType:(long long)arg1 ;
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
@end

