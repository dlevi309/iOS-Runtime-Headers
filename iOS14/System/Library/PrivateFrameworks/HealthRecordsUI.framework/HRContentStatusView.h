/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)startAnimating;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)stopAnimating;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
@end

