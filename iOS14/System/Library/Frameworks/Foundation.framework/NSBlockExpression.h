/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSArray;

@interface NSBlockExpression : NSExpression {

	/*^block*/id _block;
	NSArray* _arguments;

}
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 block:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(/*^block*/id)expressionBlock;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)arguments;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

