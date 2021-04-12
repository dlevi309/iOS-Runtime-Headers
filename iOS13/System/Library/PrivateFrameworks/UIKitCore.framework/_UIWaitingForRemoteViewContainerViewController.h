/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController {

	UIActivityIndicatorView* _loadingSpinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingSpinner;              //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)stopSpinner;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingSpinner;
@end

