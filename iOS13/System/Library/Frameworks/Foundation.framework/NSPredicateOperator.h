/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(SEL)_getSelectorForType:(unsigned long long)arg1 ;
+(id)_getSymbolForType:(unsigned long long)arg1 ;
+(id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(unsigned long long)modifier;
-(id)symbol;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 ;
-(id)predicateFormat;
-(BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)_setModifier:(unsigned long long)arg1 ;
@end

