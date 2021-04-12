/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)_configureSubTitleLabelForBounds:(CGRect)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
@end

