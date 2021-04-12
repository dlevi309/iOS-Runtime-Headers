/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@class SKUIClientContext, SKUIReviewsHistogramView, SKUIReviewList, NSString, UIControl, NSArray;

@interface SKUIReviewsHistogramViewController : UIViewController {

	SKUIClientContext* _clientContext;
	SKUIReviewsHistogramView* _histogramView;
	SKUIReviewList* _reviewList;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIReviewList * reviewList;                    //@synthesize reviewList=_reviewList - In the implementation block
@property (nonatomic,copy) NSString * versionString; 
@property (nonatomic,readonly) UIControl * segmentedControl; 
@property (nonatomic,copy) NSArray * segmentedControlTitles; 
@property (assign,nonatomic) long long selectedSegmentIndex; 
@property (nonatomic,readonly) UIControl * starRatingControl; 
@property (assign,nonatomic) long long personalStarRating; 
@property (nonatomic,readonly) UIControl * appSupportButton; 
@property (nonatomic,readonly) UIControl * writeAReviewButton; 
-(void)setVersionString:(NSString *)arg1 ;
-(NSString *)versionString;
-(void)loadView;
-(long long)selectedSegmentIndex;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(UIControl *)segmentedControl;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(UIControl *)appSupportButton;
-(UIControl *)starRatingControl;
-(UIControl *)writeAReviewButton;
-(long long)personalStarRating;
-(void)setReviewList:(SKUIReviewList *)arg1 ;
-(void)setSegmentedControlTitles:(NSArray *)arg1 ;
-(void)setPersonalStarRating:(long long)arg1 ;
-(NSArray *)segmentedControlTitles;
-(id)_histogramView;
-(void)_reloadHistogram;
-(SKUIReviewList *)reviewList;
@end

