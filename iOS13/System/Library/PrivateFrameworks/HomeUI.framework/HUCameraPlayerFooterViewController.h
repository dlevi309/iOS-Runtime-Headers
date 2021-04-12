/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>

@class UIButton;

@interface HUCameraPlayerFooterViewController : UIViewController {

	UIButton* _liveButton;
	UIButton* _nearbyAccessoryButton;

}

@property (nonatomic,retain) UIButton * liveButton;                         //@synthesize liveButton=_liveButton - In the implementation block
@property (nonatomic,retain) UIButton * nearbyAccessoryButton;              //@synthesize nearbyAccessoryButton=_nearbyAccessoryButton - In the implementation block
-(void)viewDidLoad;
-(UIButton *)liveButton;
-(void)setLiveButton:(UIButton *)arg1 ;
-(UIButton *)nearbyAccessoryButton;
-(id)platterWithView:(id)arg1 ;
-(void)setNearbyAccessoryButton:(UIButton *)arg1 ;
@end

