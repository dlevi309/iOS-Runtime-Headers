/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue;
@class NSArray, NSString, UIImageView, UIView, CAMZoomDialDotsView, NSObject;

@interface CAMZoomDial : UIView {

	BOOL _expanded;
	BOOL _hideLabels;
	BOOL __backgroundViewUpdateNeeded;
	BOOL __labelsUpdateNeeded;
	BOOL __dotsUpdateNeeded;
	BOOL __ticksUpdateNeeded;
	BOOL __maskUpdateNeeded;
	long long _style;
	NSArray* _zoomFactors;
	double _minAvailableZoomFactor;
	double _maxAvailableZoomFactor;
	double _zoomFactor;
	double _contentMaskingHeight;
	double _contractionDistance;
	long long _orientation;
	NSString* _contentSizeCategory;
	UIImageView* __backgroundView;
	UIView* __contentContainerView;
	UIView* __labelContainerView;
	UIImageView* __ticksView;
	UIImageView* __contentMaskView;
	UIView* __needleView;
	NSArray* __focalLengthLabelsPortrait;
	NSArray* __focalLengthLabelsLandscape;
	NSArray* __labels;
	CAMZoomDialDotsView* __activeDots;
	CAMZoomDialDotsView* __inactiveDots;
	NSObject*<OS_dispatch_queue> __imageGenerationQueue;
	long long __backgroundImageJobIdentifier;
	long long __ticksImageJobIdentifier;
	long long __maskImageJobIdentifier;

}

