/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SBUILockOverlayViewDelegate>)delegate;
-(void)setDelegate:(id<SBUILockOverlayViewDelegate>)arg1 ;
-(unsigned long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(id)_titleFont;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_subtitleFont;
-(UILabel *)subtitleLabel;
-(UIButton *)actionButton;
-(void)_buttonPressed;
-(double)_maxLabelWidth;
-(id)_actionFont;
-(id)_legibilitySettingsForStyle:(unsigned long long)arg1 ;
-(void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2 ;
-(unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(CGSize)arg3 ;
-(SBLockOverlayStylePropertiesFactory *)underlayPropertiesFactory;
@end

