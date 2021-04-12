/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class SBFluidSwitcherItemContainerHeaderItem, SBFluidSwitcherIconImageContainerView, UILabel, BSUIEmojiLabelView, MTVisualStyling, NSArray, NSString;

@interface SBFluidSwitcherItemContainerHeaderView : UIView <PTSettingsKeyObserver> {

	SBFluidSwitcherItemContainerHeaderItem* _firstItem;
	SBFluidSwitcherIconImageContainerView* _firstIconImageView;
	UILabel* _firstTitleLabel;
	BSUIEmojiLabelView* _firstSubtitleLabelView;
	SBFluidSwitcherItemContainerHeaderItem* _secondItem;
	SBFluidSwitcherIconImageContainerView* _secondIconImageView;
	UILabel* _secondTitleLabel;
	BSUIEmojiLabelView* _secondSubtitleLabelView;
	long long _subtitleVisualStylingInterfaceStyle;
	MTVisualStyling* _subtitleVisualStyling;
	double _spacingBetweenLeadingEdgeAndIcon;
	double _spacingBetweenTrailingEdgeAndLabels;
	double _iconSideLength;
	double _spacingBetweenSnapshotAndIcon;
	double _spacingBetweenSnapshotAndDescriptionLabelBaseline;
	double _spacingBetweenTitleAndSubtitleBaseline;
	double _spacingBetweenIconAndLabel;
	double _spacingBetweenLabelAndSecondIcon;
	double _spacingBetweenBoundsCenterAndSecondIcon;
	double _textAlpha;
	NSArray* _headerItems;

}

@property (nonatomic,readonly) double preferredHeaderHeight; 
@property (assign,nonatomic) double textAlpha;                            //@synthesize textAlpha=_textAlpha - In the implementation block
@property (nonatomic,copy) NSArray * headerItems;                         //@synthesize headerItems=_headerItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)distanceFromBoundingLeadingEdgeToIconTrailingEdge;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_titleLabelFont;
-(void)setTextAlpha:(double)arg1 ;
-(double)textAlpha;
-(NSArray *)headerItems;
-(void)setHeaderItems:(NSArray *)arg1 ;
-(id)_subtitleLabelFont;
-(void)setHeaderItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)_applyPrototypeSettings;
-(double)preferredHeaderHeight;
-(void)_updateVisualStylingWithHeaderItems:(id)arg1 ;
-(void)_updateTitleAlpha;
@end