@property (nonatomic,readonly) BOOL _useDots; 
@property (nonatomic,readonly) BOOL _useTicks; 
@property (nonatomic,readonly) double _backgroundAlpha; 
@property (nonatomic,readonly) UIImageView * _backgroundView;                                                                                           //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * _contentContainerView;                                                                                          //@synthesize _contentContainerView=__contentContainerView - In the implementation block
@property (nonatomic,readonly) UIView * _labelContainerView;                                                                                            //@synthesize _labelContainerView=__labelContainerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _ticksView;                                                                                                //@synthesize _ticksView=__ticksView - In the implementation block
@property (nonatomic,readonly) UIImageView * _contentMaskView;                                                                                          //@synthesize _contentMaskView=__contentMaskView - In the implementation block
@property (nonatomic,readonly) UIView * _needleView;                                                                                                    //@synthesize _needleView=__needleView - In the implementation block
@property (setter=_setFocalLengthLabelsPortrait:,nonatomic,retain) NSArray * _focalLengthLabelsPortrait;                                                //@synthesize _focalLengthLabelsPortrait=__focalLengthLabelsPortrait - In the implementation block
@property (setter=_setFocalLengthLabelsLandscape:,nonatomic,retain) NSArray * _focalLengthLabelsLandscape;                                              //@synthesize _focalLengthLabelsLandscape=__focalLengthLabelsLandscape - In the implementation block
@property (setter=_setLabels:,nonatomic,retain) NSArray * _labels;                                                                                      //@synthesize _labels=__labels - In the implementation block
@property (nonatomic,readonly) CAMZoomDialDotsView * _activeDots;                                                                                       //@synthesize _activeDots=__activeDots - In the implementation block
@property (nonatomic,readonly) CAMZoomDialDotsView * _inactiveDots;                                                                                     //@synthesize _inactiveDots=__inactiveDots - In the implementation block
@property (nonatomic,readonly) double _fullRadius; 
@property (nonatomic,readonly) double _fullRadiusInset; 
@property (nonatomic,readonly) double _radiusDelta; 
@property (nonatomic,readonly) double _borderStrokeWidth; 
@property (nonatomic,readonly) double _tickLabelCenterRadialInset; 
@property (nonatomic,readonly) double _focalLengthInsetPortrait; 
@property (nonatomic,readonly) double _focalLengthInsetLandscape; 
@property (nonatomic,readonly) double _labelPaddingForContentSizeCategory; 
@property (assign,setter=_setBackgroundViewUpdateNeeded:,getter=_isBackgroundViewUpdateNeeded,nonatomic) BOOL _backgroundViewUpdateNeeded;              //@synthesize _backgroundViewUpdateNeeded=__backgroundViewUpdateNeeded - In the implementation block
@property (assign,setter=_setLabelsUpdateNeeded:,getter=_isLabelsUpdateNeeded,nonatomic) BOOL _labelsUpdateNeeded;                                      //@synthesize _labelsUpdateNeeded=__labelsUpdateNeeded - In the implementation block
@property (assign,setter=_setDotsUpdateNeeded:,getter=_isDotsUpdateNeeded,nonatomic) BOOL _dotsUpdateNeeded;                                            //@synthesize _dotsUpdateNeeded=__dotsUpdateNeeded - In the implementation block
@property (assign,setter=_setTicksUpdateNeeded:,getter=_isTicksUpdateNeeded,nonatomic) BOOL _ticksUpdateNeeded;                                         //@synthesize _ticksUpdateNeeded=__ticksUpdateNeeded - In the implementation block
@property (assign,setter=_setMaskUpdateNeeded:,getter=_isMaskUpdateNeeded,nonatomic) BOOL _maskUpdateNeeded;                                            //@synthesize _maskUpdateNeeded=__maskUpdateNeeded - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _imageGenerationQueue;                                                                      //@synthesize _imageGenerationQueue=__imageGenerationQueue - In the implementation block
@property (assign,setter=_setBackgroundImageJobIdentifier:,nonatomic) long long _backgroundImageJobIdentifier;                                          //@synthesize _backgroundImageJobIdentifier=__backgroundImageJobIdentifier - In the implementation block
@property (assign,setter=_setTicksImageJobIdentifier:,nonatomic) long long _ticksImageJobIdentifier;                                                    //@synthesize _ticksImageJobIdentifier=__ticksImageJobIdentifier - In the implementation block
@property (assign,setter=_setMaskImageJobIdentifier:,nonatomic) long long _maskImageJobIdentifier;                                                      //@synthesize _maskImageJobIdentifier=__maskImageJobIdentifier - In the implementation block
@property (nonatomic,readonly) long long style;                                                                                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSArray * zoomFactors;                                                                                                     //@synthesize zoomFactors=_zoomFactors - In the implementation block
@property (nonatomic,readonly) double minimumZoomFactor; 
@property (nonatomic,readonly) double maximumZoomFactor; 
@property (assign,nonatomic) double minAvailableZoomFactor;                                                                                             //@synthesize minAvailableZoomFactor=_minAvailableZoomFactor - In the implementation block
@property (assign,nonatomic) double maxAvailableZoomFactor;                                                                                             //@synthesize maxAvailableZoomFactor=_maxAvailableZoomFactor - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                                                                                         //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) double contentMaskingHeight;                                                                                               //@synthesize contentMaskingHeight=_contentMaskingHeight - In the implementation block
@property (assign,nonatomic) double contractionDistance;                                                                                                //@synthesize contractionDistance=_contractionDistance - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                                           //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                                     //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL hideLabels;                                                                                                           //@synthesize hideLabels=_hideLabels - In the implementation block
@property (nonatomic,readonly) CGPoint dialCenter; 
@property (nonatomic,readonly) double dotCenterInset; 
@property (nonatomic,readonly) double dialBorderWidth; 
@property (nonatomic,readonly) double angleDeltaForZoomRange; 
@property (nonatomic,copy) NSString * contentSizeCategory;                                                                                              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
+(double)_normalizedValueForZoomFactor:(double)arg1 min:(double)arg2 max:(double)arg3 ;
+(double)_offsetAngleForZoomFactor:(double)arg1 relativeToCurrentZoomFactor:(BOOL)arg2 currentZoomFactor:(double)arg3 min:(double)arg4 max:(double)arg5 signedAngleDeltaForZoomRange:(double)arg6 ;
+(CGPoint)_pointForOffsetAngle:(double)arg1 dialCenter:(CGPoint)arg2 radius:(double)arg3 ;
+(id)_createBackgroundImageForBounds:(CGRect)arg1 dialCenter:(CGPoint)arg2 radius:(double)arg3 backgroundAlpha:(double)arg4 borderStrokeWidth:(double)arg5 ;
+(id)_createTicksImageForBounds:(CGRect)arg1 dialCenter:(CGPoint)arg2 radius:(double)arg3 pixelWidth:(double)arg4 zoomFactors:(id)arg5 minAvailableZoomFactor:(double)arg6 maxAvailableZoomFactor:(double)arg7 signedAngleDeltaForZoomRange:(double)arg8 ;
+(id)_createMaskImageWithSize:(CGSize)arg1 tickLabelCenterRadialInset:(double)arg2 notchMaskImage:(id)arg3 labelMaskImage:(id)arg4 ;
-(long long)orientation;
-(long long)style;
-(void)setOrientation:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSArray *)_labels;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setFrame:(CGRect)arg1 ;
-(UIImageView *)_backgroundView;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(UIView *)_labelContainerView;
-(double)_backgroundAlpha;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(double)zoomFactor;
-(UIImageView *)_contentMaskView;
-(void)setZoomFactor:(double)arg1 ;
-(UIView *)_contentContainerView;
-(void)_updateLabels;
-(void)_updateContentIfNeeded;
-(NSObject*<OS_dispatch_queue>)_imageGenerationQueue;
-(void)setMinAvailableZoomFactor:(double)arg1 ;
-(void)setMaxAvailableZoomFactor:(double)arg1 ;
-(void)setZoomFactors:(NSArray *)arg1 ;
-(double)minimumZoomFactor;
-(double)minAvailableZoomFactor;
-(double)maximumZoomFactor;
-(double)maxAvailableZoomFactor;
-(double)contentMaskingHeight;
-(void)setContentMaskingHeight:(double)arg1 ;
-(double)dialBorderWidth;
-(void)removeInternalAnimationsAndSetToCurrentPresentationValues:(BOOL)arg1 ;
-(void)setHideLabels:(BOOL)arg1 ;
-(CGPoint)textCenterForZoomFactor:(double)arg1 assumeExpanded:(BOOL)arg2 ;
-(void)setContractionDistance:(double)arg1 ;
-(CGPoint)dialCenter;
-(double)offsetAngleForPoint:(CGPoint)arg1 ;
-(double)offsetAngleForZoomFactor:(double)arg1 ;
-(double)zoomFactorForOffsetAngle:(double)arg1 ;
-(NSArray *)zoomFactors;
-(double)angleDeltaForZoomRange;
-(double)normalizedValueForZoomFactor:(double)arg1 ;
-(double)zoomFactorForNormalizedValue:(double)arg1 ;
-(void)_commonCAMZoomDialInitialization;
-(BOOL)_useDots;
-(BOOL)_useTicks;
-(id)_createDotImage;
-(void)_setLabelsUpdateNeeded:(BOOL)arg1 ;
-(void)_setDotsUpdateNeeded:(BOOL)arg1 ;
-(void)_setTicksUpdateNeeded:(BOOL)arg1 ;
-(void)_setMaskUpdateNeeded:(BOOL)arg1 ;
-(double)contractionDistance;
-(BOOL)_isLabelsUpdateNeeded;
-(void)_updateFocalLengthLabels;
-(BOOL)_isDotsUpdateNeeded;
-(void)_updateDots;
-(void)_updateTicksImageIfNeeded;
-(void)_updateMaskImageIfNeeded;
-(void)_setLabels:(id)arg1 ;
-(void)_setFocalLengthLabelsPortrait:(id)arg1 ;
-(void)_setFocalLengthLabelsLandscape:(id)arg1 ;
-(void)_updateFocalLengthLabelAlphas;
-(CAMZoomDialDotsView *)_activeDots;
-(CAMZoomDialDotsView *)_inactiveDots;
-(double)_offsetAngleForZoomFactor:(double)arg1 relativeToCurrentZoomFactor:(BOOL)arg2 ;
-(NSArray *)_focalLengthLabelsPortrait;
-(NSArray *)_focalLengthLabelsLandscape;
-(double)_fullRadiusInset;
-(double)_borderStrokeWidth;
-(double)_labelPaddingForContentSizeCategory;
-(double)_tickLabelCenterRadialInset;
-(double)_focalLengthInsetPortrait;
-(double)_signedAngleDeltaForZoomRange;
-(double)_radiusDelta;
-(double)_fullRadius;
-(CGPoint)_dotCenterForOffsetAngle:(double)arg1 assumeExpanded:(BOOL)arg2 ;
-(CGPoint)_pointForOffsetAngle:(double)arg1 radialInset:(double)arg2 assumeExpanded:(BOOL)arg3 ;
-(CGPoint)_textCenterForOffsetAngle:(double)arg1 assumeExpanded:(BOOL)arg2 ;
-(void)_invalidateImagesForViewSize;
-(void)_setBackgroundViewUpdateNeeded:(BOOL)arg1 ;
-(void)_updateBackroundImageViewIfNeeded;
-(void)_layoutSubviewsWithDots;
-(void)_layoutSubviewsWithTicks;
-(void)_layoutBackgroundAndContainerWithContentInset:(double)arg1 ;
-(CGPoint)_dotCenterForZoomFactor:(double)arg1 assumeExpanded:(BOOL)arg2 relativeToCurrentZoomFactor:(BOOL)arg3 ;
-(double)_labelRotationAngleForOrientation;
-(UIImageView *)_ticksView;
-(UIView *)_needleView;
-(double)_focalLengthInsetLandscape;
-(BOOL)_isBackgroundViewUpdateNeeded;
-(long long)_backgroundImageJobIdentifier;
-(void)_setBackgroundImageJobIdentifier:(long long)arg1 ;
-(BOOL)_isTicksUpdateNeeded;
-(long long)_ticksImageJobIdentifier;
-(void)_setTicksImageJobIdentifier:(long long)arg1 ;
-(BOOL)_isMaskUpdateNeeded;
-(long long)_maskImageJobIdentifier;
-(void)_setMaskImageJobIdentifier:(long long)arg1 ;
-(double)dotCenterInset;
-(CGPoint)_tickEndpointForOffsetAngle:(double)arg1 isTop:(BOOL)arg2 ;
-(BOOL)hideLabels;
@end
