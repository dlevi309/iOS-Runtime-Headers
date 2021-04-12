/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <Preferences/DevicePINPane.h>

@class UIScrollView, CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {

	UIScrollView* _containerView;
	CDPPaneHeaderView* _headerView;
	double _keyboardOffset;

}

@property (nonatomic,readonly) CGRect availableHeaderRect; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)headerView;
-(void)_layoutContainerView;
-(void)_layoutSubviews;
-(BOOL)isSmallScreen;
-(double)desiredMinPinHeight;
-(void)startListeningForKeyboardEvents;
-(void)_keyboardLayoutChanged;
-(CGRect)availableHeaderRect;
-(double)keyboardHeightOffset;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(void)didFinishResizingHeaderView;
-(BOOL)isVerySmallScreen;
-(void)didFinishResizingPinView;
@end

