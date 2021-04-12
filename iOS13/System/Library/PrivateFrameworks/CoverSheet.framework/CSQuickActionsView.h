/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol CSQuickActionsDelegate;
@class CSQuickActionsButton, _UILegibilitySettings, CSDashBoardQuickActionsButtonSettings, NSString;

@interface CSQuickActionsView : SBFTouchPassThroughView <PTSettingsKeyObserver> {

	BOOL _flashlightOn;
	id<CSQuickActionsDelegate> _delegate;
	CSQuickActionsButton* _flashlightButton;
	CSQuickActionsButton* _cameraButton;
	_UILegibilitySettings* _legibilitySettings;
	CSDashBoardQuickActionsButtonSettings* _quickActionsSettings;

}

@property (nonatomic,retain) CSDashBoardQuickActionsButtonSettings * quickActionsSettings;              //@synthesize quickActionsSettings=_quickActionsSettings - In the implementation block
@property (assign,nonatomic,__weak) id<CSQuickActionsDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CSQuickActionsButton * flashlightButton;                                   //@synthesize flashlightButton=_flashlightButton - In the implementation block
@property (nonatomic,retain) CSQuickActionsButton * cameraButton;                                       //@synthesize cameraButton=_cameraButton - In the implementation block
@property (assign,nonatomic) BOOL flashlightOn;                                                         //@synthesize flashlightOn=_flashlightOn - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSQuickActionsDelegate>)delegate;
-(void)setDelegate:(id<CSQuickActionsDelegate>)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)refreshSupportedButtons;
-(void)setFlashlightOn:(BOOL)arg1 ;
-(void)refreshFlashlightAvailability;
-(void)_addOrRemoveCameraButtonIfNecessary;
-(void)_addOrRemoveFlashlightButtonIfNecessary;
-(void)_updateButtonBackgroundVisible;
-(void)_layoutQuickActionButtons;
-(double)_insetX;
-(UIEdgeInsets)_buttonOutsets;
-(double)_insetY;
-(BOOL)_prototypingAllowsButtons;
-(id)_buttonGroupName;
-(void)_addTargetsToButton:(id)arg1 ;
-(void)_removeTargetsFromButton:(id)arg1 ;
-(void)handleButtonTouchBegan:(id)arg1 ;
-(void)handleButtonTouchEnded:(id)arg1 ;
-(void)handleButtonPress:(id)arg1 ;
-(void)_setButtonBackgroundVisible:(BOOL)arg1 ;
-(CSQuickActionsButton *)flashlightButton;
-(void)setFlashlightButton:(CSQuickActionsButton *)arg1 ;
-(CSQuickActionsButton *)cameraButton;
-(void)setCameraButton:(CSQuickActionsButton *)arg1 ;
-(BOOL)flashlightOn;
-(CSDashBoardQuickActionsButtonSettings *)quickActionsSettings;
-(void)setQuickActionsSettings:(CSDashBoardQuickActionsButtonSettings *)arg1 ;
@end

