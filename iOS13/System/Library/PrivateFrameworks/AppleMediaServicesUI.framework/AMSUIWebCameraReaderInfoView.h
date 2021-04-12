/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AMSUIWebActionRunnable;
@class UIButton, UILabel;

@interface AMSUIWebCameraReaderInfoView : UIView {

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
-(void)layoutSubviews;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setBottomLink:(UIButton *)arg1 ;
-(UIButton *)bottomLink;
-(void)_bottomLinkSelected:(id)arg1 ;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
@end

