/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>

@class NSString;

@interface AKCropAnnotation : AKAnnotation <AKRectangularAnnotationProtocol> {

	BOOL _hidden;
	BOOL _cropApplied;
	BOOL _showHandles;
	CGColorRef _color;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (assign) BOOL hidden;                                     //@synthesize hidden=_hidden - In the implementation block
@property (assign) BOOL cropApplied;                                //@synthesize cropApplied=_cropApplied - In the implementation block
@property (assign) BOOL showHandles;                                //@synthesize showHandles=_showHandles - In the implementation block
@property (assign,nonatomic) CGColorRef color;                      //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(BOOL)cropApplied;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
-(void)setShowHandles:(BOOL)arg1 ;
-(void)setCropApplied:(BOOL)arg1 ;
-(BOOL)showHandles;
@end

