/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKStackView.h>
#import <libobjc.A.dylib/TLKTextAreaViewTesting.h>

@protocol TLKTextAreaViewDelegate;
@class TLKTitleContainerView, NSMutableArray, TLKRichTextField, TLKTextButton, NUIContainerStackView, NSString;

@interface TLKTextAreaView : TLKStackView <TLKTextAreaViewTesting> {

	BOOL _disableAllObservers;
	id<TLKTextAreaViewDelegate> _buttonDelegate;
	TLKTitleContainerView* _titleContainer;
	NSMutableArray* _detailsFields;
	TLKRichTextField* _footnoteLabel;
	TLKTextButton* _footnoteButton;
	NUIContainerStackView* _footnoteContainer;

}

@property (nonatomic,retain) TLKTitleContainerView * titleContainer;                 //@synthesize titleContainer=_titleContainer - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailsFields;                         //@synthesize detailsFields=_detailsFields - In the implementation block
@property (nonatomic,retain) TLKRichTextField * footnoteLabel;                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) TLKTextButton * footnoteButton;                         //@synthesize footnoteButton=_footnoteButton - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * footnoteContainer;              //@synthesize footnoteContainer=_footnoteContainer - In the implementation block
@property (assign,nonatomic) BOOL disableAllObservers;                               //@synthesize disableAllObservers=_disableAllObservers - In the implementation block
@property (__weak) id<TLKTextAreaViewDelegate> buttonDelegate;                       //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)footNoteLabelFont;
-(id)init;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(id)titleView;
-(TLKRichTextField *)footnoteLabel;
-(void)setFootnoteLabel:(TLKRichTextField *)arg1 ;
-(NUIContainerStackView *)footnoteContainer;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id<TLKTextAreaViewDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<TLKTextAreaViewDelegate>)arg1 ;
-(id)detailsViews;
-(void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(BOOL)arg4 ;
-(void)updateDetails:(id)arg1 ;
-(void)updateFootnote:(id)arg1 buttonText:(id)arg2 ;
-(id)textAreaLabelStrings;
-(id)footnoteLabelString;
-(id)titleLabelString;
-(id)secondaryTitleLabelString;
-(void)setTitleContainer:(TLKTitleContainerView *)arg1 ;
-(TLKTitleContainerView *)titleContainer;
-(void)setDetailsFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)detailsFields;
-(void)internalTextFieldsInBatchUpdate:(BOOL)arg1 ;
-(void)setFootnoteContainer:(NUIContainerStackView *)arg1 ;
-(TLKTextButton *)footnoteButton;
-(void)setFootnoteButton:(TLKTextButton *)arg1 ;
-(BOOL)noRichTextFields;
-(BOOL)noFootNote;
-(BOOL)disableAllObservers;
-(void)setDisableAllObservers:(BOOL)arg1 ;
@end

