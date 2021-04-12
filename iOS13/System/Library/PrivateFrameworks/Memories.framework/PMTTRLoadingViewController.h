/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIActivityIndicatorView;

@interface PMTTRLoadingViewController : UIViewController {

	UILabel* _radarCollectionInfoLabel;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UILabel * radarCollectionInfoLabel;                           //@synthesize radarCollectionInfoLabel=_radarCollectionInfoLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)radarCollectionInfoLabel;
-(void)setRadarCollectionInfoLabel:(UILabel *)arg1 ;
@end

