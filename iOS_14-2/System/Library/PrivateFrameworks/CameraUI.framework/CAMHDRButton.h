/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)imageForAccessibilityHUD;
-(void)setHDRMode:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(BOOL)allowsAutomaticHDR;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateAllowedModes;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(NSArray *)_allowedModes;
-(long long)HDRMode;
-(unsigned long long)indexForMode:(long long)arg1 ;
-(double)padHeaderViewContentInsetLeft;
-(UIImageView *)_glyphView;
-(void)_setAllowedModes:(id)arg1 ;
-(long long)modeForIndex:(long long)arg1 ;
-(void)reloadData;
-(long long)numberOfMenuItems;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1 ;
-(BOOL)allowsHDROn;
-(id)headerView;
-(void)_commonCAMHDRButtonInitialization;
-(BOOL)shouldAllowExpansion;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 ;
-(void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 needsReloadData:(BOOL)arg2 ;
-(void)_updateCurrentGlyphImage;
-(void)setAllowsHDROn:(BOOL)arg1 ;
@end

