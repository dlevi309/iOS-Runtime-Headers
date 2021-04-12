/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UIViewController.h>

@class UIView, CFXLiveCaptureViewController;

@interface CFXNonTransformedLiveCaptureContainerViewController : UIViewController {

	UIView* _liveCaptureContainer;
	UIView* _liveCaptureContainerContainer;
	CFXLiveCaptureViewController* _liveCaptureViewController;

}

@property (nonatomic,retain) UIView * liveCaptureContainer;                                           //@synthesize liveCaptureContainer=_liveCaptureContainer - In the implementation block
@property (nonatomic,retain) UIView * liveCaptureContainerContainer;                                  //@synthesize liveCaptureContainerContainer=_liveCaptureContainerContainer - In the implementation block
@property (nonatomic,readonly) CFXLiveCaptureViewController * liveCaptureViewController;              //@synthesize liveCaptureViewController=_liveCaptureViewController - In the implementation block
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(CFXLiveCaptureViewController *)liveCaptureViewController;
-(UIView *)liveCaptureContainer;
-(UIView *)liveCaptureContainerContainer;
-(void)setLiveCaptureContainer:(UIView *)arg1 ;
-(void)setLiveCaptureContainerContainer:(UIView *)arg1 ;
@end

