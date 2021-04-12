/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol DOCTagViewDelegate;
@class NSArray, NUIContainerStackView, DOCTagView, DOCTagDotView, DOCVisualEffectLabel;

@interface DOCTagsLineView : UIView {

	NSArray* _tags;
	id<DOCTagViewDelegate> _delegate;
	NUIContainerStackView* _stackView;
	DOCTagView* _tag1View;
	DOCTagView* _tag2View;
	NUIContainerStackView* _dotsView;
	DOCTagDotView* _dot1View;
	DOCTagDotView* _dot2View;
	DOCTagDotView* _dot3View;
	DOCVisualEffectLabel* _tagSummaryLabel;
	NSArray* _tagWidthConstraints;

}

@property (nonatomic,readonly) NUIContainerStackView * stackView;                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) DOCTagView * tag1View;                               //@synthesize tag1View=_tag1View - In the implementation block
@property (nonatomic,readonly) DOCTagView * tag2View;                               //@synthesize tag2View=_tag2View - In the implementation block
@property (nonatomic,readonly) NUIContainerStackView * dotsView;                    //@synthesize dotsView=_dotsView - In the implementation block
@property (nonatomic,readonly) DOCTagDotView * dot1View;                            //@synthesize dot1View=_dot1View - In the implementation block
@property (nonatomic,readonly) DOCTagDotView * dot2View;                            //@synthesize dot2View=_dot2View - In the implementation block
@property (nonatomic,readonly) DOCTagDotView * dot3View;                            //@synthesize dot3View=_dot3View - In the implementation block
@property (nonatomic,readonly) DOCVisualEffectLabel * tagSummaryLabel;              //@synthesize tagSummaryLabel=_tagSummaryLabel - In the implementation block
@property (nonatomic,readonly) NSArray * tagWidthConstraints;                       //@synthesize tagWidthConstraints=_tagWidthConstraints - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                        //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic,__weak) id<DOCTagViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id<DOCTagViewDelegate>)delegate;
-(void)setDelegate:(id<DOCTagViewDelegate>)arg1 ;
-(NSArray *)tags;
-(void)setTags:(NSArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(NUIContainerStackView *)stackView;
-(void)didMoveToWindow;
-(void)layoutTags;
-(id)createTagView;
-(id)createDotView;
-(id)createTagSummaryLabel;
-(NUIContainerStackView *)dotsView;
-(DOCTagDotView *)dot1View;
-(DOCTagDotView *)dot2View;
-(DOCTagDotView *)dot3View;
-(DOCTagView *)tag1View;
-(DOCTagView *)tag2View;
-(DOCVisualEffectLabel *)tagSummaryLabel;
-(void)updateMaxTagWidth;
-(void)configureTagView:(id)arg1 withTag:(id)arg2 ;
-(void)configureDotsView:(id)arg1 withTags:(id)arg2 ;
-(void)configureTagLabel:(id)arg1 withTag:(id)arg2 tagCount:(unsigned long long)arg3 ;
-(double)maxTagWidth;
-(void)configureDotView:(id)arg1 withTag:(id)arg2 ;
-(NSArray *)tagWidthConstraints;
@end

