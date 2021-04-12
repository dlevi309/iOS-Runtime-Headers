/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKPredicateValidator.h>

@interface CKLegacyPredicateValidator : CKPredicateValidator
-(void)validate:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)validateCompoundPredicate:(id)arg1 ;
-(void)validateComparisonPredicate:(id)arg1 ;
-(BOOL)validateFullTextSearchPredicate:(id)arg1 ;
-(BOOL)validateNearPredicate:(id)arg1 ;
-(BOOL)validateContainsPredicate:(id)arg1 ;
-(BOOL)validateInPredicate:(id)arg1 ;
-(BOOL)validateContainsAnyPredicate:(id)arg1 ;
-(BOOL)validateContainsAllInPredicate:(id)arg1 ;
-(BOOL)validateBeginsWithPredicate:(id)arg1 ;
-(BOOL)validateBetweenPredicate:(id)arg1 ;
-(BOOL)validateBasicOperatorPredicate:(id)arg1 ;
-(unsigned long long)_comparisonOptionForString:(id)arg1 ;
@end

