/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface StocksUI.TickerViewController : UIViewController <UICollectionViewDelegate> {

	 autoScrolling;
	 styler;
	 eventHandler;
	 blueprintViewController;

}
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

