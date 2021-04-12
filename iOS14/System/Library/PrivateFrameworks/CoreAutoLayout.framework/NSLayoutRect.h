/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
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
+(id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4 ;
+(id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 trailingAnchor:(id)arg3 bottomAnchor:(id)arg4 ;
+(id)layoutRectWithCenterLayoutPoint:(id)arg1 widthAnchor:(id)arg2 heightAnchor:(id)arg3 ;
-(NSLayoutYAxisAnchor *)topAnchor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(id)description;
-(id)nsli_superitem;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(BOOL)nsli_isLegalConstraintItem;
-(id)initWithCoder:(id)arg1 ;
-(NSLayoutDimension *)heightAnchor;
-(id)_equationDescriptionInParent;
-(CGRect)valueInItem:(id)arg1 ;
-(id)ruleEqualToLayoutRect:(id)arg1 ;
-(id)ruleContainingLayoutRect:(id)arg1 ;
-(id)observableValueInItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)layoutRectWithName:(id)arg1 ;
-(NSLayoutPoint *)centerLayoutPoint;
-(id)layoutRectBySlicingWithDimension:(id)arg1 fromEdge:(long long)arg2 ;
-(id)layoutRectByInsettingTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4 ;
-(id)layoutRectBySlicingWithDistance:(double)arg1 fromEdge:(long long)arg2 ;
-(id)constraintsEqualToLayoutRect:(id)arg1 ;
-(id)layoutRectByInsettingTopWithDimension:(id)arg1 leadingWithDimension:(id)arg2 bottomWithDimension:(id)arg3 trailingWithDimension:(id)arg4 ;
-(id)layoutRectBySlicingWithProportion:(double)arg1 fromEdge:(long long)arg2 ;
-(id)constraintsContainingWithinLayoutRect:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

