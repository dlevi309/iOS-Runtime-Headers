/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class NSAttributedString, UILabel, NSString;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView {

	NSAttributedString* _attributedSubtitleText;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitleText;              //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
-(void)_configureSubTitleLabelForBounds:(CGRect)arg1 ;
@end

