/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)showMessage:(id)arg1 inView:(id)arg2 ;
-(void)hide;
@end

