/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)predicateWithValue:(BOOL)arg1 ;
+(id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2 ;
+(CFLocaleRef)retainedLocale;
+(id)predicateWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)predicateWithFormat:(id)arg1 ;
+(id)predicateWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_validateForMetadataQueryScopes:(id)arg1 ;
-(id)generateMetadataDescription;
-(void)allowEvaluation;
-(NSString *)predicateFormat;
-(BOOL)_allowsEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
@end

