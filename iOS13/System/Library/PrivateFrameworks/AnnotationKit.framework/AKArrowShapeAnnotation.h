/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKArrowAnnotation.h>
#import <libobjc.A.dylib/AKFilledAnnotationProtocol.h>

@class NSString, UIColor;

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol> {

	double _arrowLineWidth;
	double _arrowHeadWidth;
	double _arrowHeadLength;

}

@property (assign) double arrowLineWidth;                           //@synthesize arrowLineWidth=_arrowLineWidth - In the implementation block
@property (assign) double arrowHeadWidth;                           //@synthesize arrowHeadWidth=_arrowHeadWidth - In the implementation block
@property (assign) double arrowHeadLength;                          //@synthesize arrowHeadLength=_arrowHeadLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) UIColor * fillColor; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(id)keysForValuesToObserveForAdornments;
-(double)arrowHeadLength;
-(double)arrowHeadWidth;
-(double)arrowLineWidth;
-(void)setArrowHeadLength:(double)arg1 ;
-(void)setArrowHeadWidth:(double)arg1 ;
-(void)setArrowLineWidth:(double)arg1 ;
@end

