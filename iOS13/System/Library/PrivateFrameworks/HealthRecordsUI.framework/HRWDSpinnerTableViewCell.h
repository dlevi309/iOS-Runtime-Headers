/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView, UIActivityIndicatorView, UILabel, NSString;

@interface HRWDSpinnerTableViewCell : UITableViewCell {

	UIView* _contentContainerView;
	UIActivityIndicatorView* _spinner;
	UILabel* _waitingReasonLabel;

}

@property (retain) UIView * contentContainerView;                   //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (retain) UIActivityIndicatorView * spinner;               //@synthesize spinner=_spinner - In the implementation block
@property (retain) UILabel * waitingReasonLabel;                    //@synthesize waitingReasonLabel=_waitingReasonLabel - In the implementation block
@property (nonatomic,retain) NSString * waitingReason; 
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UIView *)contentContainerView;
-(void)setContentContainerView:(UIView *)arg1 ;
-(UILabel *)waitingReasonLabel;
-(void)setWaitingReasonLabel:(UILabel *)arg1 ;
-(void)setWaitingReason:(NSString *)arg1 ;
-(NSString *)waitingReason;
@end

