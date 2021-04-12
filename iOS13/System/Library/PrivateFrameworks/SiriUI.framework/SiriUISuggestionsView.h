/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUISuggestionsViewDelegate;
@class UIView, UILabel, NSArray, NSTimer, NSMutableOrderedSet, SiriUIAcousticIDSpinner, SiriUISuggestionsHeaderText, UIColor;

@interface SiriUISuggestionsView : UIView {

	UIView* _contentView;
	UILabel* _headerLabel;
	UILabel* _oldHeaderLabel;
	UILabel* _subheaderLabel;
	UILabel* _largeSubheaderLabel;
	NSArray* _suggestionLabels;
	NSArray* _oldSuggestionLabels;
	BOOL _firstSuggestionPresentation;
	NSTimer* _updateSuggestionsTimer;
	NSMutableOrderedSet* _pendedSuggestions;
	SiriUIAcousticIDSpinner* _acousticIDSpinner;
	unsigned long long _numberOfSuggestions;
	NSDirectionalEdgeInsets _edgeInsets;
	UIView* _guideView;
	SiriUISuggestionsHeaderText* _headerText;
	SiriUISuggestionsHeaderText* _subheaderText;
	SiriUISuggestionsHeaderText* _largeSubheaderText;
	UIColor* _textColor;
	id<SiriUISuggestionsViewDelegate> _delegate;
	long long _orientation;
	CGPoint _contentOffset;

}

@property (nonatomic,retain) UIView * guideView;                                             //@synthesize guideView=_guideView - In the implementation block
@property (assign,getter=isGuideHidden,nonatomic) BOOL guideHidden; 
@property (nonatomic,copy) SiriUISuggestionsHeaderText * headerText;                         //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) SiriUISuggestionsHeaderText * subheaderText;                      //@synthesize subheaderText=_subheaderText - In the implementation block
@property (nonatomic,copy) SiriUISuggestionsHeaderText * largeSubheaderText;                 //@synthesize largeSubheaderText=_largeSubheaderText - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                                          //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISuggestionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long orientation;                                          //@synthesize orientation=_orientation - In the implementation block
-(id<SiriUISuggestionsViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUISuggestionsViewDelegate>)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(UIColor *)textColor;
-(SiriUISuggestionsHeaderText *)headerText;
-(void)setHeaderText:(SiriUISuggestionsHeaderText *)arg1 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isPortrait;
-(void)_updateSuggestions;
-(void)stopSuggesting;
-(void)acousticIDSpinnerDidHide:(id)arg1 ;
-(double)_suggestionFontSize;
-(void)_setHeaderText:(id)arg1 ;
-(void)_setSubheaderText:(id)arg1 ;
-(double)_headerToSubheaderOffset;
-(double)_headerToLargeSubheaderOffset;
-(double)_suggestionSpacing;
-(id)_createSpringAnimation:(double)arg1 ;
-(double)_updateSuggestionsDelay;
-(void)setGuideHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isGuideHidden;
-(void)_animateHeaderOut;
-(void)_animateHeaderIn;
-(void)_loadSubheaderViewIfNeeded;
-(void)_setLargeSubheaderText:(id)arg1 ;
-(void)_loadLargeSubheaderViewIfNeeded;
-(void)_loadSuggestionsViewsIfNeeded;
-(void)_animateOutSuggestionAtIndex:(unsigned long long)arg1 ;
-(void)_animateInSuggestionAtIndex:(unsigned long long)arg1 ;
-(void)_setSuggestionTexts:(id)arg1 ;
-(void)clearCurrentSuggestions;
-(void)_reallyShowAcousticIDSpinner;
-(unsigned long long)_numberOfSuggestionsToDisplay;
-(int)_heightType;
-(BOOL)_isPadHeightType;
-(void)setGuideView:(UIView *)arg1 ;
-(void)setGuideHidden:(BOOL)arg1 ;
-(void)setSubheaderText:(SiriUISuggestionsHeaderText *)arg1 ;
-(void)setLargeSubheaderText:(SiriUISuggestionsHeaderText *)arg1 ;
-(void)startSuggesting;
-(BOOL)isShowingSuggestions;
-(void)showAcousticIDSpinner;
-(void)hideAcousticIDSpinner;
-(UIView *)guideView;
-(SiriUISuggestionsHeaderText *)subheaderText;
-(SiriUISuggestionsHeaderText *)largeSubheaderText;
@end

