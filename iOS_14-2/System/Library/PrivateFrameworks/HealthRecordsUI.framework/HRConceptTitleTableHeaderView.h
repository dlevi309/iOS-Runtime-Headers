/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface HRConceptTitleTableHeaderView : UIView {

	 titleLabel;
	 actionButton;
	 fontChoices;
	 widthCache;
	 titleCache;
	 delegate;
	 bottomExtraSpace;

}

@property (assign,__weak,nonatomic) id<HRConceptTitleTableHeaderViewDelegate> delegate; 
@property (assign,nonatomic) double bottomExtraSpace; 
@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * buttonTitle; 
-(NSString *)buttonTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HRConceptTitleTableHeaderViewDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(double)bottomExtraSpace;
-(void)actionButtonTappedWithSender:(id)arg1 ;
-(void)setDelegate:(id<HRConceptTitleTableHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setBottomExtraSpace:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

