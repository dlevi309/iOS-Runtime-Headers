/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@protocol SBUILockOverlayViewDelegate;
@class UIResizableView, UILabel, UIButton, SBLockOverlayStylePropertiesFactory, _UILegibilitySettings;

@interface SBUILockOverlayView : SBFTouchPassThroughView {

	id<SBUILockOverlayViewDelegate> _delegate;
	UIResizableView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionButton;
	SBLockOverlayStylePropertiesFactory* _underlayPropertiesFactory;
	unsigned long long _style;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic,__weak) id<SBUILockOverlayViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SBLockOverlayStylePropertiesFactory * underlayPropertiesFactory;              //@synthesize underlayPropertiesFactory=_underlayPropertiesFactory - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                                      //@synthesize actionButton=_actionButton - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(id<SBUILockOverlayViewDelegate>)delegate;
-(id)_titleFont;
-(void)_buttonPressed;
-(id)_actionFont;
-(void)setDelegate:(id<SBUILockOverlayViewDelegate>)arg1 ;
-(double)_maxLabelWidth;
-(id)_legibilitySettingsForStyle:(unsigned long long)arg1 ;
-(void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2 ;
-(unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(CGSize)arg3 ;
-(SBLockOverlayStylePropertiesFactory *)underlayPropertiesFactory;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(UIButton *)actionButton;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_subtitleFont;
-(unsigned long long)style;
@end

