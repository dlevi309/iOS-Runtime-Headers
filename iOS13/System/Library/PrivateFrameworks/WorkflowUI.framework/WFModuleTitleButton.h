/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, NSString;

@interface WFModuleTitleButton : UIButton {

	unsigned long long _style;
	UILabel* _subtitleLabel;

}

@property (assign,nonatomic) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSString *)subtitle;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(UILabel *)subtitleLabel;
-(CGSize)iconSize;
-(CGSize)sizeForLabel:(id)arg1 withMaxWidth:(double)arg2 ;
-(BOOL)isTitleLabelMultiline;
-(double)iconTitlePadding;
-(double)titleSubtitlePadding;
@end

