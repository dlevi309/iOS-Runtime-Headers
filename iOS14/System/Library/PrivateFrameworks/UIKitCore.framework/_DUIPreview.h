/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIBezierPath, UIDragPreviewParameters;

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying> {

	BOOL _fadesHorizontally;
	BOOL _fadesVertically;
	BOOL _hidesSourceView;
	BOOL _avoidAnimation;
	BOOL _wantsSuppressedMask;
	unsigned _coordinateSpaceSourceContextID;
	UIColor* _backgroundColor;
	UIBezierPath* _outline;
	UIBezierPath* _shadowPath;
	unsigned long long _coordinateSpaceSourceLayerRenderID;
	double _originalRotation;
	long long _previewMode;
	CGPoint _contentOffset;
	CGSize _contentSize;
	CGPoint _originalCenter;
	CGPoint _originalCenterInCoordinateSpace;
	CGPoint _liftAnchorPoint;
	CGSize _viewScaleFactor;

}

@property (nonatomic,readonly) CGSize viewScaleFactor;                                           //@synthesize viewScaleFactor=_viewScaleFactor - In the implementation block
@property (nonatomic,readonly) BOOL _springboardPlatterStyle; 
@property (nonatomic,readonly) double backAlpha; 
@property (nonatomic,copy) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) CGSize boundingSize; 
@property (nonatomic,readonly) CGPoint contentOffset;                                            //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGPoint croppedScaledAnchorPoint; 
@property (nonatomic,readonly) CGSize croppedScaledSize; 
@property (assign,nonatomic) BOOL fadesHorizontally;                                             //@synthesize fadesHorizontally=_fadesHorizontally - In the implementation block
@property (assign,nonatomic) BOOL fadesVertically;                                               //@synthesize fadesVertically=_fadesVertically - In the implementation block
@property (nonatomic,readonly) double liftAlpha; 
@property (nonatomic,readonly) CGAffineTransform liftTransform; 
@property (assign,nonatomic) BOOL hidesSourceView;                                               //@synthesize hidesSourceView=_hidesSourceView - In the implementation block
@property (nonatomic,copy) UIBezierPath * outline;                                               //@synthesize outline=_outline - In the implementation block
@property (nonatomic,copy) UIBezierPath * shadowPath;                                            //@synthesize shadowPath=_shadowPath - In the implementation block
@property (nonatomic,readonly) UIBezierPath * effectiveShadowPath; 
@property (assign,nonatomic) CGPoint originalCenter;                                             //@synthesize originalCenter=_originalCenter - In the implementation block
@property (assign,nonatomic) CGPoint originalCenterInCoordinateSpace;                            //@synthesize originalCenterInCoordinateSpace=_originalCenterInCoordinateSpace - In the implementation block
@property (assign,nonatomic) unsigned coordinateSpaceSourceContextID;                            //@synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID - In the implementation block
@property (assign,nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;              //@synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID - In the implementation block
@property (assign,nonatomic) double originalRotation;                                            //@synthesize originalRotation=_originalRotation - In the implementation block
@property (getter=isOversized,nonatomic,readonly) BOOL oversized; 
@property (nonatomic,readonly) double scaleFactor; 
@property (nonatomic,readonly) CGSize scaledSize; 
@property (nonatomic,readonly) double stackAlpha; 
@property (assign,nonatomic) BOOL textMode; 
@property (assign,nonatomic) long long previewMode;                                              //@synthesize previewMode=_previewMode - In the implementation block
@property (nonatomic,readonly) double topAlpha; 
@property (nonatomic,readonly) CGPoint unscaledAnchorPoint; 
@property (nonatomic,readonly) CGSize unscaledSize; 
@property (nonatomic,readonly) UIDragPreviewParameters * parameters; 
@property (assign,nonatomic) CGPoint liftAnchorPoint;                                            //@synthesize liftAnchorPoint=_liftAnchorPoint - In the implementation block
@property (assign,nonatomic) BOOL avoidAnimation;                                                //@synthesize avoidAnimation=_avoidAnimation - In the implementation block
@property (assign,nonatomic) BOOL wantsSuppressedMask;                                           //@synthesize wantsSuppressedMask=_wantsSuppressedMask - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultPreviewWithFrame:(CGRect)arg1 ;
+(double)defaultStackAlpha;
-(UIDragPreviewParameters *)parameters;
-(double)scaleFactor;
-(UIBezierPath *)outline;
-(id)init;
-(CGSize)contentSize;
-(BOOL)hidesSourceView;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)textMode;
-(double)topAlpha;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)previewMode;
-(UIColor *)backgroundColor;
-(double)liftAlpha;
-(double)backAlpha;
-(BOOL)wantsSuppressedMask;
-(UIBezierPath *)effectiveShadowPath;
-(CGAffineTransform)liftTransform;
-(CGSize)croppedScaledSize;
-(double)originalRotation;
-(double)stackAlpha;
-(UIBezierPath *)shadowPath;
-(double)_topOffset;
-(CGSize)scaledSize;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isOversized;
-(void)setOutline:(UIBezierPath *)arg1 ;
-(BOOL)_springboardPlatterStyle;
-(id)initWithBounds:(CGRect)arg1 outline:(id)arg2 ;
-(id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 center:(CGPoint)arg4 ;
-(CGPoint)unscaledAnchorPoint;
-(id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 ;
-(CGPoint)croppedScaledAnchorPoint;
-(BOOL)fadesHorizontally;
-(void)setFadesHorizontally:(BOOL)arg1 ;
-(void)setFadesVertically:(BOOL)arg1 ;
-(CGSize)unscaledSize;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(CGPoint)originalCenterInCoordinateSpace;
-(CGSize)boundingSize;
-(void)setTextMode:(BOOL)arg1 ;
-(void)setOriginalCenterInCoordinateSpace:(CGPoint)arg1 ;
-(unsigned)coordinateSpaceSourceContextID;
-(void)setOriginalRotation:(double)arg1 ;
-(void)setCoordinateSpaceSourceContextID:(unsigned)arg1 ;
-(void)setAvoidAnimation:(BOOL)arg1 ;
-(unsigned long long)coordinateSpaceSourceLayerRenderID;
-(void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1 ;
-(BOOL)avoidAnimation;
-(void)setWantsSuppressedMask:(BOOL)arg1 ;
-(void)setLiftAnchorPoint:(CGPoint)arg1 ;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(CGPoint)contentOffset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)originalCenter;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)viewScaleFactor;
-(CGPoint)liftAnchorPoint;
-(void)setPreviewMode:(long long)arg1 ;
-(BOOL)fadesVertically;
@end

