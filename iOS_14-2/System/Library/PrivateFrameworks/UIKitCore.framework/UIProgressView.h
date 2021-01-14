/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, UIView, UIImageView, NSArray, UIVisualEffectView, NSProgress, NSObservation, UIImage;

@interface UIProgressView : UIView <NSCoding> {

	long long _progressViewStyle;
	float _progress;
	long long _barStyle;
	UIColor* _progressTintColor;
	UIColor* _trackTintColor;
	UIView* _contentView;
	UIImageView* _trackView;
	UIImageView* _progressView;
	BOOL _isAnimating;
	NSArray* _trackColors;
	NSArray* _progressColors;
	UIVisualEffectView* _effectView;
	NSProgress* _observedProgress;
	NSObservation* _progressObservation;
	UIView* _shadowView;
	double _currentCornerRadius;
	UIImage* _trackImage;
	UIImage* _progressImage;

}

@property (assign,nonatomic) long long progressViewStyle;                //@synthesize progressViewStyle=_progressViewStyle - In the implementation block
@property (assign,nonatomic) float progress;                             //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                   //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIImage * progressImage;                    //@synthesize progressImage=_progressImage - In the implementation block
@property (nonatomic,retain) UIImage * trackImage;                       //@synthesize trackImage=_trackImage - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;              //@synthesize observedProgress=_observedProgress - In the implementation block
+(id)_tintedImageWithTraitCollection:(id)arg1 forHeight:(double)arg2 andColors:(id)arg3 roundingRectCorners:(unsigned long long)arg4 ;
+(unsigned long long)_indexForStyle:(long long)arg1 barStyle:(long long)arg2 ;
+(CGSize)defaultSize;
+(void)_fillImagesForIndex:(unsigned long long)arg1 style:(long long)arg2 barStyle:(long long)arg3 ;
+(id)_standardOuterImageForStyle:(long long)arg1 barStyle:(long long)arg2 ;
+(id)_tintedImageWithTraitCollection:(id)arg1 forHeight:(double)arg2 andColors:(id)arg3 ;
+(id)_standardInnerImageForStyle:(long long)arg1 barStyle:(long long)arg2 ;
-(id)_effectiveContentView;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setBarStyle:(long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(long long)barStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)progress;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)trackImage;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setupShadow;
-(BOOL)_shouldTintTrack;
-(void)_setupProgressViewCommon;
-(UIImage *)progressImage;
-(void)setProgressViewStyle:(long long)arg1 ;
-(BOOL)_shouldTintProgress;
-(UIColor *)trackTintColor;
-(id)_defaultTrackColorForCurrentStyle;
-(UIColor *)progressTintColor;
-(NSProgress *)observedProgress;
-(unsigned long long)_roundedCornersForTrackForCurrentStyle;
-(id)_appropriateTrackImage;
-(unsigned long long)_roundedCornersForProgressForCurrentStyle;
-(id)_appropriateProgressImage;
-(double)_shadowOpacityForUserInterfaceStyle:(long long)arg1 ;
-(id)initWithProgressViewStyle:(long long)arg1 ;
-(void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 ;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)_updateCornerRadiusWithSize:(CGSize)arg1 ;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(void)_setProgressColor:(id)arg1 ;
-(void)setProgressImage:(UIImage *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(void)setTrackImage:(UIImage *)arg1 ;
-(long long)progressViewStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_layoutShadow;
-(void)_updateImages;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_setProgress:(float)arg1 ;
-(void)_reducedTransparencyDidChange:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_progressColor;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
@end

