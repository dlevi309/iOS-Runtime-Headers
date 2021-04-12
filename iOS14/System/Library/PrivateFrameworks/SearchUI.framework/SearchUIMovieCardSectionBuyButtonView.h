/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubtitleLabel:(SearchUILabel *)arg1 ;
-(SearchUIOfferButtonView *)button;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(void)setButton:(SearchUIOfferButtonView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(SearchUILabel *)subtitleLabel;
-(SearchUIMovieCardSectionView *)cardSectionView;
-(void)buttonPressed;
-(SFPunchout *)punchout;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 cardSectionView:(id)arg4 ;
-(void)setCardSectionView:(SearchUIMovieCardSectionView *)arg1 ;
@end

