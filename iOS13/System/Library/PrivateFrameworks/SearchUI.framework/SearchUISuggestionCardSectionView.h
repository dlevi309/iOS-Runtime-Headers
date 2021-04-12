/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class SearchUIImageView, TLKLabel, NUIContainerStackView, NSString;

@interface SearchUISuggestionCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {

	SearchUIImageView* _iconView;
	TLKLabel* _suggestionLabel;

}

@property (nonatomic,retain) NUIContainerStackView * contentView; 
@property (nonatomic,retain) SearchUIImageView * iconView;                     //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) TLKLabel * suggestionLabel;                       //@synthesize suggestionLabel=_suggestionLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(SearchUIImageView *)iconView;
-(void)setIconView:(SearchUIImageView *)arg1 ;
-(id)setupContentView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)updateMargins;
-(void)setSuggestionLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)suggestionLabel;
@end

