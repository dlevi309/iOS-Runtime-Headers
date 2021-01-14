/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSString;

@interface NSVariableExpression : NSExpression {

	NSString* _variable;

}
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(id)initWithObject:(id)arg1 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)variable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

