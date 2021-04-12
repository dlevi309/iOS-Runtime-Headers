/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUILabelStackTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UIImageView, UILabel, UIButton, NSString;

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView> {

	UIImageView* _chevronView;
	UILabel* _detailTextLabel;
	UIButton* _disclosureButton;

}

@property (nonatomic,retain) UIImageView * chevronView;                                      //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                                      //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (__weak) id<SiriUITextTemplateModel> dataSource; 
@property (nonatomic,retain) UIButton * disclosureButton;                                    //@synthesize disclosureButton=_disclosureButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
-(id)initWithDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(UILabel *)detailTextLabel;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(void)layoutDetailText;
-(void)setupDisclosureIndicator;
-(void)_setupDisclosureButton;
-(void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2 ;
-(void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2 ;
-(UIButton *)disclosureButton;
-(void)setDisclosureButton:(UIButton *)arg1 ;
@end

