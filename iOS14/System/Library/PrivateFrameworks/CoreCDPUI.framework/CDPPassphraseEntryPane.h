/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSmallScreen;
-(void)_layoutSubviews;
-(void)layoutSubviews;
-(id)headerView;
-(void)_layoutContainerView;
-(void)dealloc;
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

