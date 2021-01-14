/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController {

	UIActivityIndicatorView* _loadingSpinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingSpinner;              //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
-(BOOL)_canShowWhileLocked;
-(void)stopSpinner;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingSpinner;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

