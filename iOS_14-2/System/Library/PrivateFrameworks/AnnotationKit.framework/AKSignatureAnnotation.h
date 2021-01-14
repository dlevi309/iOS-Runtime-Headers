/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>
#import <libobjc.A.dylib/AKRotatableAnnotationProtocol.h>

@class AKSignature, UIColor, NSString;

@interface AKSignatureAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol> {

	AKSignature* _signature;
	UIColor* _strokeColor;
	double _rotationAngle;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (retain) AKSignature * signature;                         //@synthesize signature=_signature - In the implementation block
@property (retain) UIColor * strokeColor;                           //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign) double rotationAngle;                            //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(UIColor *)strokeColor;
-(double)rotationAngle;
-(AKSignature *)signature;
-(void)setRotationAngle:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSignature:(AKSignature *)arg1 ;
-(id)displayName;
-(void)translateBy:(CGPoint)arg1 ;
-(BOOL)shouldBurnIn;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
@end

