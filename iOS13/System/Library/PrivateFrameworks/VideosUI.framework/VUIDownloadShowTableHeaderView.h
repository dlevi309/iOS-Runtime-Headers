/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSString, VUILabel, VUISeparatorView;

@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView {

	NSString* _headerTitle;
	VUILabel* _titleLabel;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;                        //@synthesize headerTitle=_headerTitle - In the implementation block
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
@end

