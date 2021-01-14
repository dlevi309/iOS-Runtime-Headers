/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <CoreAutoLayout/NSLayoutXAxisAnchor.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSLayoutXAxisAnchor, NSLayoutDimension, NSArray;

@interface _NSCompositeLayoutXAxisAnchor : NSLayoutXAxisAnchor <NSCompositeLayoutAnchor> {

	NSLayoutXAxisAnchor* _xAxisAnchor;
	double _constant;
	double _dimensionMultiplier;
	NSLayoutDimension* _dimension;

}

@property (readonly) NSArray * _childAnchors; 
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_directionAbstraction;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)_childAnchors;
-(double)_valueInEngine:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS14)arg1 ;
-(id)equationDescription;
-(id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4 ;
-(void)dealloc;
@end

