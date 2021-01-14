/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedPredicateFlags : 31;
	}  _predicateFlags;
	unsigned reserved;

}

@property (copy,readonly) NSString * predicateFormat; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)predicateWithBlock:(/*^block*/id)arg1 ;
+(id)predicateWithValue:(BOOL)arg1 ;
+(id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)predicateWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)predicateWithFormat:(id)arg1 ;
+(CFLocaleRef)retainedLocale;
+(id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(NSString *)predicateFormat;
-(void)_validateForMetadataQueryScopes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)allowEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)description;
-(id)generateMetadataDescription;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_allowsEvaluation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
@end

