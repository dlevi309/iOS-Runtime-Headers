/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSDecimalNumberBehaviors.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {

	unsigned _scale : 16;
	unsigned _roundingMode : 3;
	unsigned _raiseOnExactness : 1;
	unsigned _raiseOnOverflow : 1;
	unsigned _raiseOnUnderflow : 1;
	unsigned _raiseOnDivideByZero : 1;
	unsigned _unused : 9;
	void* _reserved2;
	void* _reserved;

}
+(id)defaultDecimalNumberHandler;
+(id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6 ;
-(unsigned long long)roundingMode;
-(short)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4 ;
-(id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6 ;
@end

