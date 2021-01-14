/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSCustomPredicateOperator : NSPredicateOperator {

	SEL _selector;

}
+(BOOL)supportsSecureCoding;
-(SEL)selector;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)symbol;
-(id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

