/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@class UIActivityIndicatorView, UILabel;

@interface AMSUILoadingView : AMSUICommonView {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _label;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setLoadingText:(id)arg1 ;
-(UILabel *)label;
@end

