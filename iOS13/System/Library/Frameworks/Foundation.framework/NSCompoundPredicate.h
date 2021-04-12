/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_operatorForType:(unsigned long long)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)generateMetadataDescription;
-(unsigned long long)compoundPredicateType;
-(NSArray *)subpredicates;
-(void)allowEvaluation;
-(id)predicateFormat;
-(id)predicateOperator;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)_predicateOperator;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(id)_copySubpredicateDescription:(id)arg1 ;
-(void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2 ;
@end

