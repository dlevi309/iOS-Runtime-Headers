/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>
#import <libobjc.A.dylib/AKRotatableAnnotationProtocol.h>
#import <libobjc.A.dylib/AKStrokedAnnotationProtocol.h>

@class UIColor, UIBezierPath, NSString;

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol> {

	BOOL _dashed;
	BOOL _hasShadow;
	BOOL _pathIsPrestroked;
	BOOL _pathIsDot;
	double _rotationAngle;
	double _strokeWidth;
	UIColor* _strokeColor;
	long long _brushStyle;
	UIBezierPath* _path;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (assign) double rotationAngle;                            //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign) double strokeWidth;                              //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (retain) UIColor * strokeColor;                           //@synthesize strokeColor=_strokeColor - In the implementation block
@property (getter=isDashed) BOOL dashed;                            //@synthesize dashed=_dashed - In the implementation block
@property (getter=brushStyle) long long brushStyle;                 //@synthesize brushStyle=_brushStyle - In the implementation block
@property (assign) BOOL hasShadow;                                  //@synthesize hasShadow=_hasShadow - In the implementation block
@property (retain) UIBezierPath * path;                             //@synthesize path=_path - In the implementation block
@property (assign) BOOL pathIsPrestroked;                           //@synthesize pathIsPrestroked=_pathIsPrestroked - In the implementation block
@property (assign) BOOL pathIsDot;                                  //@synthesize pathIsDot=_pathIsDot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(id)displayName;
-(BOOL)hasShadow;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setHasShadow:(BOOL)arg1 ;
-(UIColor *)strokeColor;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setDashed:(BOOL)arg1 ;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(BOOL)isDashed;
-(CGRect)rectangle;
-(long long)brushStyle;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
-(BOOL)pathIsPrestroked;
-(BOOL)pathIsDot;
-(void)setPathIsPrestroked:(BOOL)arg1 ;
-(void)setBrushStyle:(long long)arg1 ;
-(void)setPathIsDot:(BOOL)arg1 ;
@end

