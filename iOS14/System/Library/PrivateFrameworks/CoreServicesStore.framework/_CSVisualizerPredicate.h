/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
*/

#import <CoreServicesStore/CoreServicesStore-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSString, NSPredicate;

@interface _CSVisualizerPredicate : NSPredicate {

	NSString* _title;
	NSString* _searchString;
	unsigned long long _operator;
	NSPredicate* _numericPredicate;

}
+(BOOL)operatorIsNumeric:(unsigned long long)arg1 ;
+(id)constantValueForExpression:(id)arg1 ;
+(id)translateNSPredicate:(id)arg1 error:(id*)arg2 ;
+(id)predicateWithFormatString:(id)arg1 error:(id*)arg2 ;
+(void)getRanges:(vector<_NSRange, std::__1::allocator<_NSRange> >*)arg1 matchingPredicate:(id)arg2 inDescription:(id)arg3 ;
-(id)predicateFormat;
-(id)debugDescription;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)description;
-(id)initWithExpression:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 operator:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSearchString:(id)arg1 forTitle:(id)arg2 operator:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)evaluateNumerically:(id)arg1 ;
-(BOOL)getRanges:(vector<_NSRange, std::__1::allocator<_NSRange> >*)arg1 inDescription:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 searchedInRange:(NSRange*)arg5 ;
@end

