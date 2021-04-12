/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, ICAttachmentBrickLabelV2, UILayoutGuide, NSLayoutConstraint;

@interface ICAttachmentBrickTextViewV2 : UIView {

	BOOL _titleLight;
	BOOL _detail1Dark;
	BOOL _vibrant;
	BOOL _disableVibrancy;
	NSString* _titleString;
	NSString* _detail1String;
	NSString* _detail2String;
	ICAttachmentBrickLabelV2* _titleView;
	ICAttachmentBrickLabelV2* _detail1View;
	ICAttachmentBrickLabelV2* _detail2View;
	UILayoutGuide* _textBoxLayoutGuide;
	NSLayoutConstraint* _textBoxTopConstraint;
	NSLayoutConstraint* _textBoxLeadingConstraint;
	NSLayoutConstraint* _textBoxTrailingConstraint;
	NSLayoutConstraint* _textBoxBottomConstraint;

}

@property (nonatomic,retain) ICAttachmentBrickLabelV2 * titleView;                        //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickLabelV2 * detail1View;                      //@synthesize detail1View=_detail1View - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickLabelV2 * detail2View;                      //@synthesize detail2View=_detail2View - In the implementation block
@property (nonatomic,retain) UILayoutGuide * textBoxLayoutGuide;                          //@synthesize textBoxLayoutGuide=_textBoxLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textBoxTopConstraint;                   //@synthesize textBoxTopConstraint=_textBoxTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textBoxLeadingConstraint;               //@synthesize textBoxLeadingConstraint=_textBoxLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textBoxTrailingConstraint;              //@synthesize textBoxTrailingConstraint=_textBoxTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textBoxBottomConstraint;                //@synthesize textBoxBottomConstraint=_textBoxBottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleString;                                        //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * detail1String;                                      //@synthesize detail1String=_detail1String - In the implementation block
@property (nonatomic,copy) NSString * detail2String;                                      //@synthesize detail2String=_detail2String - In the implementation block
@property (assign,nonatomic) BOOL titleLight;                                             //@synthesize titleLight=_titleLight - In the implementation block
@property (assign,nonatomic) BOOL detail1Dark;                                            //@synthesize detail1Dark=_detail1Dark - In the implementation block
@property (assign,nonatomic) BOOL vibrant;                                                //@synthesize vibrant=_vibrant - In the implementation block
@property (assign,nonatomic) BOOL disableVibrancy;                                        //@synthesize disableVibrancy=_disableVibrancy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(ICAttachmentBrickLabelV2 *)titleView;
-(void)setTitleView:(ICAttachmentBrickLabelV2 *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(BOOL)vibrant;
-(void)setVibrant:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange;
-(BOOL)allowsVibrancy;
-(void)updateMargins;
-(NSString *)detail1String;
-(NSString *)detail2String;
-(void)setDetail1String:(NSString *)arg1 ;
-(void)setDetail2String:(NSString *)arg1 ;
-(BOOL)titleLight;
-(void)setTitleLight:(BOOL)arg1 ;
-(BOOL)detail1Dark;
-(void)setDetail1Dark:(BOOL)arg1 ;
-(void)updateTextLayout;
-(void)setDisableVibrancy:(BOOL)arg1 ;
-(BOOL)disableVibrancy;
-(void)updateTextColors;
-(ICAttachmentBrickLabelV2 *)detail1View;
-(ICAttachmentBrickLabelV2 *)detail2View;
-(void)setTextBoxLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)textBoxLayoutGuide;
-(void)setTextBoxTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextBoxLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextBoxTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextBoxBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textBoxTopConstraint;
-(NSLayoutConstraint *)textBoxLeadingConstraint;
-(NSLayoutConstraint *)textBoxTrailingConstraint;
-(NSLayoutConstraint *)textBoxBottomConstraint;
-(void)setDetail1View:(ICAttachmentBrickLabelV2 *)arg1 ;
-(void)setDetail2View:(ICAttachmentBrickLabelV2 *)arg1 ;
-(void)updateTextFonts;
@end

