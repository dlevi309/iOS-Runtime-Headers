/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthProfile.framework/HealthProfile
*/

#import <HealthProfile/HealthProfile-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class UIStackView, UILabel, UITextView, UIActivityIndicatorView;

@interface HealthProfile.ActivityIndicatorDetailView : UIView <UITextViewDelegate> {

	 titleStackView;
	 titleLabel;
	 detailTextView;
	 activityIndicatorView;

}

@property (assign,__weak,nonatomic) UIStackView * titleStackView; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UITextView * detailTextView; 
@property (assign,__weak,nonatomic) UIActivityIndicatorView * activityIndicatorView; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)awakeFromNib;
-(UIStackView *)titleStackView;
-(void)setTitleStackView:(UIStackView *)arg1 ;
-(UITextView *)detailTextView;
-(void)setDetailTextView:(UITextView *)arg1 ;
@end

