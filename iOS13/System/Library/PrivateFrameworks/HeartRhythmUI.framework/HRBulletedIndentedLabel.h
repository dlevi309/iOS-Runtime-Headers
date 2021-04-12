/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)lastBaselineAnchor;
-(id)firstBaselineAnchor;
-(id)initWithText:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateLeadingDetailAttributedTextSize;
@end

