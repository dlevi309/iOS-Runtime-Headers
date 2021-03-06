/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <libobjc.A.dylib/TLKTextAreaViewTesting.h>

@protocol TLKTextAreaViewDelegate;
@class TLKRichText, TLKImage, NSArray, NSString, TLKEmbossedLabel, TLKTitleContainerView, NUIContainerStackView, NSMutableArray, TLKLabel, TLKRichTextField, TLKTextButton, TLKStackView;

@interface TLKTextAreaView : TLKView <NUIContainerViewDelegate, TLKTextAreaViewTesting> {

	BOOL _truncateTitleMiddle;
	BOOL _secondaryTitleIsDetached;
	BOOL _useCompactMode;
	BOOL _disableAllObservers;
	BOOL _isHorizontallyCompressed;
	id<TLKTextAreaViewDelegate> _buttonDelegate;
	TLKRichText* _bannerText;
	TLKRichText* _title;
	TLKRichText* _secondaryTitle;
	TLKImage* _secondaryTitleImage;
	NSArray* _detailTexts;
	TLKRichText* _footnote;
	NSString* _footnoteButtonText;
	TLKEmbossedLabel* _bannerBadgeView;
	TLKTitleContainerView* _titleContainer;
	NUIContainerStackView* _detailFieldStackView;
	NSMutableArray* _detailsFields;
	NSMutableArray* _bulletFields;
	TLKLabel* _hyphenField;
	TLKRichTextField* _footnoteLabel;
	TLKTextButton* _footnoteButton;
	NUIContainerStackView* _footnoteContainer;

}

@property (nonatomic,retain) TLKStackView * contentView; 
@property (nonatomic,retain) TLKEmbossedLabel * bannerBadgeView;                        //@synthesize bannerBadgeView=_bannerBadgeView - In the implementation block
@property (nonatomic,retain) TLKTitleContainerView * titleContainer;                    //@synthesize titleContainer=_titleContainer - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * detailFieldStackView;              //@synthesize detailFieldStackView=_detailFieldStackView - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailsFields;                            //@synthesize detailsFields=_detailsFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * bulletFields;                             //@synthesize bulletFields=_bulletFields - In the implementation block
@property (nonatomic,retain) TLKLabel * hyphenField;                                    //@synthesize hyphenField=_hyphenField - In the implementation block
@property (nonatomic,retain) TLKRichTextField * footnoteLabel;                          //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) TLKTextButton * footnoteButton;                            //@synthesize footnoteButton=_footnoteButton - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * footnoteContainer;                 //@synthesize footnoteContainer=_footnoteContainer - In the implementation block
@property (assign,nonatomic) BOOL disableAllObservers;                                  //@synthesize disableAllObservers=_disableAllObservers - In the implementation block
@property (assign,nonatomic) BOOL isHorizontallyCompressed;                             //@synthesize isHorizontallyCompressed=_isHorizontallyCompressed - In the implementation block
@property (__weak) id<TLKTextAreaViewDelegate> buttonDelegate;                          //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
@property (nonatomic,retain) TLKRichText * bannerText;                                  //@synthesize bannerText=_bannerText - In the implementation block
@property (nonatomic,retain) TLKRichText * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL truncateTitleMiddle;                                  //@synthesize truncateTitleMiddle=_truncateTitleMiddle - In the implementation block
@property (nonatomic,retain) TLKRichText * secondaryTitle;                              //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) TLKImage * secondaryTitleImage;                            //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (assign,nonatomic) BOOL secondaryTitleIsDetached;                             //@synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached - In the implementation block
@property (nonatomic,retain) NSArray * detailTexts;                                     //@synthesize detailTexts=_detailTexts - In the implementation block
@property (nonatomic,retain) TLKRichText * footnote;                                    //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) NSString * footnoteButtonText;                             //@synthesize footnoteButtonText=_footnoteButtonText - In the implementation block
@property (assign,nonatomic) BOOL useCompactMode;                                       //@synthesize useCompactMode=_useCompactMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)footNoteLabelFont;
-(id)viewForLastBaselineLayout;
-(id)titleView;
-(void)setSecondaryTitle:(TLKRichText *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setTitle:(TLKRichText *)arg1 ;
-(void)setFootnoteLabel:(TLKRichTextField *)arg1 ;
-(TLKImage *)secondaryTitleImage;
-(TLKRichTextField *)footnoteLabel;
-(void)setFootnote:(TLKRichText *)arg1 ;
-(id<TLKTextAreaViewDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<TLKTextAreaViewDelegate>)arg1 ;
-(NUIContainerStackView *)footnoteContainer;
-(TLKRichText *)footnote;
-(TLKRichText *)secondaryTitle;
-(void)propertiesDidChange;
-(BOOL)useCompactMode;
-(id)setupContentView;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(TLKRichText *)bannerText;
-(void)setBannerText:(TLKRichText *)arg1 ;
-(BOOL)truncateTitleMiddle;
-(void)setTruncateTitleMiddle:(BOOL)arg1 ;
-(BOOL)secondaryTitleIsDetached;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(NSArray *)detailTexts;
-(void)setDetailTexts:(NSArray *)arg1 ;
-(NSString *)footnoteButtonText;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(TLKTitleContainerView *)titleContainer;
-(NSMutableArray *)detailsFields;
-(id)detailsStrings;
-(id)footnoteLabelString;
-(TLKTextButton *)footnoteButton;
-(BOOL)noFootNote;
-(void)setTitleContainer:(TLKTitleContainerView *)arg1 ;
-(void)setDetailsFields:(NSMutableArray *)arg1 ;
-(void)setBulletFields:(NSMutableArray *)arg1 ;
-(void)updateBannerBadge;
-(void)updateDetails;
-(void)updateFootnote;
-(TLKEmbossedLabel *)bannerBadgeView;
-(void)setBannerBadgeView:(TLKEmbossedLabel *)arg1 ;
-(NUIContainerStackView *)detailFieldStackView;
-(void)setDetailFieldStackView:(NUIContainerStackView *)arg1 ;
-(TLKLabel *)hyphenField;
-(void)setHyphenField:(TLKLabel *)arg1 ;
-(NSMutableArray *)bulletFields;
-(TLKRichText *)title;
-(void)updateDetailFieldStackViewVisibility;
-(BOOL)isHorizontallyCompressed;
-(void)internalTextFieldsInBatchUpdate:(BOOL)arg1 ;
-(void)setFootnoteContainer:(NUIContainerStackView *)arg1 ;
-(void)setFootnoteButton:(TLKTextButton *)arg1 ;
-(id)titleLabelString;
-(id)secondaryTitleLabelString;
-(BOOL)noRichTextFields;
-(id)detailsViews;
-(BOOL)disableAllObservers;
-(void)setDisableAllObservers:(BOOL)arg1 ;
-(void)setIsHorizontallyCompressed:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(TLKImage *)arg1 ;
@end

