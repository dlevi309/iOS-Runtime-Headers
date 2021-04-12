/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView, UILabel, _SFBarTheme, UIButton, NSString;

@interface _SFCrashBanner : UIView {

	UIVisualEffectView* _backdrop;
	UIVisualEffectView* _contentEffectView;
	UIView* _separator;
	UILabel* _label;
	CGSize _cachedLabelLayoutSize;
	_SFBarTheme* _theme;
	UIButton* _closeButton;

}

@property (nonatomic,retain) _SFBarTheme * theme;                     //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                  //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(_SFBarTheme *)theme;
-(void)setTheme:(_SFBarTheme *)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)_layoutCloseButton;
-(BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1 ;
-(CGSize)_labelLayoutSizeForWidth:(double)arg1 ;
@end

