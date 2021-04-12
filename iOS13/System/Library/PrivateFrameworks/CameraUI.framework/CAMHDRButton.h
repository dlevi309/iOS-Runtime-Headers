/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSArray, NSString;

@interface CAMHDRButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _allowsAutomaticHDR;
	BOOL _allowsHDROn;
	UIImageView* __glyphView;
	NSArray* __allowedModes;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                                  //@synthesize _glyphView=__glyphView - In the implementation block
@property (setter=_setAllowedModes:,nonatomic,copy) NSArray * _allowedModes;              //@synthesize _allowedModes=__allowedModes - In the implementation block
@property (assign,nonatomic) long long HDRMode; 
@property (assign,nonatomic) BOOL allowsAutomaticHDR;                                     //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
@property (assign,nonatomic) BOOL allowsHDROn;                                            //@synthesize allowsHDROn=_allowsHDROn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(id)headerView;
-(long long)HDRMode;
-(void)setHDRMode:(long long)arg1 ;
-(UIImageView *)_glyphView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(void)setAllowsHDROn:(BOOL)arg1 ;
-(long long)modeForIndex:(long long)arg1 ;
-(unsigned long long)indexForMode:(long long)arg1 ;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(void)_updateCurrentGlyphImage;
-(double)padHeaderViewContentInsetLeft;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1 ;
-(void)_updateAllowedModes;
-(void)_commonCAMHDRButtonInitialization;
-(void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 needsReloadData:(BOOL)arg2 ;
-(BOOL)allowsAutomaticHDR;
-(BOOL)allowsHDROn;
-(void)_setAllowedModes:(id)arg1 ;
-(NSArray *)_allowedModes;
-(BOOL)shouldAllowExpansion;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 ;
@end

