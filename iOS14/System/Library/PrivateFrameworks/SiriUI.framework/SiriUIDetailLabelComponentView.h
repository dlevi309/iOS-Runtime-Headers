/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUILabelComponentView.h>

@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView {

	UILabel* _mainLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * mainLabel;                //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
+(id)viewForComponent:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(UILabel *)mainLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)addSubviewsForComponentModel:(id)arg1 ;
@end

