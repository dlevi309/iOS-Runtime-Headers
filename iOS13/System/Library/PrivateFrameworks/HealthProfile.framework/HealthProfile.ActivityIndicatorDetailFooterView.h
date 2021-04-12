/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthProfile.framework/HealthProfile
*/

#import <HealthProfile/HealthProfile-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, UITextView, UIActivityIndicatorView;

@interface HealthProfile.ActivityIndicatorDetailFooterView : UIView <UITextViewDelegate> {

	 titleLabel;
	 detailTextView;
	 activityIndicatorView;
	??? action;

}

@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UITextView * detailTextView; 
@property (assign,__weak,nonatomic) UIActivityIndicatorView * activityIndicatorView; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UITextView *)detailTextView;
-(void)setDetailTextView:(UITextView *)arg1 ;
@end

