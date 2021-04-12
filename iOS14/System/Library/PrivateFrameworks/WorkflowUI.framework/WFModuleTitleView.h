/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@protocol WFModuleTitleViewDelegate;
@class WFAction, UIImageView, UILabel, UIButton, NSString;

@interface WFModuleTitleView : UIView <WFActionEventObserver> {

	BOOL _hideSubtitle;
	id<WFModuleTitleViewDelegate> _delegate;
	WFAction* _action;
	unsigned long long _accessoryMode;
	unsigned long long _style;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _handoffButton;
	UIButton* _installButton;

}

@property (nonatomic,__weak,readonly) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * handoffButton;                            //@synthesize handoffButton=_handoffButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * installButton;                            //@synthesize installButton=_installButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFModuleTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFAction * action;                                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryMode;                           //@synthesize accessoryMode=_accessoryMode - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hideSubtitle;                                          //@synthesize hideSubtitle=_hideSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)viewHeight;
-(UILabel *)titleLabel;
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(id<WFModuleTitleViewDelegate>)delegate;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(unsigned long long)accessibilityTraits;
-(CGSize)iconSize;
-(void)setDelegate:(id<WFModuleTitleViewDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(void)updateFont;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)dealloc;
-(UIButton *)installButton;
-(void)setInstallButton:(UIButton *)arg1 ;
-(void)setHideSubtitle:(BOOL)arg1 ;
-(BOOL)hideSubtitle;
-(void)actionNameDidChange:(id)arg1 ;
-(double)imageViewWidth;
-(void)configureWithTitle:(id)arg1 subtitle:(id)arg2 applicationBundleIdentifer:(id)arg3 ;
-(double)iconTitlePadding;
-(BOOL)isTitleLabelMultiline;
-(double)titleSubtitlePadding;
-(CGSize)sizeForLabel:(id)arg1 withMaxWidth:(double)arg2 ;
-(void)setAccessoryMode:(unsigned long long)arg1 ;
-(void)installButtonPressed:(id)arg1 ;
-(void)handoffButtonPressed:(id)arg1 ;
-(BOOL)installAction;
-(BOOL)toggleFavorited;
-(unsigned long long)accessoryMode;
-(UIButton *)handoffButton;
-(void)setHandoffButton:(UIButton *)arg1 ;
@end

