/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIViewController.h>

@class NUIContainerBoxView, UIActivityIndicatorView, TLKLabel, NSTimer, SearchUICardTableViewController, SearchUIBackgroundView, SFCard;

@interface SearchUICardViewController : UIViewController {

	NUIContainerBoxView* _loadingView;
	UIActivityIndicatorView* _loadingSpinner;
	TLKLabel* _loadingLabel;
	NSTimer* _loadingScreenTimer;
	unsigned long long _level;
	SearchUICardTableViewController* _tableViewController;

}

@property (nonatomic,retain) SearchUIBackgroundView * view; 
@property (nonatomic,retain) NUIContainerBoxView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingSpinner;                           //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
@property (nonatomic,retain) TLKLabel * loadingLabel;                                            //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (nonatomic,retain) NSTimer * loadingScreenTimer;                                       //@synthesize loadingScreenTimer=_loadingScreenTimer - In the implementation block
@property (assign,nonatomic) unsigned long long level;                                           //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) SearchUICardTableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections; 
@property (assign,getter=isInPreviewPlatter,nonatomic) BOOL inPreviewPlatter; 
@property (nonatomic,retain) SFCard * card; 
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener; 
@property (assign,nonatomic,__weak) id<SearchUICardViewDelegate> delegate; 
@property (assign,nonatomic) BOOL threeDTouchEnabled; 
-(id)init;
-(id<SearchUICardViewDelegate>)delegate;
-(void)setDelegate:(id<SearchUICardViewDelegate>)arg1 ;
-(unsigned long long)level;
-(BOOL)_canShowWhileLocked;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingSpinner;
-(SFCard *)card;
-(SearchUICardTableViewController *)tableViewController;
-(BOOL)threeDTouchEnabled;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
-(void)setTableViewController:(SearchUICardTableViewController *)arg1 ;
-(void)setLoadingView:(NUIContainerBoxView *)arg1 ;
-(NUIContainerBoxView *)loadingView;
-(TLKLabel *)loadingLabel;
-(void)setLoadingLabel:(TLKLabel *)arg1 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(id)initWithCard:(id)arg1 feedbackListener:(id)arg2 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setInPreviewPlatter:(BOOL)arg1 ;
-(BOOL)isInPreviewPlatter;
-(void)prepareLoadingView;
-(void)setLoadingScreenTimer:(NSTimer *)arg1 ;
-(void)displayLoadingViewAfterDelay:(double)arg1 withSpinner:(BOOL)arg2 ;
-(void)updateTimerAndCardSections:(id)arg1 ;
-(void)updateWithCardSections:(id)arg1 ;
-(NSTimer *)loadingScreenTimer;
-(void)cardViewDidAppear;
-(id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3 ;
-(double)contentHeightForWidth:(double)arg1 ;
-(id)testingTableViewController;
@end

