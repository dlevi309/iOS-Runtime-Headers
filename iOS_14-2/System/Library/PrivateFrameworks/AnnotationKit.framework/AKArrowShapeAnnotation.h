/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKArrowAnnotation.h>
#import <libobjc.A.dylib/AKFilledAnnotationProtocol.h>

@class UIColor, NSString;

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol> {

	double _arrowLineWidth;
	double _arrowHeadWidth;
	double _arrowHeadLength;

}

@property (assign) double arrowLineWidth;                           //@synthesize arrowLineWidth=_arrowLineWidth - In the implementation block
@property (assign) double arrowHeadWidth;                           //@synthesize arrowHeadWidth=_arrowHeadWidth - In the implementation block
@property (assign) double arrowHeadLength;                          //@synthesize arrowHeadLength=_arrowHeadLength - In the implementation block
@property (retain) UIColor * fillColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

