/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
@end

