/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)radarCollectionInfoLabel;
-(void)setRadarCollectionInfoLabel:(UILabel *)arg1 ;
@end

