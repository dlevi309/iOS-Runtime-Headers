/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSLayoutAnchor, NSArray;

@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutAnchor* _minuend;
	NSLayoutAnchor* _subtrahend;

}

@property (readonly) NSArray * _childAnchors; 
+(id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS53)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(double)_valueInEngine:(id)arg1 ;
-(id)initWithMinuend:(id)arg1 subtrahend:(id)arg2 ;
@end

