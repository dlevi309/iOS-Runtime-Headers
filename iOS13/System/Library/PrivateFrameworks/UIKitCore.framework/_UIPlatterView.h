/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _DUIPreview, UIView, NSValue, _UIShapeView, _UIPortalView, _UIPlatterSoftShadowView;

@interface _UIPlatterView : UIView {

	BOOL _constrainSize;
	BOOL _lifted;
	BOOL _backgroundVisible;
	BOOL _shadowVisible;
	BOOL _appliesOriginalRotation;
	BOOL _constrainSizeWhenNotLifted;
	BOOL _transformAppliedExternally;
	BOOL _flipped;
	BOOL _precisionMode;
	_DUIPreview* _preview;
	double _orientationRotation;
	double _rotation;
	UIView* _componentView;
	double _stackRotation;
	NSValue* _anchorPointValueToAdjustToOnMoveToWindow;
	UIView* _backgroundView;
	_UIShapeView* _platterMaskView;
	_UIShapeView* _portalMaskView;
	_UIPortalView* _portalView;
	UIView* _portalWrapperView;
	_UIPlatterSoftShadowView* _shadowView;
	CGPoint _offset;
	CGSize _overrideSize;
	CGSize _contentSize;
	UIEdgeInsets _contentInsets;
	CGAffineTransform _additionalTransform;
	CGAffineTransform _containerCounterScaleTransform;
	CGAffineTransform _containerCounterRotationTransform;

}

@property (nonatomic,readonly) UIView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) _UIShapeView * platterMaskView;                                 //@synthesize platterMaskView=_platterMaskView - In the implementation block
@property (nonatomic,readonly) _UIShapeView * portalMaskView;                                  //@synthesize portalMaskView=_portalMaskView - In the implementation block
@property (nonatomic,retain) _UIPortalView * portalView;                                       //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,readonly) UIView * portalWrapperView;                                     //@synthesize portalWrapperView=_portalWrapperView - In the implementation block
@property (nonatomic,readonly) _UIPlatterSoftShadowView * shadowView;                          //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic) CGAffineTransform containerCounterScaleTransform;                 //@synthesize containerCounterScaleTransform=_containerCounterScaleTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform containerCounterRotationTransform;              //@synthesize containerCounterRotationTransform=_containerCounterRotationTransform - In the implementation block
@property (nonatomic,copy,readonly) _DUIPreview * preview;                                     //@synthesize preview=_preview - In the implementation block
@property (nonatomic,readonly) CGPoint badgeLocation; 
@property (assign,nonatomic) BOOL constrainSize;                                               //@synthesize constrainSize=_constrainSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (assign,getter=isLifted,nonatomic) BOOL lifted;                                      //@synthesize lifted=_lifted - In the implementation block
@property (assign,getter=isBackgroundVisible,nonatomic) BOOL backgroundVisible;                //@synthesize backgroundVisible=_backgroundVisible - In the implementation block
@property (assign,getter=isShadowVisible,nonatomic) BOOL shadowVisible;                        //@synthesize shadowVisible=_shadowVisible - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double orientationRotation;                                       //@synthesize orientationRotation=_orientationRotation - In the implementation block
@property (assign,nonatomic) CGSize overrideSize;                                              //@synthesize overrideSize=_overrideSize - In the implementation block
@property (assign,nonatomic) BOOL appliesOriginalRotation;                                     //@synthesize appliesOriginalRotation=_appliesOriginalRotation - In the implementation block
@property (assign,nonatomic) double rotation;                                                  //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView; 
@property (nonatomic,retain) UIView * componentView;                                           //@synthesize componentView=_componentView - In the implementation block
@property (assign,nonatomic) double stackRotation;                                             //@synthesize stackRotation=_stackRotation - In the implementation block
@property (nonatomic,retain) NSValue * anchorPointValueToAdjustToOnMoveToWindow;               //@synthesize anchorPointValueToAdjustToOnMoveToWindow=_anchorPointValueToAdjustToOnMoveToWindow - In the implementation block
@property (assign,nonatomic) BOOL constrainSizeWhenNotLifted;                                  //@synthesize constrainSizeWhenNotLifted=_constrainSizeWhenNotLifted - In the implementation block
@property (assign,nonatomic) CGAffineTransform additionalTransform;                            //@synthesize additionalTransform=_additionalTransform - In the implementation block
@property (nonatomic,readonly) CATransform3D targetTransform; 
@property (assign,nonatomic) BOOL transformAppliedExternally;                                  //@synthesize transformAppliedExternally=_transformAppliedExternally - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,getter=isFlipped,nonatomic) BOOL flipped;                                    //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) BOOL precisionMode;                                               //@synthesize precisionMode=_precisionMode - In the implementation block
-(void)setFlipped:(BOOL)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGSize)contentSize;
-(BOOL)isFlipped;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(double)scaleFactor;
-(CGPoint)offset;
-(UIView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(CGPoint)contentOffset;
-(UIView *)sourceView;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)setOverrideSize:(CGSize)arg1 ;
-(CGSize)overrideSize;
-(_UIPlatterSoftShadowView *)shadowView;
-(void)setSourceView:(UIView *)arg1 ;
-(_DUIPreview *)preview;
-(BOOL)isLifted;
-(CATransform3D)targetTransform;
-(id)initWithDUIPreview:(id)arg1 ;
-(void)setAppliesOriginalRotation:(BOOL)arg1 ;
-(void)takeCounterTransformsToAddToContainer:(id)arg1 ;
-(void)setLifted:(BOOL)arg1 ;
-(void)setComponentView:(UIView *)arg1 ;
-(BOOL)constrainSize;
-(void)updateTransform;
-(UIView *)portalWrapperView;
-(void)setShadowVisible:(BOOL)arg1 ;
-(void)setBackgroundVisible:(BOOL)arg1 ;
-(BOOL)constrainSizeWhenNotLifted;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(CATransform3D)scaleTransform;
-(double)orientationRotation;
-(double)stackRotation;
-(BOOL)transformAppliedExternally;
-(id)initWithDUIPreview:(id)arg1 imageComponent:(id)arg2 ;
-(id)initWithPreview:(id)arg1 ;
-(id)initWithDroppedItem:(id)arg1 ;
-(CGPoint)badgeLocation;
-(void)setConstrainSize:(BOOL)arg1 ;
-(void)setComponentViews:(id)arg1 ;
-(void)setOrientationRotation:(double)arg1 ;
-(void)setStackRotation:(double)arg1 ;
-(void)setTransformAppliedExternally:(BOOL)arg1 ;
-(void)_unmaskPlatterView;
-(BOOL)isBackgroundVisible;
-(BOOL)isShadowVisible;
-(BOOL)appliesOriginalRotation;
-(UIView *)componentView;
-(NSValue *)anchorPointValueToAdjustToOnMoveToWindow;
-(void)setAnchorPointValueToAdjustToOnMoveToWindow:(NSValue *)arg1 ;
-(void)setConstrainSizeWhenNotLifted:(BOOL)arg1 ;
-(CGAffineTransform)additionalTransform;
-(void)setAdditionalTransform:(CGAffineTransform)arg1 ;
-(BOOL)precisionMode;
-(void)setPrecisionMode:(BOOL)arg1 ;
-(_UIShapeView *)platterMaskView;
-(_UIShapeView *)portalMaskView;
-(CGAffineTransform)containerCounterScaleTransform;
-(void)setContainerCounterScaleTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)containerCounterRotationTransform;
-(void)setContainerCounterRotationTransform:(CGAffineTransform)arg1 ;
@end

