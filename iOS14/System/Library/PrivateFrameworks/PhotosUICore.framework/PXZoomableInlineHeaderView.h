/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXZoomableInlineHeaderViewConfiguration, UIVisualEffectView, UIView, UILabel;

@interface PXZoomableInlineHeaderView : UIView <PXGReusableView> {

	PXZoomableInlineHeaderViewConfiguration* _configuration;
	UIVisualEffectView* _effectView;
	UIView* _tintView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXZoomableInlineHeaderViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXZoomableInlineHeaderViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                           //@synthesize clippingRect=_clippingRect - In the implementation block
+(id)_subtitleFontForStyle:(unsigned long long)arg1 ;
+(CGSize)sizeWithConfiguration:(id)arg1 ;
+(double)_titleBaselineDistanceForFont:(id)arg1 ;
+(double)_heightForStyle:(unsigned long long)arg1 ;
+(id)_titleFontForStyle:(unsigned long long)arg1 ;
-(void)becomeReusable;
-(void)_configureViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)_updateButtonWithConfiguration:(id)arg1 ;
-(PXZoomableInlineHeaderViewConfiguration *)userData;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)_updateConfiguration;
-(void)_platformSpecificViewSetup;
-(CGRect)clippingRect;
-(void)setUserData:(PXZoomableInlineHeaderViewConfiguration *)arg1 ;
-(void)_setupViews;
-(void)_setEffectViewCornerRadius:(double)arg1 ;
-(id)_tintViewBackgroundColor;
-(void)_setupBackgroundView;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

