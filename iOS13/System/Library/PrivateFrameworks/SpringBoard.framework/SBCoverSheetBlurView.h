/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>

@class UIView, NSString;

@interface SBCoverSheetBlurView : UIView <SBWallpaperObserver> {

	double _blurRadius;
	double _weighting;
	/*^block*/id _scaleAdjustment;
	/*^block*/id _alphaAdjustment;
	UIView* _reduceTransparencyView;
	long long _variantToTrack;

}

@property (nonatomic,copy) id scaleAdjustment;                             //@synthesize scaleAdjustment=_scaleAdjustment - In the implementation block
@property (nonatomic,copy) id alphaAdjustment;                             //@synthesize alphaAdjustment=_alphaAdjustment - In the implementation block
@property (nonatomic,retain) UIView * reduceTransparencyView;              //@synthesize reduceTransparencyView=_reduceTransparencyView - In the implementation block
@property (assign,nonatomic) long long variantToTrack;                     //@synthesize variantToTrack=_variantToTrack - In the implementation block
@property (assign,nonatomic) double blurRadius;                            //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double weighting;                             //@synthesize weighting=_weighting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBlurRadius:(double)arg1 ;
-(id)backdropLayer;
-(double)blurRadius;
-(void)setWeighting:(double)arg1 ;
-(double)weighting;
-(void)_createFilters;
-(void)_reduceTransparencyEnabledStateDidChange:(id)arg1 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)setWeighting:(double)arg1 forPresentationValue:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 scaleAdjustment:(/*^block*/id)arg2 alphaAdjustment:(/*^block*/id)arg3 ;
-(void)setScaleAdjustment:(id)arg1 ;
-(void)setAlphaAdjustment:(id)arg1 ;
-(void)setVariantToTrack:(long long)arg1 ;
-(void)_configureForCurrentReduceTransparencySetting;
-(UIView *)reduceTransparencyView;
-(void)_updateForBlurRadius:(double)arg1 weighting:(double)arg2 forPresentationValue:(BOOL)arg3 ;
-(void)_createReduceTransparencyView;
-(void)_removeFilters;
-(void)_removeReduceTransparencyView;
-(id)_averageWallpaperColor;
-(void)setReduceTransparencyView:(UIView *)arg1 ;
-(id)scaleAdjustment;
-(id)alphaAdjustment;
-(long long)variantToTrack;
@end

