/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKStackView, TLKTextButton, SFAttributionFooterCardSection;

@interface SearchUIAttributionFooterCardSectionView : SearchUICardSectionView {

	TLKStackView* _stackView;
	TLKTextButton* _leadingTextButton;
	TLKTextButton* _trailingTextButton;
	SFAttributionFooterCardSection* _cardSection;

}

@property (nonatomic,retain) TLKStackView * stackView;                                  //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) TLKTextButton * leadingTextButton;                         //@synthesize leadingTextButton=_leadingTextButton - In the implementation block
@property (nonatomic,retain) TLKTextButton * trailingTextButton;                        //@synthesize trailingTextButton=_trailingTextButton - In the implementation block
@property (nonatomic,retain) SFAttributionFooterCardSection * cardSection;              //@synthesize cardSection=_cardSection - In the implementation block
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(void)removeIconsFromRichText:(id)arg1 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
+(BOOL)prefersNoSeparatorAboveCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(TLKStackView *)stackView;
-(void)setCardSection:(SFAttributionFooterCardSection *)arg1 ;
-(id)setupContentView;
-(void)didPressLeadingTextButton;
-(void)didPressTrailingTextButton;
-(id)setupTextButtonThatIsLeadingAttribution:(BOOL)arg1 ;
-(void)setLeadingTextButton:(TLKTextButton *)arg1 ;
-(void)setTrailingTextButton:(TLKTextButton *)arg1 ;
-(TLKTextButton *)leadingTextButton;
-(TLKTextButton *)trailingTextButton;
-(SFAttributionFooterCardSection *)cardSection;
-(void)setStackView:(TLKStackView *)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 forButton:(id)arg2 ;
-(void)updateAttributionThatIsLeading:(BOOL)arg1 withSection:(id)arg2 isRTL:(BOOL)arg3 ;
@end

