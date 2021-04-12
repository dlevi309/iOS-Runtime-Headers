/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTopOfFeedTypeDelegate.h>
#import <libobjc.A.dylib/TSTopOfFeedRoutedType.h>
#import <libobjc.A.dylib/TSTopOfFeedContainerType.h>

@class NSString;

@interface NewsUI2.TopOfFeedViewController : UIViewController <TSTopOfFeedTypeDelegate, TSTopOfFeedRoutedType, TSTopOfFeedContainerType> {

	 styler;
	 eventHandler;
	 presentedChildViewController;
	 delegate;
	 routableDelegate;

}

@property (readonly,nonatomic) NSString * feedViewExposureID; 
@property (assign,__weak,nonatomic) id<TSTopOfFeedContainerTypeDelegate> delegate; 
@property (assign,__weak,nonatomic) id<TSTopOfFeedRoutableFeedDelegate> routableDelegate; 
-(NSString *)feedViewExposureID;
-(void)topOfFeed:(id)arg1 shouldPresentWithHeight:(double)arg2 resultType:(long long)arg3 ;
-(double)topOfFeedContentHeight;
-(id)topOfFeedContentHeadlines;
-(id)topOfFeedHeadlineContextForHeadline:(id)arg1 ;
-(id)topOfFeedContentTitle;
-(id)topOfFeedContentTitleColor;
-(long long)topOfFeedSpecialEventsType;
-(void)topOfFeedContentDidPresentHeadline:(id)arg1 ;
-(void)topOfFeedContentShouldRefreshWithCompletion:(/*^block*/id)arg1 ;
-(id)topOfFeedAnimatableView;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id<TSTopOfFeedContainerTypeDelegate>)delegate;
-(void)setDelegate:(id<TSTopOfFeedContainerTypeDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<TSTopOfFeedRoutableFeedDelegate>)routableDelegate;
-(void)setRoutableDelegate:(id<TSTopOfFeedRoutableFeedDelegate>)arg1 ;
@end

