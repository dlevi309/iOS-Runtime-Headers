/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIMovieCardSectionBuyButtonView.h>

@class SearchUIWatchListUtilities;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView {

	SearchUIWatchListUtilities* _watchListUtility;

}

@property (nonatomic,retain) SearchUIWatchListUtilities * watchListUtility;              //@synthesize watchListUtility=_watchListUtility - In the implementation block
-(void)buttonPressed;
-(void)setWatchListUtility:(SearchUIWatchListUtilities *)arg1 ;
-(SearchUIWatchListUtilities *)watchListUtility;
-(id)initIsInUpNext:(BOOL)arg1 cardSectionView:(id)arg2 ;
-(void)updateUpNextStatus;
@end

