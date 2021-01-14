/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@interface NSBlockPredicate : NSPredicate {

	/*^block*/id _block;

}
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(void)dealloc;
-(/*^block*/id)_predicateBlock;
@end

