/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol TLKDescriptionViewDelegate;
@class TLKImage, TLKMultilineText, NSString, TLKStackView, TLKLabel, TLKTextView, TLKTextButton, TLKImageView, NUIContainerBoxView, UIBezierPath;

@interface TLKDescriptionView : TLKView <NUIContainerViewDelegate> {

	TLKImage* _image;
	TLKMultilineText* _text;
	TLKMultilineText* _title;
	NSString* _footnoteButtonText;
	NSString* _moreButtonText;
	id<TLKDescriptionViewDelegate> _delegate;
	TLKStackView* _stackView;
	TLKLabel* _titleLabel;
	TLKTextView* _detailsTextView;
	TLKTextButton* _moreButton;
	TLKImageView* _imageView;
	NUIContainerBoxView* _imageAndDescriptionBoxView;
	UIBezierPath* _imageViewExclusionPath;
	UIBezierPath* _moreButtonExclusionPath;
	TLKTextButton* _footnoteButton;

}

@property (nonatomic,retain) TLKStackView * stackView;                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) TLKLabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TLKTextView * detailsTextView;                                 //@synthesize detailsTextView=_detailsTextView - In the implementation block
@property (nonatomic,retain) TLKTextButton * moreButton;                                    //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,retain) TLKImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NUIContainerBoxView * imageAndDescriptionBoxView;              //@synthesize imageAndDescriptionBoxView=_imageAndDescriptionBoxView - In the implementation block
@property (nonatomic,retain) UIBezierPath * imageViewExclusionPath;                         //@synthesize imageViewExclusionPath=_imageViewExclusionPath - In the implementation block
@property (nonatomic,retain) UIBezierPath * moreButtonExclusionPath;                        //@synthesize moreButtonExclusionPath=_moreButtonExclusionPath - In the implementation block
@property (nonatomic,retain) TLKTextButton * footnoteButton;                                //@synthesize footnoteButton=_footnoteButton - In the implementation block
@property (nonatomic,retain) TLKImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TLKMultilineText * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) TLKMultilineText * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * footnoteButtonText;                                 //@synthesize footnoteButtonText=_footnoteButtonText - In the implementation block
@property (nonatomic,retain) NSString * moreButtonText;                                     //@synthesize moreButtonText=_moreButtonText - In the implementation block
@property (__weak) id<TLKDescriptionViewDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TLKDescriptionViewDelegate>)delegate;
-(void)setDelegate:(id<TLKDescriptionViewDelegate>)arg1 ;
-(TLKMultilineText *)title;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(TLKImage *)image;
-(void)setImage:(TLKImage *)arg1 ;
-(TLKMultilineText *)text;
-(void)setText:(TLKMultilineText *)arg1 ;
-(TLKLabel *)titleLabel;
-(TLKImageView *)imageView;
-(TLKStackView *)stackView;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(long long)numberOfLines;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setImageView:(TLKImageView *)arg1 ;
-(void)setStackView:(TLKStackView *)arg1 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)footnoteButtonPressed;
-(NSString *)footnoteButtonText;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(BOOL)usesDefaultInsets;
-(TLKTextButton *)footnoteButton;
-(void)setFootnoteButton:(TLKTextButton *)arg1 ;
-(void)moreButtonPressed;
-(void)setDetailsTextView:(TLKTextView *)arg1 ;
-(void)setMoreButton:(TLKTextButton *)arg1 ;
-(void)setImageAndDescriptionBoxView:(NUIContainerBoxView *)arg1 ;
-(void)setImageViewExclusionPath:(UIBezierPath *)arg1 ;
-(void)setMoreButtonExclusionPath:(UIBezierPath *)arg1 ;
-(TLKTextView *)detailsTextView;
-(NUIContainerBoxView *)imageAndDescriptionBoxView;
-(TLKTextButton *)moreButton;
-(NSString *)moreButtonText;
-(UIBezierPath *)imageViewExclusionPath;
-(void)setExclusionPathInContainer:(id)arg1 includeMoreButton:(BOOL)arg2 ;
-(BOOL)shouldHideMoreButtonForTextView:(id)arg1 ;
-(UIBezierPath *)moreButtonExclusionPath;
-(CGSize)textSizeForTextView:(id)arg1 width:(double)arg2 lineCount:(unsigned long long)arg3 ;
-(void)setMoreButtonText:(NSString *)arg1 ;
-(void)simulateMoreButtonPress;
-(id)imageExclusionPath;
-(id)detailTextViewText;
-(BOOL)moreButtonIsHidden;
-(id)exclusionPathsForTextView;
@end

