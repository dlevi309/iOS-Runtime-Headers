/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVRUIStyleProvider;
@class UIView, UIButton;

@interface _TVRMessageView : UIView {

	BOOL _wifiConnectInProgress;
	unsigned long long _messageType;
	id<TVRUIStyleProvider> _styleProvider;
	UIView* _currentView;
	UIButton* _turnOnWiFiButton;

}

@property (nonatomic,retain) UIView * currentView;                                                   //@synthesize currentView=_currentView - In the implementation block
@property (assign,nonatomic) unsigned long long messageType;                                         //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) UIButton * turnOnWiFiButton;                                            //@synthesize turnOnWiFiButton=_turnOnWiFiButton - In the implementation block
@property (assign,getter=isWifiConnectInProgress,nonatomic) BOOL wifiConnectInProgress;              //@synthesize wifiConnectInProgress=_wifiConnectInProgress - In the implementation block
@property (nonatomic,retain) id<TVRUIStyleProvider> styleProvider;                                   //@synthesize styleProvider=_styleProvider - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)messageType;
-(void)setMessageType:(unsigned long long)arg1 ;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(id<TVRUIStyleProvider>)styleProvider;
-(UIView *)currentView;
-(void)setCurrentView:(UIView *)arg1 ;
-(void)clearContent;
-(void)showNoWIFIConnectionMessage;
-(void)showMessageWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showPairingMessageWithCode:(id)arg1 ;
-(void)showMessageWithError:(id)arg1 device:(id)arg2 ;
-(void)showMessageWithTitle:(id)arg1 message:(id)arg2 titleFont:(id)arg3 ;
-(void)showNoAssociatedNetworkMessage;
-(void)showLoadingSpinner;
-(void)showSearchingSpinner;
-(id)_deviceTypeString;
-(BOOL)_largeAccessibilityFontSizesEnabled;
-(id)_convertToAttributedStringWithReplacement:(id)arg1 imagePointSize:(double)arg2 ;
-(BOOL)isWifiConnectInProgress;
-(void)setTurnOnWiFiButton:(UIButton *)arg1 ;
-(void)_turnOnWireless:(id)arg1 ;
-(id)_loadingViewWithTitle:(id)arg1 forSize:(CGSize)arg2 ;
-(void)setWifiConnectInProgress:(BOOL)arg1 ;
-(UIButton *)turnOnWiFiButton;
@end

