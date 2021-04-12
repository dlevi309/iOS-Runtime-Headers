/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIActivityIndicatorView, UILabel;

@interface SBSUIProgressHUD : UIView {

	_UIBackdropView* _backdropView;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _label;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)hide;
-(void)showMessage:(id)arg1 inView:(id)arg2 ;
@end

