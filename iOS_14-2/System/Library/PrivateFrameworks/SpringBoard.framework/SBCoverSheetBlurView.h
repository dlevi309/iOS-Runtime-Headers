/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) double blurRadius;                     //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double weighting;                      //@synthesize weighting=_weighting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)setBlurRadius:(double)arg1 ;
-(void)_createFilters;
-(double)weighting;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)setWeighting:(double)arg1 ;
-(id)_averageWallpaperColor;
-(id)initWithFrame:(CGRect)arg1 scaleAdjustment:(/*^block*/id)arg2 alphaAdjustment:(/*^block*/id)arg3 ;
-(double)blurRadius;
-(void)_configureForCurrentReduceTransparencySetting;
-(void)_createReduceTransparencyView;
-(void)layoutSubviews;
-(void)setWeighting:(double)arg1 forPresentationValue:(BOOL)arg2 ;
-(void)_removeReduceTransparencyView;
-(void)_removeFilters;
-(void)_updateForBlurRadius:(double)arg1 weighting:(double)arg2 forPresentationValue:(BOOL)arg3 ;
-(id)backdropLayer;
-(void)_reduceTransparencyEnabledStateDidChange:(id)arg1 ;
-(void)dealloc;
@end

