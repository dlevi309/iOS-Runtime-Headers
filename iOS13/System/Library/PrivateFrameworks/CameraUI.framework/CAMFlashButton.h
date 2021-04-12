/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isUnavailable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(id)headerView;
-(void)setUnavailable:(BOOL)arg1 ;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(UIImageView *)_glyphView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(long long)modeForIndex:(long long)arg1 ;
-(long long)indexForMode:(long long)arg1 ;
-(BOOL)wantsSelectedItemToBeVisible;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(void)_updateCurrentGlyphImage;
-(double)padHeaderViewContentInsetLeft;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1 ;
-(void)_commonCAMFlashButtonInitialization;
-(BOOL)allowsAutomaticFlash;
-(UIImageView *)_warningIndicatorView;
-(double)collapsedSelectedLabelHorizontalMargin;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 ;
-(BOOL)shouldIgnoreMenuInteraction;
@end

