/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension, NSString, NSLayoutPoint;

@interface NSLayoutRect : NSObject <NSCopying, NSCoding> {

	NSLayoutXAxisAnchor* _leadingAnchor;
	NSLayoutYAxisAnchor* _topAnchor;
	NSLayoutDimension* _heightAnchor;
	NSLayoutDimension* _widthAnchor;
	NSString* _name;
	id _reserved1;

}

@property (copy,readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (copy,readonly) NSLayoutYAxisAnchor * centerYAnchor; 
@property (copy,readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (copy,readonly) NSLayoutXAxisAnchor * leadingAnchor; 
@property (copy,readonly) NSLayoutXAxisAnchor * centerXAnchor; 
@property (copy,readonly) NSLayoutXAxisAnchor * trailingAnchor; 
@property (copy,readonly) NSLayoutDimension * widthAnchor; 
@property (copy,readonly) NSLayoutDimension * heightAnchor; 
@property (copy,readonly) NSLayoutPoint * centerLayoutPoint; 
+(id)layoutRectWithCenterXAnchor:(id)arg1 centerYAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4 ;
+(id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 trailingAnchor:(id)arg3 bottomAnchor:(id)arg4 ;
+(id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4 ;
+(id)layoutRectWithCenterLayoutPoint:(id)arg1 widthAnchor:(id)arg2 heightAnchor:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(id)observableValueInItem:(id)arg1 ;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutDimension *)heightAnchor;
-(CGRect)valueInItem:(id)arg1 ;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(id)_equationDescriptionInParent;
-(id)nsli_superitem;
-(id)initWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4 name:(id)arg5 ;
-(BOOL)isEqualToRectangle:(id)arg1 ;
-(id)initWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4 ;
-(id)_rectangleBySlicingWithDimension:(id)arg1 plusConstant:(double)arg2 fromEdge:(long long)arg3 ;
-(id)layoutRectBySlicingWithDimension:(id)arg1 fromEdge:(long long)arg2 ;
-(NSLayoutPoint *)centerLayoutPoint;
-(id)layoutRectByInsettingTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4 ;
-(id)layoutRectByInsettingTopWithDimension:(id)arg1 leadingWithDimension:(id)arg2 bottomWithDimension:(id)arg3 trailingWithDimension:(id)arg4 ;
-(id)layoutRectBySlicingWithDistance:(double)arg1 fromEdge:(long long)arg2 ;
-(id)layoutRectBySlicingWithProportion:(double)arg1 fromEdge:(long long)arg2 ;
-(id)constraintsEqualToLayoutRect:(id)arg1 ;
-(id)constraintsContainingWithinLayoutRect:(id)arg1 ;
-(id)layoutRectWithName:(id)arg1 ;
-(BOOL)nsli_isLegalConstraintItem;
-(id)ruleEqualToLayoutRect:(id)arg1 ;
-(id)ruleContainingLayoutRect:(id)arg1 ;
@end

