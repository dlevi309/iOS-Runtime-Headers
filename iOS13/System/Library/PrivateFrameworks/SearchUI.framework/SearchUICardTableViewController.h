/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITableViewController.h>

@protocol SearchUICardViewDelegate;
@class SFCard;

@interface SearchUICardTableViewController : SearchUITableViewController {

	id<SearchUICardViewDelegate> _cardViewDelegate;
	SFCard* _card;

}

@property (assign,nonatomic,__weak) id<SearchUICardViewDelegate> cardViewDelegate;              //@synthesize cardViewDelegate=_cardViewDelegate - In the implementation block
@property (nonatomic,retain) SFCard * card;                                                     //@synthesize card=_card - In the implementation block
-(id)init;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(SFCard *)card;
-(void)setCard:(SFCard *)arg1 ;
-(void)setTableModel:(id)arg1 ;
-(id<SearchUICardViewDelegate>)cardViewDelegate;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)showViewController:(id)arg1 ;
-(BOOL)shouldDrawTopAndBottomSeparators;
-(double)offScreenContentScrollDistance;
-(void)setCardViewDelegate:(id<SearchUICardViewDelegate>)arg1 ;
@end

