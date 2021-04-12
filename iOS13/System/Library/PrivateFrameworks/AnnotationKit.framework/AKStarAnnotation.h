/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKPolygonAnnotation.h>

@interface AKStarAnnotation : AKPolygonAnnotation {

	double _innerRadiusFactor;

}

@property (assign) double innerRadiusFactor;              //@synthesize innerRadiusFactor=_innerRadiusFactor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForAdornments;
-(double)innerRadiusFactor;
-(void)setInnerRadiusFactor:(double)arg1 ;
@end

