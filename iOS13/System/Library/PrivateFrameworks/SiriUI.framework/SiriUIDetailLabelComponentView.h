/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(UILabel *)mainLabel;
-(void)setMainLabel:(UILabel *)arg1 ;
-(void)addSubviewsForComponentModel:(id)arg1 ;
@end

