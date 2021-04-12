/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSArray, NSLayoutDimension;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutDimension* _rootLayoutDimension;
	double _multiplier;
	double _constant;

}

@property (readonly) NSArray * _childAnchors; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_nearestAncestorLayoutItem;
-(id)_expressionInContext:(SCD_Struct_NS53)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(double)_valueInEngine:(id)arg1 ;
-(id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3 ;
@end

