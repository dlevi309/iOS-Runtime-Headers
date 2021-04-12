/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKParentAnnotationProtocol.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>
#import <libobjc.A.dylib/AKFilledAnnotationProtocol.h>

@class UIColor, AKAnnotation, NSString;

@interface AKNoteAnnotation : AKAnnotation <AKParentAnnotationProtocol, AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol> {

	UIColor* _fillColor;
	AKAnnotation* _childAnnotation;
	NSString* _contents;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (retain) UIColor * fillColor;                             //@synthesize fillColor=_fillColor - In the implementation block
@property (__weak) AKAnnotation * childAnnotation;                  //@synthesize childAnnotation=_childAnnotation - In the implementation block
@property (copy) NSString * contents;                               //@synthesize contents=_contents - In the implementation block
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
-(NSString *)contents;
-(id)displayName;
-(void)setContents:(NSString *)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setRectangle:(CGRect)arg1 ;
-(AKAnnotation *)childAnnotation;
-(void)setChildAnnotation:(AKAnnotation *)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
@end

