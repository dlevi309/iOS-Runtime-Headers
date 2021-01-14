/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)viewDidLoad;
-(CFXLiveCaptureViewController *)liveCaptureViewController;
-(UIView *)liveCaptureContainer;
-(UIView *)liveCaptureContainerContainer;
-(void)setLiveCaptureContainer:(UIView *)arg1 ;
-(void)setLiveCaptureContainerContainer:(UIView *)arg1 ;
@end

