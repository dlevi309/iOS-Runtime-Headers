/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIActivityIndicatorView, UILabel, UIImageView;

@interface PLProgressHUD : UIView {

	_UIBackdropView* _backdropView;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _label;
	UIImageView* _checkmarkView;
	BOOL _isShowing;

}
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)done;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)showInView:(id)arg1 ;
-(void)hide;
@end

