/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem {

	UIActivityIndicatorView* _activityIndicator;

}

@property (retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(id)init;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
@end

