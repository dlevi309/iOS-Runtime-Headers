/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)done;
-(void)showInView:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)hide;
-(void)dealloc;
@end

