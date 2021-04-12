/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UIViewController.h>

@class UIView, NSMutableArray;

@interface CACContainerViewController : UIViewController {

	UIView* _viewAboveContainedViews;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,retain) NSMutableArray * viewControllers;                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIView * viewAboveContainedViews; 
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(NSMutableArray *)viewControllers;
-(void)setViewControllers:(NSMutableArray *)arg1 ;
-(UIView *)viewAboveContainedViews;
-(void)installViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)uninstallViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

