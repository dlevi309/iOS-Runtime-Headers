/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSStringPredicateOperator.h>

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

	int _contextLock;
	SCD_Struct_NS57* _regexContext;

}
-(void)dealloc;
-(SEL)selector;
-(id)symbol;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 ;
-(BOOL)_shouldEscapeForLike;
-(void)_clearContext;
@end

