/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUNowPlayingTitleViewLayoutSpecProvider;
@class UIImageView, UILabel;

@interface NUNowPlayingTitleView : UIView {

	UIImageView* _publisherImageView;
	UILabel* _titleLabel;
	id<NUNowPlayingTitleViewLayoutSpecProvider> _layoutSpecProvider;

}

@property (nonatomic,retain) UIImageView * publisherImageView;                                                   //@synthesize publisherImageView=_publisherImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<NUNowPlayingTitleViewLayoutSpecProvider> layoutSpecProvider;              //@synthesize layoutSpecProvider=_layoutSpecProvider - In the implementation block
@property (nonatomic,readonly) double publisherLogoHeight; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)setPublisherImage:(id)arg1 fallbackName:(id)arg2 ;
-(double)publisherLogoHeight;
-(id<NUNowPlayingTitleViewLayoutSpecProvider>)layoutSpecProvider;
-(void)setLayoutSpecProvider:(id<NUNowPlayingTitleViewLayoutSpecProvider>)arg1 ;
-(UIImageView *)publisherImageView;
-(void)_setPublisherImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 layoutSpecProvider:(id)arg2 ;
-(void)setPublisherImageView:(UIImageView *)arg1 ;
@end

