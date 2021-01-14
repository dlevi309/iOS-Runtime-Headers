/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXCuratedLibraryOverlayButtonConfiguration, UIPointerInteraction, UIVisualEffectView, UIView, UIImageView, UILabel, NSString;

@interface PXCuratedLibraryOverlayButton : UIControl <UIPointerInteractionDelegate, PXGReusableView> {

	PXCuratedLibraryOverlayButtonConfiguration* _userData;
	UIPointerInteraction* _pointerInteraction;
	UIVisualEffectView* _effectView;
	UIView* _contentView;
	UIView* _solidBackgroundView;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _captionLabel;
	NSString* _axLabel;
	CGRect _clippingRect;

}

@property (nonatomic,retain) UIPointerInteraction * pointerInteraction;                        //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                                  //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * solidBackgroundView;                                     //@synthesize solidBackgroundView=_solidBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                      //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                                           //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) NSString * axLabel;                                               //@synthesize axLabel=_axLabel - In the implementation block
@property (nonatomic,copy) PXCuratedLibraryOverlayButtonConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect clippingRect;                                              //@synthesize clippingRect=_clippingRect - In the implementation block
+(id)defaultTitleColor;
+(CGSize)_sizeOfTitle:(id)arg1 withFont:(id)arg2 ;
+(id)buttonSizeCache;
+(id)titleSizeCache;
+(id)roundedCornerMaskImage:(SCD_Struct_PX82)arg1 size:(CGSize)arg2 ;
+(CGSize)sizeWithConfiguration:(id)arg1 ;
+(void)_getSize:(out CGSize*)arg1 titleFrame:(out CGRect*)arg2 captionFrame:(out CGRect*)arg3 iconFrame:(out CGRect*)arg4 forConfiguration:(id)arg5 title:(id)arg6 ;
+(id)defaultTitleFont;
-(UILabel *)titleLabel;
-(UIPointerInteraction *)pointerInteraction;
-(BOOL)canBecomeFocused;
-(UIImageView *)iconImageView;
-(void)_updateBackgroundView;
-(void)becomeReusable;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateButtonWithConfiguration:(id)arg1 ;
-(void)_updateEffectViewBackgroundStyle;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(PXCuratedLibraryOverlayButtonConfiguration *)userData;
-(NSString *)axLabel;
-(void)prepareForReuse;
-(void)_performAction:(id)arg1 ;
-(NSString *)description;
-(void)setPointerInteraction:(UIPointerInteraction *)arg1 ;
-(void)layoutSubviews;
-(void)setSolidBackgroundView:(UIView *)arg1 ;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)solidBackgroundView;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(UILabel *)captionLabel;
-(void)_updateEffectView;
-(void)_platformSpecificViewSetup;
-(void)setCaptionLabel:(UILabel *)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(PXCuratedLibraryOverlayButtonConfiguration *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)_setupViews;
-(UIView *)contentView;
-(void)setAxLabel:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

