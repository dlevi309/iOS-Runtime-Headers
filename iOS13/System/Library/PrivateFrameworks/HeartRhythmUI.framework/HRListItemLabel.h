/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, NSString, NSLayoutConstraint;

@interface HRListItemLabel : UIView {

	BOOL _centerItemViewToFirstLine;
	BOOL _boldText;
	UIView* _itemView;
	UILabel* _textLabel;
	NSString* _text;
	NSLayoutConstraint* _itemViewTextAlignmentConstraint;
	NSLayoutConstraint* _topToTextLabelFirstBaselineConstraint;
	CGSize _itemViewSize;

}

@property (assign,nonatomic) CGSize itemViewSize;                                                     //@synthesize itemViewSize=_itemViewSize - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIView * itemView;                                                       //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * itemViewTextAlignmentConstraint;                    //@synthesize itemViewTextAlignmentConstraint=_itemViewTextAlignmentConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToTextLabelFirstBaselineConstraint;              //@synthesize topToTextLabelFirstBaselineConstraint=_topToTextLabelFirstBaselineConstraint - In the implementation block
@property (assign,nonatomic) BOOL centerItemViewToFirstLine;                                          //@synthesize centerItemViewToFirstLine=_centerItemViewToFirstLine - In the implementation block
@property (assign,nonatomic) BOOL boldText;                                                           //@synthesize boldText=_boldText - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UILabel *)textLabel;
-(BOOL)boldText;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setBoldText:(BOOL)arg1 ;
-(void)_setUpConstraints;
-(void)setItemView:(UIView *)arg1 ;
-(UIView *)itemView;
-(id)_textLabelFont;
-(void)_setUpUI;
-(void)_updateTextLabelFont;
-(id)_textLabelBoldFont;
-(id)_textLabelFontStyle;
-(void)_updateItemViewTextAlignmentConstraint;
-(CGSize)itemViewSize;
-(double)_topToTextLabelFirstBaseline;
-(double)_textLabelLastBaselineToBottom;
-(NSLayoutConstraint *)itemViewTextAlignmentConstraint;
-(void)setItemViewTextAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)centerItemViewToFirstLine;
-(id)initWithView:(id)arg1 size:(CGSize)arg2 text:(id)arg3 ;
-(void)setCenterItemViewToFirstLine:(BOOL)arg1 ;
-(void)setItemViewSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)topToTextLabelFirstBaselineConstraint;
-(void)setTopToTextLabelFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end

