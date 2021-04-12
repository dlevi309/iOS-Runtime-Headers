/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@protocol AMSUIWebActionRunnable;
@class UIButton, UILabel;

@interface AMSUIWebCameraReaderInfoView : AMSUICommonView {

	UIButton* _bottomLink;
	id<AMSUIWebActionRunnable> _bottomLinkAction;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (nonatomic,retain) UIButton * bottomLink;                                    //@synthesize bottomLink=_bottomLink - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> bottomLinkAction;              //@synthesize bottomLinkAction=_bottomLinkAction - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                   //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                 //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(UILabel *)primaryLabel;
-(void)layoutSubviews;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(UILabel *)secondaryLabel;
-(id)_createLabelWithLines:(long long)arg1 title:(BOOL)arg2 ;
-(void)_bottomLinkSelected:(id)arg1 ;
-(id)_createButtonWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setBottomLink:(UIButton *)arg1 ;
-(UIButton *)bottomLink;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
@end

