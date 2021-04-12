/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hidden;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(CGColorRef)color;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(void)dealloc;
-(void)translateBy:(CGPoint)arg1 ;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(BOOL)cropApplied;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(id)keysForValuesToObserveForAdornments;
-(void)setShowHandles:(BOOL)arg1 ;
-(void)setCropApplied:(BOOL)arg1 ;
-(BOOL)showHandles;
@end

