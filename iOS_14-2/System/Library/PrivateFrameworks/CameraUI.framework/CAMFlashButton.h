/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSString;

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _allowsAutomaticFlash;
	BOOL _unavailable;
	UIImageView* __glyphView;
	UIImageView* __warningIndicatorView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                         //@synthesize _glyphView=__glyphView - In the implementation block
@property (nonatomic,readonly) UIImageView * _warningIndicatorView;              //@synthesize _warningIndicatorView=__warningIndicatorView - In the implementation block
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) BOOL allowsAutomaticFlash;                          //@synthesize allowsAutomaticFlash=_allowsAutomaticFlash - In the implementation block
@property (assign,getter=isUnavailable,nonatomic) BOOL unavailable;              //@synthesize unavailable=_unavailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFlashMode:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(long long)flashMode;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(BOOL)shouldIgnoreMenuInteraction;
-(double)collapsedSelectedLabelHorizontalMargin;
-(long long)indexForMode:(long long)arg1 ;
-(double)padHeaderViewContentInsetLeft;
-(BOOL)wantsSelectedItemToBeVisible;
-(UIImageView *)_glyphView;
-(UIImageView *)_warningIndicatorView;
-(long long)modeForIndex:(long long)arg1 ;
-(BOOL)isUnavailable;
-(void)reloadData;
-(void)setUnavailable:(BOOL)arg1 ;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 ;
-(long long)numberOfMenuItems;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1 ;
-(BOOL)allowsAutomaticFlash;
-(id)headerView;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)_commonCAMFlashButtonInitialization;
-(void)_updateCurrentGlyphImage;
@end

