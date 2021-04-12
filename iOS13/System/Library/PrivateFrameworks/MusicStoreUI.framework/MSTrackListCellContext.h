/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <iTunesStoreUI/SUMediaItemCellContext.h>

@interface MSTrackListCellContext : SUMediaItemCellContext {

	BOOL _shouldHideContentRating;
	BOOL _showSubtitle;

}

@property (assign,nonatomic) BOOL showSubtitle;                         //@synthesize showSubtitle=_showSubtitle - In the implementation block
@property (assign,nonatomic) BOOL shouldHideContentRating;              //@synthesize shouldHideContentRating=_shouldHideContentRating - In the implementation block
-(BOOL)showSubtitle;
-(void)setShowSubtitle:(BOOL)arg1 ;
-(BOOL)shouldHideContentRating;
-(void)setShouldHideContentRating:(BOOL)arg1 ;
@end

