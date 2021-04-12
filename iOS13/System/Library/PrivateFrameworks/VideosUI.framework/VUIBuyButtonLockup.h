/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)setHasIAP:(BOOL)arg1 ;
-(void)_updateForPreferredContentSize;
-(BOOL)_isLargeContentSize;
-(BOOL)hasIAP;
@end

