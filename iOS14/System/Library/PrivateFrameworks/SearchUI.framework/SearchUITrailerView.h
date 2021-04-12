/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKStackView.h>

@class SearchUITrailersCardSectionView, SearchUIButton, TLKLabel, SFPunchout, UIView;

@interface SearchUITrailerView : TLKStackView {

	SearchUITrailersCardSectionView* _cardSectionView;
	SearchUIButton* _playButton;
	TLKLabel* _titleLabel;
	SFPunchout* _punchout;
	UIView* _centeredBoxView;

}

@property (assign,nonatomic,__weak) SearchUITrailersCardSectionView * cardSectionView;              //@synthesize cardSectionView=_cardSectionView - In the implementation block
@property (nonatomic,retain) SearchUIButton * playButton;                                           //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) TLKLabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                                 //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,retain) UIView * centeredBoxView;                                              //@synthesize centeredBoxView=_centeredBoxView - In the implementation block
-(TLKLabel *)titleLabel;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(SearchUIButton *)playButton;
-(void)playTrailer;
-(SearchUITrailersCardSectionView *)cardSectionView;
-(SFPunchout *)punchout;
-(id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2 ;
-(void)setCenteredBoxView:(UIView *)arg1 ;
-(UIView *)centeredBoxView;
-(void)setPlayButton:(SearchUIButton *)arg1 ;
-(void)setCardSectionView:(SearchUITrailersCardSectionView *)arg1 ;
@end

