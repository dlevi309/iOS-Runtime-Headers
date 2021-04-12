/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _type;
	NSString* _bannerText;
	NSString* _manuallyWrappedBannerText;

}

@property (nonatomic,retain) _SFBarTheme * theme;                                 //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                              //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * bannerText;                             //@synthesize bannerText=_bannerText - In the implementation block
@property (nonatomic,readonly) NSString * manuallyWrappedBannerText;              //@synthesize manuallyWrappedBannerText=_manuallyWrappedBannerText - In the implementation block
-(_SFBarTheme *)theme;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setTheme:(_SFBarTheme *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)backdropGroupName;
-(unsigned long long)type;
-(BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1 ;
-(CGSize)_labelLayoutSizeForWidth:(double)arg1 ;
-(void)setBannerText:(id)arg1 manuallyWrappedBannerText:(id)arg2 ;
-(NSString *)manuallyWrappedBannerText;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)bannerText;
-(UIButton *)closeButton;
@end

