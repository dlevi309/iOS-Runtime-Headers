/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSString, VUILabel, UIButton, VUISeparatorView;

@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView {

	NSString* _headerTitle;
	NSString* _buttonTitle;
	/*^block*/id _selectionHandler;
	VUILabel* _titleLabel;
	UIButton* _headerButton;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * headerButton;                       //@synthesize headerButton=_headerButton - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;                        //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) NSString * buttonTitle;                        //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id selectionHandler;                             //@synthesize selectionHandler=_selectionHandler - In the implementation block
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)headerTitle;
-(VUISeparatorView *)separatorView;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)selectionHandler;
-(void)setSelectionHandler:(id)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(UIButton *)headerButton;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setHeaderButton:(UIButton *)arg1 ;
-(id)_buttonWithString:(id)arg1 existingButton:(id)arg2 ;
-(void)_selectButtonAction:(id)arg1 ;
@end

