/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@protocol CAMTimerButtonDelegate;
@class UIImageView, NSString;

@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _hideOffWhenCollapsed;
	id<CAMTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long duration; 
@property (assign,nonatomic) BOOL hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForAccessibilityHUD;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)shownIndexesWhileCollapsed;
-(id<CAMTimerButtonDelegate>)delegate;
-(BOOL)hideOffWhenCollapsed;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 ;
-(double)padHeaderViewContentInsetLeft;
-(UIImageView *)_glyphView;
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(void)reloadData;
-(void)setDuration:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)numberOfMenuItems;
-(void)_commonCAMTimerButtonInitialization;
-(id)headerView;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(long long)duration;
-(id)_currentGlyphImageForAccessibiliyHUD:(BOOL)arg1 ;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(void)_updateCurrentGlyphImage;
@end

