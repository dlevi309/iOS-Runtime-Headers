/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <UIKitCore/UIStackView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface FPUIAuthenticationNavigationBarTitleView : UIStackView {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(UIActivityIndicatorView *)activityIndicator;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)title;
@end

