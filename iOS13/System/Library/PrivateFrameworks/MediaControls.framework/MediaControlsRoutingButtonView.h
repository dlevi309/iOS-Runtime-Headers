/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

@interface MediaControlsRoutingButtonView : MPButton {

	BOOL _userInterfaceStyleSwitchingEnabled;
	long long _currentMode;
	long long _deviceType;
	CCUICAPackageView* _packageView;

}

@property (nonatomic,retain) CCUICAPackageView * packageView;                                                                  //@synthesize packageView=_packageView - In the implementation block
@property (assign,nonatomic) long long currentMode;                                                                            //@synthesize currentMode=_currentMode - In the implementation block
@property (assign,nonatomic) long long deviceType;                                                                             //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,getter=isUserInterfaceStyleSwitchingEnabled,nonatomic) BOOL userInterfaceStyleSwitchingEnabled;              //@synthesize userInterfaceStyleSwitchingEnabled=_userInterfaceStyleSwitchingEnabled - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(long long)currentMode;
-(long long)deviceType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setCurrentMode:(long long)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(void)setUserInterfaceStyleSwitchingEnabled:(BOOL)arg1 ;
-(CCUICAPackageView *)packageView;
-(void)_updateGlyphState;
-(void)_updateGlyphPackage;
-(id)_glyphResource;
-(BOOL)isUserInterfaceStyleSwitchingEnabled;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
@end

