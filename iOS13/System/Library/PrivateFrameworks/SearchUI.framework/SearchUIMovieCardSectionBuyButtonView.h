/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKStackView.h>

@class SearchUILabel, SearchUIOfferButtonView, SFPunchout, SearchUIMovieCardSectionView;

@interface SearchUIMovieCardSectionBuyButtonView : TLKStackView {

	SearchUILabel* _subtitleLabel;
	SearchUIOfferButtonView* _button;
	SFPunchout* _punchout;
	SearchUIMovieCardSectionView* _cardSectionView;

}

@property (nonatomic,retain) SearchUILabel * subtitleLabel;                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) SearchUIOfferButtonView * button;                                   //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                              //@synthesize punchout=_punchout - In the implementation block
@property (assign,nonatomic,__weak) SearchUIMovieCardSectionView * cardSectionView;              //@synthesize cardSectionView=_cardSectionView - In the implementation block
-(SearchUIOfferButtonView *)button;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setButton:(SearchUIOfferButtonView *)arg1 ;
-(void)setSubtitleLabel:(SearchUILabel *)arg1 ;
-(SearchUILabel *)subtitleLabel;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(void)buttonPressed;
-(void)setCardSectionView:(SearchUIMovieCardSectionView *)arg1 ;
-(SearchUIMovieCardSectionView *)cardSectionView;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 cardSectionView:(id)arg4 ;
@end

