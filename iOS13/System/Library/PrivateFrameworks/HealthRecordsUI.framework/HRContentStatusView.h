/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface HRContentStatusView : UIView {

	 titleLabel;
	 subtitleLabel;
	 spinnerView;
	 title;
	 subtitle;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * subtitle; 
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
@end

