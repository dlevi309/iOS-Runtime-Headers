/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UIButton;

@interface SFReaderAppearanceThemeSelector : UIView {

	UIStackView* _stackView;
	UIButton* _whiteButton;
	UIButton* _sepiaButton;
	UIButton* _grayButton;
	UIButton* _nightButton;
	long long _selectedTheme;
	/*^block*/id _selectedThemeChangedBlock;

}

@property (assign,nonatomic) long long selectedTheme;                 //@synthesize selectedTheme=_selectedTheme - In the implementation block
@property (nonatomic,copy) id selectedThemeChangedBlock;              //@synthesize selectedThemeChangedBlock=_selectedThemeChangedBlock - In the implementation block
+(double)requiredHeight;
+(id)themeSelectorWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectedThemeChangedBlock:(id)arg1 ;
-(void)_createThemeButtons;
-(void)_updateSelectedTheme;
-(id)_buttonForTheme:(long long)arg1 ;
-(id)_imageForTheme:(long long)arg1 selected:(BOOL)arg2 ;
-(void)_themeButtonAction:(id)arg1 ;
-(id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(BOOL)arg3 ;
-(long long)_themeForButton:(id)arg1 ;
-(long long)selectedTheme;
-(void)setSelectedTheme:(long long)arg1 ;
-(void)_changeSelectionForTheme:(long long)arg1 selected:(BOOL)arg2 ;
-(id)selectedThemeChangedBlock;
@end

