/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UILabel, UIActivityIndicatorView;

@interface SULoadingView : UIView {

	long long _activityIndicatorStyle;
	UIColor* _activityIndicatorColor;
	UILabel* _label;
	UIActivityIndicatorView* _progressIndicator;
	unsigned long long _style;
	UIColor* _textColor;
	UIColor* _textShadowColor;

}

@property (assign,nonatomic) long long activityIndicatorStyle;              //@synthesize activityIndicatorStyle=_activityIndicatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * activityIndicatorColor;              //@synthesize activityIndicatorColor=_activityIndicatorColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                           //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * textShadowColor;                     //@synthesize textShadowColor=_textShadowColor - In the implementation block
-(void)dealloc;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(UIColor *)textColor;
-(void)_setupSubviews;
-(long long)activityIndicatorStyle;
-(UIColor *)textShadowColor;
-(void)setActivityIndicatorStyle:(long long)arg1 ;
-(void)setActivityIndicatorColor:(UIColor *)arg1 ;
-(void)setTextShadowColor:(UIColor *)arg1 ;
-(id)newTextLabel;
-(id)newProgressIndicator;
-(UIColor *)activityIndicatorColor;
@end

