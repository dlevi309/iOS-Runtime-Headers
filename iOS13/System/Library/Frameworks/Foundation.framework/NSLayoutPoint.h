/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding> {

	NSLayoutXAxisAnchor* _xAxisAnchor;
	NSLayoutYAxisAnchor* _yAxisAnchor;

}

@property (copy,readonly) NSLayoutXAxisAnchor * xAxisAnchor;              //@synthesize xAxisAnchor=_xAxisAnchor - In the implementation block
@property (copy,readonly) NSLayoutYAxisAnchor * yAxisAnchor;              //@synthesize yAxisAnchor=_yAxisAnchor - In the implementation block
+(id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
+(id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)valueInItem:(id)arg1 ;
-(id)initWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
-(NSLayoutXAxisAnchor *)xAxisAnchor;
-(NSLayoutYAxisAnchor *)yAxisAnchor;
-(id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2 ;
-(id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2 ;
-(id)constraintsEqualToLayoutPoint:(id)arg1 ;
-(id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2 ;
-(id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2 ;
-(id)constraintsEqualToPoint:(id)arg1 ;
-(id)ruleEqualToLayoutPoint:(id)arg1 ;
@end

