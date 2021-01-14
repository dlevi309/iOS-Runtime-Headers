/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSEqualityPredicateOperator : NSPredicateOperator {

	BOOL _negate;
	unsigned long long _options;

}
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(void)_setOptions:(unsigned long long)arg1 ;
-(BOOL)isNegation;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(BOOL)arg3 ;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)initWithCoder:(id)arg1 ;
-(void)setNegation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

