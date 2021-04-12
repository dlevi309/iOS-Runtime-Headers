/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CEKApertureSliderDelegate.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutDynamicAdaptable.h>

@protocol PUPhotoEditApertureToolbarDelegate;
@class UIView, _UIBackdropView, NSMutableArray, NSString, CEKApertureSlider, UILabel;

@interface PUPhotoEditApertureToolbar : UIViewController <CEKApertureSliderDelegate, PUPhotoEditLayoutDynamicAdaptable> {

	UIView* _solidBackgroundView;
	_UIBackdropView* _backdropBackgroundView;
	BOOL _isResizing;
	CGSize _cachedSize;
	NSMutableArray* _constraints;
	BOOL _useTranslucentBackground;
	id<PUPhotoEditApertureToolbarDelegate> delegate;
	long long _layoutOrientation;
	double _sliderWidth;
	NSString* _backdropViewGroupName;
	CEKApertureSlider* _slider;
	UILabel* _depthEffectLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) CEKApertureSlider * slider;                                          //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UILabel * depthEffectLabel;                                          //@synthesize depthEffectLabel=_depthEffectLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditApertureToolbarDelegate> delegate; 
@property (assign,nonatomic) double sliderWidth;                                                  //@synthesize sliderWidth=_sliderWidth - In the implementation block
@property (nonatomic,readonly) double apertureValue; 
@property (nonatomic,readonly) double originalApertureValue; 
@property (assign,nonatomic) double minimumApertureValue; 
@property (assign,nonatomic) double maximumApertureValue; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) UIEdgeInsets preferredPreviewViewInsets; 
@property (assign,nonatomic) BOOL useTranslucentBackground;                                       //@synthesize useTranslucentBackground=_useTranslucentBackground - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                                      //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long layoutOrientation;                                         //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
-(void)updateViewConstraints;
-(BOOL)enabled;
-(long long)layoutOrientation;
-(CEKApertureSlider *)slider;
-(id)init;
-(id<PUPhotoEditApertureToolbarDelegate>)delegate;
-(UIEdgeInsets)preferredPreviewViewInsets;
-(void)_updateBackgroundAnimated:(BOOL)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(double)apertureValue;
-(void)setOriginalApertureValueClosestTo:(double)arg1 ;
-(void)setApertureValueClosestTo:(double)arg1 ;
-(void)setMaximumApertureValue:(double)arg1 ;
-(void)setMinimumApertureValue:(double)arg1 ;
-(void)setSliderWidth:(double)arg1 ;
-(void)setDelegate:(id<PUPhotoEditApertureToolbarDelegate>)arg1 ;
-(void)apertureSliderDidChangeApertureValue:(id)arg1 ;
-(void)setUseTranslucentBackground:(BOOL)arg1 ;
-(double)minimumApertureValue;
-(void)setUseTranslucentBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)maximumApertureValue;
-(double)originalApertureValue;
-(BOOL)useTranslucentBackground;
-(UILabel *)depthEffectLabel;
-(void)setDepthEffectLabel:(UILabel *)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setSlider:(CEKApertureSlider *)arg1 ;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(UILabel *)valueLabel;
-(NSString *)backdropViewGroupName;
-(void)loadView;
-(double)sliderWidth;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)viewDidLayoutSubviews;
@end

