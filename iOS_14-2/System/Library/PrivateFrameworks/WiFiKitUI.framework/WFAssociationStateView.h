/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UIImageView;

@interface WFAssociationStateView : UIView {

	long long _state;
	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long state;                                          //@synthesize state=_state - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)layoutSubviews;
-(void)setState:(long long)arg1 ;
-(long long)state;
@end

