/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <CoreAutoLayout/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSArray, NSLayoutDimension;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutDimension* _rootLayoutDimension;
	double _multiplier;
	double _constant;

}

@property (readonly) NSArray * _childAnchors; 
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_nearestAncestorLayoutItem;
-(NSArray *)_childAnchors;
-(double)_valueInEngine:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS14)arg1 ;
-(id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3 ;
-(id)equationDescription;
-(void)dealloc;
@end

