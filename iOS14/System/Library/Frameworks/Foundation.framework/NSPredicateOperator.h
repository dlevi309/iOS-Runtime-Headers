/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _operatorType;
	unsigned long long _modifier;

}
+(BOOL)supportsSecureCoding;
+(id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2 ;
+(SEL)_getSelectorForType:(unsigned long long)arg1 ;
+(id)_getSymbolForType:(unsigned long long)arg1 ;
-(id)predicateFormat;
-(void)_setOptions:(unsigned long long)arg1 ;
-(SEL)selector;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(unsigned long long)operatorType;
-(BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(unsigned long long)modifier;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 ;
-(void)_setModifier:(unsigned long long)arg1 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)description;
-(id)symbol;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

