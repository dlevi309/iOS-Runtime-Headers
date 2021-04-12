/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIMovieCardSectionBuyButtonView.h>

@class SearchUIWatchListUtilities;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView {

	SearchUIWatchListUtilities* _watchListUtility;

}

@property (nonatomic,retain) SearchUIWatchListUtilities * watchListUtility;              //@synthesize watchListUtility=_watchListUtility - In the implementation block
-(void)setWatchListUtility:(SearchUIWatchListUtilities *)arg1 ;
-(void)buttonPressed;
-(SearchUIWatchListUtilities *)watchListUtility;
-(id)initIsInUpNext:(BOOL)arg1 cardSectionView:(id)arg2 ;
-(void)updateUpNextStatus;
@end

