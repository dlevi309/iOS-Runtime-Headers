/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActivityIndicatorColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)_setupSubviews;
-(void)layoutSubviews;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)sizeToFit;
-(UIColor *)activityIndicatorColor;
-(void)dealloc;
-(long long)activityIndicatorStyle;
-(UIColor *)textShadowColor;
-(void)setActivityIndicatorStyle:(long long)arg1 ;
-(void)setTextShadowColor:(UIColor *)arg1 ;
-(id)newTextLabel;
-(id)newProgressIndicator;
@end

