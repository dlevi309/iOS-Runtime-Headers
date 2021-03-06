/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <SearchUI/SearchUISelectableTextViewDelegate.h>
#import <SearchUI/SearchUICardSectionViewUpdatable.h>

@class SearchUILabel, SearchUISelectableTextView, SearchUIButton, TLKStackView, NSString;

@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, SearchUISelectableTextViewDelegate, SearchUICardSectionViewUpdatable> {

	SearchUILabel* _detailTextLabel;
	SearchUISelectableTextView* _titleTextView;
	SearchUISelectableTextView* _subtitleView;
	SearchUIButton* _playButton;

}

@property (nonatomic,retain) TLKStackView * contentView; 
@property (nonatomic,retain) SearchUILabel * detailTextLabel;                         //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) SearchUISelectableTextView * titleTextView;              //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) SearchUISelectableTextView * subtitleView;               //@synthesize subtitleView=_subtitleView - In the implementation block
@property (nonatomic,retain) SearchUIButton * playButton;                             //@synthesize playButton=_playButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SearchUILabel *)detailTextLabel;
-(void)setDetailTextLabel:(SearchUILabel *)arg1 ;
-(SearchUISelectableTextView *)subtitleView;
-(SearchUIButton *)playButton;
-(void)setPlayButton:(SearchUIButton *)arg1 ;
-(SearchUISelectableTextView *)titleTextView;
-(void)setTitleTextView:(SearchUISelectableTextView *)arg1 ;
-(void)setSubtitleView:(SearchUISelectableTextView *)arg1 ;
-(void)_playButtonPressed:(id)arg1 ;
-(id)setupContentView;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)selectableTextView:(id)arg1 presentViewController:(id)arg2 ;
-(void)_updateStateFromCardSection:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateStateFromCardSection:(id)arg1 ;
@end

