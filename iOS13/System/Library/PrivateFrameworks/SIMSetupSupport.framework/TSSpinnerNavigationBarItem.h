/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem {

	UIActivityIndicatorView* _activityIndicator;

}

@property (retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)init;
-(void)startAnimating;
-(void)stopAnimating;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

