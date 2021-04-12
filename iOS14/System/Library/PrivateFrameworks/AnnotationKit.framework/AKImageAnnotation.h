/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>
#import <libobjc.A.dylib/AKRotatableAnnotationProtocol.h>
#import <libobjc.A.dylib/AKFlippableAnnotationProtocol.h>

@class UIImage, NSString;

@interface AKImageAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKFlippableAnnotationProtocol> {

	BOOL _hasShadow;
	BOOL _verticallyFlipped;
	BOOL _horizontallyFlipped;
	UIImage* _image;
	double _rotationAngle;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (assign) BOOL hasShadow;                                  //@synthesize hasShadow=_hasShadow - In the implementation block
@property (retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign) BOOL verticallyFlipped;                          //@synthesize verticallyFlipped=_verticallyFlipped - In the implementation block
@property (assign) BOOL horizontallyFlipped;                        //@synthesize horizontallyFlipped=_horizontallyFlipped - In the implementation block
@property (assign) double rotationAngle;                            //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setHasShadow:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasShadow;
-(id)displayName;
-(void)translateBy:(CGPoint)arg1 ;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(BOOL)verticallyFlipped;
-(void)setVerticallyFlipped:(BOOL)arg1 ;
-(BOOL)horizontallyFlipped;
-(void)setHorizontallyFlipped:(BOOL)arg1 ;
@end

