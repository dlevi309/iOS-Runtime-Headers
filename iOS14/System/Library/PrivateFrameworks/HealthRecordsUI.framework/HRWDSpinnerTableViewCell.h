/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)contentContainerView;
-(UIActivityIndicatorView *)spinner;
-(void)prepareForReuse;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setupSubviews;
-(UILabel *)waitingReasonLabel;
-(void)setWaitingReasonLabel:(UILabel *)arg1 ;
-(void)setWaitingReason:(NSString *)arg1 ;
-(NSString *)waitingReason;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setupConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

