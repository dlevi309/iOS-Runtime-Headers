/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TSTopOfFeedRoutedType.h>
#import <libobjc.A.dylib/TSTopOfFeedType.h>

@class NSString;

@interface NewsUI2.SpecialEventsViewController : UIViewController <UICollectionViewDelegate, TSTopOfFeedRoutedType, TSTopOfFeedType> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 pageControl;
	 micaPlayerFactory;
	 micaPlayer;
	 style;
	 delegate;
	 routableDelegate;
	 closeButton;

}

@property (readonly,nonatomic) NSString * topOfFeedID; 
@property (assign,__weak,nonatomic) id<TSTopOfFeedTypeDelegate> delegate; 
@property (assign,__weak,nonatomic) id<TSTopOfFeedRoutableFeedDelegate> routableDelegate; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSString *)topOfFeedID;
-(double)topOfFeedContentHeight;
-(id)topOfFeedContentHeadlines;
-(id)topOfFeedHeadlineContextForHeadline:(id)arg1 ;
-(id)topOfFeedContentTitle;
-(id)topOfFeedContentTitleColor;
-(long long)topOfFeedSpecialEventsType;
-(void)topOfFeedContentDidPresentHeadline:(id)arg1 ;
-(void)topOfFeedContentShouldRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id<TSTopOfFeedTypeDelegate>)delegate;
-(void)setDelegate:(id<TSTopOfFeedTypeDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<TSTopOfFeedRoutableFeedDelegate>)routableDelegate;
-(void)setRoutableDelegate:(id<TSTopOfFeedRoutableFeedDelegate>)arg1 ;
@end

