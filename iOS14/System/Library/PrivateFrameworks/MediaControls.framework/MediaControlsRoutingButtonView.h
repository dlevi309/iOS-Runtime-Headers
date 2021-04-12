/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCurrentMode:(long long)arg1 ;
-(long long)deviceType;
-(long long)currentMode;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setUserInterfaceStyleSwitchingEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
-(void)_updateGlyphState;
-(CCUICAPackageView *)packageView;
-(void)setDeviceType:(long long)arg1 ;
-(BOOL)isUserInterfaceStyleSwitchingEnabled;
-(id)_glyphResource;
-(void)layoutSubviews;
-(void)_updateGlyphPackage;
-(void)setAlpha:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

