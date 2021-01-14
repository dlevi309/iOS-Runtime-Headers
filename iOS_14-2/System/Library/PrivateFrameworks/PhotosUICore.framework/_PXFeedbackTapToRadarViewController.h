/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@protocol _PXFeedbackTapToRadarViewControllerDelegate;
@class UISwitch, UISegmentedControl, UILabel;

@interface _PXFeedbackTapToRadarViewController : UIViewController {

	UISwitch* _screenshotSwitch;
	UISwitch* _diagnoseSwitch;
	id<_PXFeedbackTapToRadarViewControllerDelegate> _delegate;
	UISegmentedControl* _segmentedControl;
	UILabel* _routesDescriptionLabel;

}

@property (nonatomic,retain) UISwitch * screenshotSwitch;                                           //@synthesize screenshotSwitch=_screenshotSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * diagnoseSwitch;                                             //@synthesize diagnoseSwitch=_diagnoseSwitch - In the implementation block
@property (nonatomic,retain) id<_PXFeedbackTapToRadarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                                 //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UILabel * routesDescriptionLabel;                                      //@synthesize routesDescriptionLabel=_routesDescriptionLabel - In the implementation block
-(id<_PXFeedbackTapToRadarViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_PXFeedbackTapToRadarViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)_didSelectCancelButton:(id)arg1 ;
-(void)_didSelectFileRadarButton:(id)arg1 ;
-(UISwitch *)screenshotSwitch;
-(void)setScreenshotSwitch:(UISwitch *)arg1 ;
-(UISwitch *)diagnoseSwitch;
-(void)setDiagnoseSwitch:(UISwitch *)arg1 ;
-(UILabel *)routesDescriptionLabel;
-(void)setRoutesDescriptionLabel:(UILabel *)arg1 ;
@end

