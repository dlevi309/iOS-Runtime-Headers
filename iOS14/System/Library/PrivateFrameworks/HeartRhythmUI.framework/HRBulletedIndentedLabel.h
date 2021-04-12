/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface HRBulletedIndentedLabel : UIView {

	NSString* _text;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                //@synthesize text=_text - In the implementation block
+(id)_bodyFont;
+(id)_bodyFontTextStyle;
-(id)initWithText:(id)arg1 ;
-(void)_setUpConstraints;
-(void)setText:(NSString *)arg1 ;
-(id)firstBaselineAnchor;
-(NSString *)text;
-(id)lastBaselineAnchor;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_setUpUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)label;
-(void)_updateLeadingDetailAttributedTextSize;
@end

