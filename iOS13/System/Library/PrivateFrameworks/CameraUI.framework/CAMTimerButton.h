/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CAMTimerButtonDelegate>)delegate;
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(id)headerView;
-(UIImageView *)_glyphView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(id)_currentGlyphImageForAccessibiliyHUD:(BOOL)arg1 ;
-(void)_commonCAMTimerButtonInitialization;
-(void)setDuration:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateCurrentGlyphImage;
-(BOOL)hideOffWhenCollapsed;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 ;
-(double)padHeaderViewContentInsetLeft;
-(id)shownIndexesWhileCollapsed;
@end

