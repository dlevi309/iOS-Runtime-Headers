/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/NSLayoutRect.h>

@class NSLayoutPoint;

@interface NSLayoutRectangle : NSLayoutRect

@property (copy,readonly) NSLayoutPoint * centerPoint; 
+(id)rectangleWithLeading:(id)arg1 top:(id)arg2 width:(id)arg3 height:(id)arg4 ;
+(id)rectangleWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
+(id)rectangleWithCenter:(id)arg1 width:(id)arg2 height:(id)arg3 ;
-(NSLayoutPoint *)centerPoint;
-(id)rectangleByInsettingTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4 ;
-(id)rectangleByInsettingTopByDimension:(id)arg1 leadingByDimension:(id)arg2 bottomByDimension:(id)arg3 trailingByDimension:(id)arg4 ;
-(id)rectangleBySlicingWithDistance:(double)arg1 fromEdge:(long long)arg2 ;
-(id)rectangleBySlicingWithDimension:(id)arg1 fromEdge:(long long)arg2 ;
-(id)rectangleBySlicingWithProportion:(double)arg1 fromEdge:(long long)arg2 ;
-(id)constraintsEqualToRectangle:(id)arg1 ;
-(id)constraintsContainingWithinRectangle:(id)arg1 ;
-(id)rectangleWithName:(id)arg1 ;
@end

