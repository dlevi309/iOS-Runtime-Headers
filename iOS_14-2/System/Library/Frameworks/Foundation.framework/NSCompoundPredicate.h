/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {

	void* _reserved2;
	unsigned long long _type;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType; 
@property (copy,readonly) NSArray * subpredicates; 
+(BOOL)supportsSecureCoding;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)_operatorForType:(unsigned long long)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)predicateFormat;
-(NSArray *)subpredicates;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_copySubpredicateDescription:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)allowEvaluation;
-(id)predicateOperator;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)compoundPredicateType;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)generateMetadataDescription;
-(id)_predicateOperator;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

