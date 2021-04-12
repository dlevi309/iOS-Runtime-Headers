/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKStrokedAnnotationProtocol.h>

@class UIColor, NSString;

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol> {

	BOOL _dashed;
	BOOL _hasShadow;
	double _strokeWidth;
	UIColor* _strokeColor;
	long long _brushStyle;

}

@property (assign) double strokeWidth;                              //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (retain) UIColor * strokeColor;                           //@synthesize strokeColor=_strokeColor - In the implementation block
@property (getter=isDashed) BOOL dashed;                            //@synthesize dashed=_dashed - In the implementation block
@property (assign) long long brushStyle;                            //@synthesize brushStyle=_brushStyle - In the implementation block
@property (assign) BOOL hasShadow;                                  //@synthesize hasShadow=_hasShadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(UIColor *)strokeColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHasShadow:(BOOL)arg1 ;
-(double)strokeWidth;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasShadow;
-(id)displayName;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setDashed:(BOOL)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(BOOL)isDashed;
-(long long)brushStyle;
-(id)keysForValuesToObserveForRedrawing;
-(void)setBrushStyle:(long long)arg1 ;
@end

