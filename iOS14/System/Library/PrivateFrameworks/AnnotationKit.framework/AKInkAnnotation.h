/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>

@class PKDrawing, NSString;

@interface AKInkAnnotation : AKAnnotation <AKRectangularAnnotationProtocol> {

	PKDrawing* _drawing;
	CGSize _drawingSize;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (retain) PKDrawing * drawing;                             //@synthesize drawing=_drawing - In the implementation block
@property (assign) CGSize drawingSize;                              //@synthesize drawingSize=_drawingSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKDrawing *)drawing;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(CGSize)drawingSize;
-(void)translateBy:(CGPoint)arg1 ;
-(BOOL)shouldBurnIn;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(id)keysForValuesToObserveForAdornments;
-(void)setDrawingSize:(CGSize)arg1 ;
@end

