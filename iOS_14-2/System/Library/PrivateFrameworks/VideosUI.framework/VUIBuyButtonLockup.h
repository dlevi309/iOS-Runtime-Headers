/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIUIStackView.h>

@class UILabel, UIButton, NSLayoutConstraint;

@interface VUIBuyButtonLockup : VUIUIStackView {

	UILabel* _iAPLabel;
	UIButton* _button;
	NSLayoutConstraint* _buttonHeightConstraint;
	long long _lastOrientation;
	BOOL _hasIAP;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hasIAP;                    //@synthesize hasIAP=_hasIAP - In the implementation block
-(void)_contentSizeCategoryDidChange;
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(BOOL)hasIAP;
-(void)dealloc;
-(void)setHasIAP:(BOOL)arg1 ;
-(void)_updateForPreferredContentSize;
-(BOOL)_isLargeContentSize;
@end

