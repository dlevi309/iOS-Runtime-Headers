/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <CoreAutoLayout/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSLayoutAnchor, NSArray;

@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutAnchor* _minuend;
	NSLayoutAnchor* _subtrahend;

}

@property (readonly) NSArray * _childAnchors; 
+(id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2 ;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)_childAnchors;
-(double)_valueInEngine:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS14)arg1 ;
-(id)equationDescription;
-(id)initWithMinuend:(id)arg1 subtrahend:(id)arg2 ;
-(void)dealloc;
@end

