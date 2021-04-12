/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <AppSupportUI/NUIContainerBoxView.h>

@class SearchUIMovieCardSectionView;

@interface SearchUIButtonsView : NUIContainerBoxView {

	SearchUIMovieCardSectionView* _cardSectionView;

}

@property (__weak) SearchUIMovieCardSectionView * cardSectionView;              //@synthesize cardSectionView=_cardSectionView - In the implementation block
-(BOOL)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2 ;
-(id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(BOOL)arg4 isUpNexted:(BOOL)arg5 ;
-(id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(BOOL)arg3 isContinuing:(BOOL)arg4 isContainerItem:(BOOL)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7 ;
-(void)sendErrorFeedbackIfNecessary:(id)arg1 ;
-(id)buttonForOffer:(id)arg1 playable:(id)arg2 ;
-(SearchUIMovieCardSectionView *)cardSectionView;
-(id)initWithCardSectionView:(id)arg1 ;
-(void)fetchButtonsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)buttonForPlayable:(id)arg1 ;
-(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3 ;
-(void)setCardSectionView:(SearchUIMovieCardSectionView *)arg1 ;
-(id)buttonForChannelOffer:(id)arg1 channel:(id)arg2 episode:(id)arg3 ;
@end

